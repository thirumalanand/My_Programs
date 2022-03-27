// Queue implementation in C++

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

    int isfull()
    {
        if(front==0 && rear==size-1) return 1;
        else return 0;
    }

    int isempty()
    {
        if(front==-1 && rear==-1) return 1;
        else return 0;
    }



    void enqueue(int i)
    {
        if(isfull())
        {
            cout<<"Queue is Full"<<endl;
        }
        else
        {
            if(front == -1) front=0;                  //for the 1st element being inserted we must change the value of front to 0 as it is the first position
            rear++;
            item[rear]=i;
            cout<<"Inserted"<<endl;
        }

    }

    void dequeue()
    {
        
        if(isempty()) cout<<"Queue is empty"<<endl;
        else
        {
            if(front==rear)                            //when only 1 element is left we reset front and rear to -1
            {
                front=-1;
                rear=-1;
            }
            else front++;                              //when more than 1 element is left we incement front
        }
    }

    void disp()
    {
        if(isempty()) cout<<"Queue is Empty"<<endl;
        else{
        for(int i=front; i<=rear; i++)
        {
            cout<<item[i]<<"\t";
        }
        cout<<endl;}
    }


};

int main()
{
    int p;
    queue q;
    cout<<"Enter elements of the queue"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>p;
        q.enqueue(p);
    }

    q.disp();

    cout<<"Enter number of times to dequeue "<<endl;
    cin>>p;

    for(int i=0; i<p; i++)
    {
        q.dequeue();
    }

    q.disp();

    return 0;

}