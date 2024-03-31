#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int>d;
    d.push_front(12);
    d.push_front(13);
    d.push_back(14);
    d.pop_front();
    d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    if(d.empty()){
        cout<<"Queue is empty\n";
    }
    else{
        cout<<"Queue is not empty\n";
    }
}