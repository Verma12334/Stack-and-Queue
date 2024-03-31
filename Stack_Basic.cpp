#include<iostream>
using namespace std;

class stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    //behsviour
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

void push(int elt){
    if(size-top>1){
        top++;
        arr[top]=elt;
    }
    else{
        cout<<"Stack overflow\n";
    }
}

void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"Stack Underflow\n";
    }
}

int peak(){
    if(top>=0 && top<size){
        return arr[top];
    }
    else{
        cout<<" Stack is empty\n";
        return -1;
    }
}

bool isempty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
};


int main(){
    stack st(5);
    st.push(22); 
    st.push(25);
    st.push(80);
    st.push(789);
    st.push(889);
    //st.push(1234);
    cout<<st.peak()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.peak()<<endl;
    if(st.isempty()){
        cout<<"Stack is Empty "<<endl;
    }
    else{
        cout<<"Stack is not Empty "<<endl;

    }

}