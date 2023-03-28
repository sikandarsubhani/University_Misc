#include"Stack.hpp"

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.display();
    cout<<"\nTop ->"<<st.top_val()<<endl;
}