// Circular Queue implementation in C++

#include <iostream>
using namespace std;

#define size 5

class queue
{
    int front, rear, item[size];
    public:

    queue()
    {
        front=-1;
        rear=-1;
    }

    bool isfull()
    {
        if(front==0 && rear==size-1) return true;
        else if(front==rear+1) return true;
        else return false;
    }

    void enqueue(int element)
    {
        if(isfull()) cout<<"Queue is full first dequeue"<<endl;
        if(front==-1 && rear==-1) front=0;
        rear=(rear+1)%size;
        item[rear]=element;
        cout<<"Inserted"<<endl;
    }

    bool isempty()
    {
        if(front==-1 || rear==-1) return true;
        else return false;
    }

    void disp()
    {
        int i;
        if(isempty()) cout<<"The queue is empty"<<endl;
        for(i=front; i!=rear; i=(i+1)%size) cout<<"Element "<<i<<" : "<<item[i]<<endl;
        cout<<"Element "<<i<<" : "<<item[i]<<endl;
        cout<<"Front : "<<front<<endl;
        cout<<"Rear : "<<rear<<endl;
    }


    void dequeue()
    {
        if(isempty()) cout<<"Queue is empty"<<endl;
        else if(front==rear) {front=-1; rear=-1;}
        else front=(front+1)%size; cout<<"dequeued"<<endl;

    }

};

int main()
{
    queue q;
    int p;
    while(true)
    {
    cout<<"Queue has been created, do u wish to add or remove elements 1:add and 2:remove and 3:nothing "<<endl;
    cin>>p;
    switch(p)
    {
        case 1: 
        {
            cout<<"Enter the elemnts to be entered"<<endl;
            for(int i=0; i<size; i++)
            {
                cin>>p;
                q.enqueue(p);
            }
            q.disp();
            break;
        }
        case 2: 
        {
           cout<<"Enter number of elemnts to be removed"<<endl;
           cin>>p;
           for(int i=0; i<p; i++)
            {
                q.dequeue();
            }
            q.disp();
            break;
        }
        default: 
        {
            cout<<"No changes were done"<<endl;
            exit;
        }
    }
    exit;
    }

    return 0;
}