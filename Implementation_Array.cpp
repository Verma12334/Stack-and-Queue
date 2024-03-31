#include<iostream> 
using namespace std;
class queue{
    public:
    int size;
    int *arr; 
    int front;
    int rear;
    queue(int size){
        this->size=size;
        arr=new int[size];
        front =0;
        rear=0;
    }

    void enqueue(int elt){
        if(rear==size){
            cout<<"Queue is Full\n";
        }
        else{
            arr[rear]=elt;
            rear++;
        }
    }

    int  dequeue(){
        if(front==rear){
            return -1;
        }
        else{
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
            return ans;
        }
    }

    int getfront(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    bool isempty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    queue q(10);
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    q.enqueue(5);
    q.enqueue(10);
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    q.enqueue(15);
    q.enqueue(20);
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    q.enqueue(25);
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    q.enqueue(30);
    q.enqueue(35);
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    q.enqueue(40);
    q.enqueue(45);
    cout<<"Front element of queue : "<<q.getfront()<<endl;

    q.dequeue();
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    q.dequeue();
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    q.dequeue();
    cout<<"Front element of queue : "<<q.getfront()<<endl;

    if(q.isempty()){
        cout<<"Queue is empty\n";
    }
    else{
        cout<<"Queue is not empty\n";
    }

    cout<<"Front element of queue : "<<q.getfront()<<endl;
}