#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(11);
    q.push(15);
    q.push(18);
    q.push(45);
    q.push(47);
    q.push(78);
    q.push(89);
    q.push(99); 

    cout<<" Front element : "<<q.front()<<endl;
    cout<<" Front element : "<<q.front()<<endl;
    cout<<" Size of queue is : "<<q.size()<<endl;

    q.pop();
    q.pop();
    q.pop();

    cout<<" Front element : "<<q.front()<<endl;

    cout<<" Size of queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty\n";
    }
    else{
        cout<<"Queue is not empty\n";
    }

    cout<<" Front element : "<<q.front()<<endl;
    cout<<" rear element : "<<q.front()<<endl;




























}