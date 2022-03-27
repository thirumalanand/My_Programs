#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct node
{
    int data;
    node* next;
}node;

node* create_nodes(node* tail, int n)
{
    int data,i=2;
    node* temp=NULL;
    node* temp2=NULL;
    temp2=tail;
    cout<<"Enter Value of node 1: "<<endl;
    cin>>data;
    tail->data=data;
    tail->next=tail;
    while(i<=n)
    {
        cout<<"Enter Value of node "<<i<<": "<<endl;
        cin>>data;
        temp=new node;
        temp->data=data;
        temp->next=tail;
        temp2->next=temp;
        temp2=temp2->next;
        i++;
    }
    tail=temp;
    return tail;
}

void print_nodes(node* tail)
{
    node* ptr=tail->next;
    do
    {
        cout<<ptr->data<<"\t";
        ptr=ptr->next;
    } while (ptr!=tail->next);
    
}

int count_nodes(node* tail)
{
    node* ptr=tail->next;
    int count=0;
    do
    {
        count+=1;
        ptr=ptr->next;

    } while (ptr!=tail->next);
    return count;
}

node* add_to_begin(node* tail, int data)
{
    node* current=new node;
    current->data=data;
    current->next=NULL;
    current->next=tail->next;
    tail->next=current;
    return tail;
}

node* add_to_end(node* tail, int data)
{
    node* current=new node;
    current->data=data;
    current->next=NULL;
    current->next=tail->next;
    tail->next=current;
    tail=current;
    return tail;
}

node* add_to_pos(node* tail, int data, int pos)
{
    if(pos==1) tail=add_to_begin(tail,data);
    if(pos==count_nodes(tail)) tail=add_to_end(tail,data);
    else
    {
        node* current=new node;
        current->data=data;
        current->next=NULL;
        node* temp=tail->next;
        while(pos>1)
        {
            temp=temp->next;
            pos--;
        }
        temp->next=current;
        current->next=tail;
    }
    return tail;
}

node* del_to_begin(node* tail)
{
    node* temp=tail->next;
    tail->next=temp->next;
    delete temp;
    temp=NULL;
    return tail;
}

node* del_to_end(node* tail)
{
    node* current=tail->next;
    while(current->next!=tail)
    {
        current=current->next;
    }
    current->next=tail->next;
    delete tail;
    tail=NULL;
    tail=current;
    return tail;
}

node* del_to_pos(node* tail, int pos)
{
    if(pos==1) tail=del_to_begin(tail);
    if(pos==count_nodes(tail)) tail=del_to_end(tail);
    else 
    { 
        node* current=tail->next;
        node* back=NULL;
        while(pos>1)
        {
            back=current;
            current=current->next;
            pos--;
        }
        back->next=current->next;
        delete current;
    }
    return tail;
}

int main()
{
    node* tail=new node;
    int n,data,count;

    cout<<"Enter the number of nodes to be created (>0) : "<<endl;
    cin>>n;

    tail=create_nodes(tail,n);
    print_nodes(tail);
    count=count_nodes(tail); cout<<"\nThe Number Nodes is "<<count<<endl;

    while(1)
    {
        cout<<"Do u wish to 1:ADD or 2:DELETE or 3:REVERSE nodes"<<endl;
        cin>>n;
        switch(n)
        {
            case 1 : cout<<"Add to 1:Beginning or 2:End or 3:At position: "<<endl;
                     cin>>n;
                     switch(n)
                     {
                         case 1 : cout<<"Enter Data: ";
                                  cin>>data;
                                  tail=add_to_begin(tail,data);
                                  print_nodes(tail);
                                  count=count_nodes(tail); cout<<"\nThe Number Nodes is "<<count<<endl;
                                  break;
                         case 2 : cout<<"Enter Data: ";
                                  cin>>data;
                                  tail=add_to_end(tail,data);
                                  print_nodes(tail);
                                  count=count_nodes(tail); cout<<"\nThe Number Nodes is "<<count<<endl;
                                  break;
                         case 3 : cout<<"Enter Data: ";
                                  cin>>data;
                                  cout<<"Enter postion: ";
                                  cin>>n;
                                  tail=add_to_pos(tail,data,n);
                                  print_nodes(tail);
                                  count=count_nodes(tail); cout<<"\nThe Number Nodes is "<<count<<endl;
                                  break;
                         default: cout<<"Invalid Input"<<endl; break;
                     }
                     break;
            case 2 : cout<<"Delete 1:Beginning or 2:End or 3:At position: "<<endl;
                     cin>>n;
                     switch(n)
                     {
                         case 1 :
                                  tail=del_to_begin(tail);
                                  print_nodes(tail);
                                  count=count_nodes(tail); cout<<"\nThe Number Nodes is "<<count<<endl;
                                  break;
                         case 2 : 
                                  tail=del_to_end(tail);
                                  print_nodes(tail);
                                  count=count_nodes(tail); cout<<"\nThe Number Nodes is "<<count<<endl;
                                  break;
                         case 3 :
                                  cout<<"Enter postion: ";
                                  cin>>n;
                                  tail=del_to_pos(tail,n);
                                  print_nodes(tail);
                                  count=count_nodes(tail); cout<<"\nThe Number Nodes is "<<count<<endl;
                                  break;
                         default: cout<<"Invalid Input"<<endl; break;
                     }
                     break;
            default: cout<<"Invalid Input!"<<endl; break;
        }
    }
    return 0;
}