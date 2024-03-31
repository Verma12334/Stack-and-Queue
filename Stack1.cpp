#include<iostream>
#include<stack>
using namespace std;

int main(){
    // creation of stack 
    stack<int>s;
    //push operator 
    s.push(2);
    s.push(5);
    //pop operator
    cout<<"Printing top element "<<s.top()<<endl;
    s.pop();
    cout<<"Printing top element "<<s.top()<<endl;

    // is empyt
    cout<<" Stack is empty or not "<<s.empty()<<endl;
    cout<<"Size of stack is "<<s.size()<<endl;
    return 0;
}