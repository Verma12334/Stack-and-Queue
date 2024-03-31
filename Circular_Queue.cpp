#include<iostream> 
using namespace std;
class Circular_queue{
    public:
    int size;
    int *arr; 
    int front;
    int rear;
    Circular_queue(int size){
        this->size=size;
        arr=new int[size];
        front =-1;
        rear=-1;
    }

    bool enqueue(int elt){
        //to check whther queue full
        if(front==0&&rear==size-1 || rear==(front-1)%(size-1)){
            cout<<"Queue is Full\n";
            return false;
        }
        else if(front==-1)//first element to push
        {
            front=rear=0;
          
        }
        else if(rear==size-1 && front!=0){
            rear=0;// to maintain cyclic nature
       
        }
        else{
            rear++;
        }
        //push inside the qu
            arr[rear]=elt;
            return true;
    }

    int  dequeue(){
       if(front==-1){//to check queue is empty
        cout<<"Queue is Empty\n";
        return -1;
       }
       int ans=arr[front];
       arr[front]=-1;
       if(front==rear){//single element is present
       front=rear-1;
       }
       else if(front==size-1){
        front=0;// to maintain cyclic nature
       }
       else{
        front++;
       }
       return ans;

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
    Circular_queue q(10);
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    cout<<q.enqueue(5)<<endl;
    cout<<q.enqueue(10)<<endl;
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    cout<<q.enqueue(15)<<endl;
    cout<<q.enqueue(20)<<endl;
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    cout<<q.enqueue(25)<<endl;
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    cout<<q.enqueue(30)<<endl;
    cout<<q.enqueue(35)<<endl;
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    cout<<q.enqueue(40)<<endl;
    cout<<q.enqueue(45)<<endl;
    cout<<"Front element of queue : "<<q.getfront()<<endl;

    cout<<q.dequeue()<<endl;
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<"Front element of queue : "<<q.getfront()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<"Front element of queue : "<<q.getfront()<<endl;

    if(q.isempty()){
        cout<<"Queue is empty\n";
    }
    else{
        cout<<"Queue is not empty\n";
    }

    cout<<"Front element of queue : "<<q.getfront()<<endl;
}