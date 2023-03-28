from flask import render_template,redirect,url_for,Blueprint,request
from flask_login import login_user,current_user,login_required,logout_user
from main_app import db,bcrypt
from main_app.models import User,Notice
from main_app.users.forms import AdmissionForm,LoginForm,LoginFormParents,ApplyParentsForm,ApplyTeacherForm,DemoRegForm

users = Blueprint('users', __name__)


@users.route('/admission', methods=['GET', 'POST'])
def admission():
    form = AdmissionForm()
    return render_template('admission.html', title='Admission', form=form)


@users.route('/parents/apply', methods=['GET', 'POST'])
def apply_parents():
    form = ApplyParentsForm()
    return render_template('apply_parents.html', title='Parents Application', form=form)

@users.route('/teacher/apply', methods=['GET', 'POST'])
def apply_teacher():
    form = ApplyTeacherForm()
    return render_template('apply_teacher.html', title='Teacher Application', form=form)

@users.route('/dashboard')
def dashboard():
    return render_template('dashboard.html', title='Dasboard')


@users.route('/demo/register', methods=['GET', 'POST'])
def demo_register():
    form = DemoRegForm()
    if form.validate_on_submit():
        hashed_password = bcrypt.generate_password_hash(form.password.data).decode('utf-8')
        user = User(username=form.username.data, email=form.email.data, password=hashed_password)
        db.session.add(user)
        db.session.commit()
        return redirect(url_for('users.login'))
    return render_template('demo_register.html', title='Demo Register', form=form)


@users.route('/login', methods=['GET', 'POST'])
def login():
    form = LoginForm()
    if form.validate_on_submit():
        user = User.query.filter_by(email=form.email.data).first()
        if user and bcrypt.check_password_hash(user.password, form.password.data):
            login_user(user, remember=form.remember_me.data)
            next_page = request.args.get('next')
            return redirect(next_page) if next_page else redirect(url_for('users.dashboard'))
    return render_template('login.html', title='Login', form=form)


@users.route('/login/parents', methods=['GET', 'POST'])
def login_parents():
    form = LoginFormParents()
    return render_template('login_parents.html', title='Login', form=form)
