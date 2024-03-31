#include<iostream>
using namespace std;
class deque{
    public:
    int*arr;
    int front;
    int rear;
    int size;
    deque(int n){
        size=n;
        arr=new int[n];
        front=-1;
        rear=-1;
    }

    
    bool isempty(){
        if(front==-1){
            return true;
        }
        else
        return false;
    }


    bool pushfront(int n){
        // check full or not
        if(front==0 && rear==size-1 || rear==(front-1)%(size-1)){
            return false;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(front==0 && rear!= size-1){
            front=size-1;
        }
        else{
            front--;
        }
        arr[front]=n;
    }

    bool pushrear(int n){
        if(front==0 && rear==size-1 || rear==(front-1)%(size-1)){
            return false;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=n;
        return true;
    }

    int popfront(){
        if(front==-1){//to check queue is empty
        cout<<"Queue is Empty\n";
        return -1;
        }

        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){//single element is present
        front=0;
        }
        else{
            //normarl flow
            front++;
        }
        return ans;
    }


    int poprear()
    {
        if(front==-1){
            cout<<"Queue si Empty\n";
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear){//single element is present
        front =rear-1;
        }
        else if(rear==0){
            rear=size-1;//to maintain cyclic nature
        }
        else{
            //normal flow
            rear--;
        }
        return ans;
    }

    int getfront(){

        if(isempty())
        {
            return -1;
        }
        return arr[front];
    }

    int getrear(){

        if(isempty())
        {
            return -1;
        }
        return arr[rear];
    }

    bool isfull(){
        if(front==       0&& rear==size-1 || front!=0 && rear==(front-1)%(size-1)){
            return true;
        }
        else{
            return false;
        }
    }
    };


int main(){

}

