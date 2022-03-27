//Stack Implementation using c++

#include <iostream>
#include <stdlib.h>
using namespace std;

#define max 10
int size=0;


typedef struct 
{
    int items[max];
    int top;
}stack;

void initializeStack(stack *s)            //to initialize top value to -1
{
    s->top=-1;
}

int isfull(stack *s)                      //to check is stack is full
{
    if(s->top==max) return 1;
    else return 0;
}

void push(stack *s,int element)           //to add element to items array in stack
{
    if(isfull(s))
    {
        cout<<"Stack is Full"<<endl;
    }

    else
    {
        s->top++;
        s->items[s->top]=element;
        size++;

    } 
    
}

int isempty(stack *s)                     //to check if stack is empty
{
    if(s->top==-1) return 1;
    else return 0;
}

void pop(stack *s)                        //to remove element from stack
{
    if(isempty(s))
    {
        cout<<"Stack is Empty"<<endl;
    }

    else
    {
        s->top--;
        cout<<s->items[s->top]<<endl;
        size--;

    } 
    
}

void printstack(stack *s)                 //to print the stack
{
    cout<<"Stack"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<s->items[i]<<endl;
    }
}



int main()                                //main function
{
    int p,element;
    stack *s=(stack *) malloc(sizeof(stack));
    initializeStack(s);
    for(int i=1; i<=max; ++i)
    {
        cout<<"Enter element "<<i<<endl;
        cin>>element;
        push(s,element);
    }
    printstack(s);

    cout<<"Enter number of elements u wish to pop"<<endl;
    cin>>p;
    for(int i=1; i<=p; i++)
    {
        pop(s);
    }
    printstack(s);
    free(s);
    return 0;
}

