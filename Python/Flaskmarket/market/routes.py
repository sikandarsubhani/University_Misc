from market import app,db
from flask import render_template,redirect,url_for,flash,get_flashed_messages
from market.models import Item, User
from market.forms import RegisterForm,LoginForm
from flask_login import login_user,logout_user,login_required

@app.route("/")
def home_page():
    return render_template("index.html")

@app.route("/market")
@login_required
def market_page():
    items=Item.query.all()
    return render_template('market.html',items=items)

@app.route('/register',methods=['GET','POST'])
def register_page():
    form=RegisterForm()
    if form.validate_on_submit():
        user_to_create=User(username=form.username.data,email_address=form.email_address.data,password=form.password1.data)
        db.session.add(user_to_create)
        db.session.commit()
        login_user(user_to_create)
        flash(f'Registered Successfully! Youre Logged in as: {user_to_create.username}',category='success')
        return redirect(url_for('market_page'))

    if form.errors != {}:   #if there is no error 
        for err_msg in form.errors.values():
            flash(f'There is an error :{err_msg}')    
    return render_template('register.html',form=form)


@app.route('/login',methods=['GET','POST'])
def login_page():
    form=LoginForm()
    if form.validate_on_submit():
        attempted_user=User.query.filter_by(username = form.username.data).first()
        if attempted_user and attempted_user.check_password_correction(attempted_password=form.password.data):
            login_user(attempted_user)
            flash(f'Success! Youre Logged in as: {attempted_user.username}',category='success')
            return redirect(url_for('market_page'))
        else:
            flash('Username or password is incorrect',category='danger')
    return render_template('login.html',form=form)

@app.route('/logout')
def logout_page():
    logout_user()
    flash("You have been logged out!", category='info')
    return redirect(url_for("home_page"))