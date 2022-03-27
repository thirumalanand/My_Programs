#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct node
{
    node* prev;
    int data;
    node* next;
}node;

void create_node(node* head,int n)
{
    int data,i=2;
    cout<<"Enter the data of node 1"<<endl;
    cin>>data;
    head->prev=NULL;
    head->data=data;
    head->next=NULL;
    node* current;
    node* temp=head;
    while(i<=n)
    {
        cout<<"Enter the data of node "<<i<<endl;
        cin>>data;
        current=new node;
        current->prev=NULL;
        current->data=data;
        current->next=NULL;
        temp->next=current;
        current->prev=temp;
        temp=temp->next;
        i++;
    }

} 

void print_nodes(node* head)
{   if(head==NULL) cout<<"The Linked List is empty"<<endl;
    node* temp=NULL;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

void count_nodes(node* head)
{
    node* temp=NULL;
    temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count+=1;
        temp=temp->next;
    }
    cout<<"The total number of node is "<<count<<endl;

}

node* add_at_begin(node* head,int data)
{
    node* current= new node;
    current->prev=NULL;
    current->data=data;
    current->next=NULL;
    current->next=head;
    head->prev=current;
    head=current;
    return head;
}

void add_at_end(node* head,int data)
{
    node* temp=NULL;
    temp=head;
    node* current=new node;
    current->data=data;
    current->prev=NULL;
    current->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    current->prev=temp;
    temp->next=current;
}

node* delete_at_begin(node* head)
{
    node* temp=NULL;
    temp=head;
    head=head->next;
    head->prev=NULL;
    delete temp;
    return head;
}

void delete_at_end(node* head)
{
    if(head==NULL) cout<<"List is Empty"<<endl;
    else
    {
        node* temp=NULL;
        node* current=NULL;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        current=temp->prev;
        current->next=NULL;
        delete temp;
        
    }
}

node* delete_at_pos(node* head, int pos)
{
    if(head==NULL) cout<<"List is Empty"<<endl;
    if(pos==1) head=delete_at_begin(head);
    else 
    {
        node* front;
        node* current;
        node* back;
        front=NULL;
        current=NULL;
        back=NULL;
        current=head;
        for(int i=2; i<=pos; i++)
        {
            back=current;
            current=current->next;
            front=current->next;
        }
        back->next=front;
        front->prev=back;
        delete current;
    }

    return head;
}

node* add_at_pos(node* head, int pos, int data)
{
    if(pos==1) head=add_at_begin(head,data);
    node* current=new node;
    current->prev=NULL;
    current->data=data;
    current->next=NULL;
    node* back=NULL;
    node* front=NULL;
    front=head;
    while(pos>0)
    {
        front=front->next;
        pos--;
    }
    back=front->prev;
    current->prev=back;
    current->next=front;
    back->next=current;
    front->prev=current;
    return head;
}

node* reverse_nodes(node* head)
{
    node* ptr1=head;
    node* ptr2=ptr1->next;

    ptr1->next=NULL;
    ptr1->prev=ptr2;
    while(ptr2!=NULL)
    {
        ptr2->prev=ptr2->next;
        ptr2->next=ptr1;
        ptr1=ptr2;
        ptr2=ptr2->prev;
    }
    head=ptr1;
    return head;
}

int main()
{
    node* head= new node;
    int n,i;
    
    cout<<"Enter the number of nodes u wish to create: ";
    cin>>n;

    create_node(head,n);
    count_nodes(head);
    print_nodes(head);

    while(1){

    cout<<"Do u wish to 1:ADD or 2:DELETE or 3:REVERSE nodes"<<endl;
    cin>>n;
    if(n==1) 
    {
        cout<<"Do u want to add at 1.Beginning or 2.End or 3.At position "<<endl;
        cin>>n;
        cout<<"Enter data to be added"<<endl;
        cin>>i;
        switch(n)
        {
            case 1: head=add_at_begin(head,i);
                    print_nodes(head);
                    count_nodes(head);
                    break;
            case 2: add_at_end(head,i);
                    print_nodes(head);
                    count_nodes(head);
                    break;
            case 3: cout<<"Enter node to be added after: "<<endl;
                    cin>>n;
                    head=add_at_pos(head,n,i);
                    print_nodes(head);
                    count_nodes(head);
                    break;
            default: cout<<"Invalid Input!"<<endl; break;
        }
    }
    else if(n==2)
    {
        cout<<"Do u want to delete at 1.Beginning or 2.End or 3.At Any Position "<<endl;
        cin>>n;
        switch(n)
        {
            case 1: head=delete_at_begin(head);
                    print_nodes(head);
                    count_nodes(head);
                    break;
            case 2: delete_at_end(head);
                    print_nodes(head);
                    count_nodes(head);
                    break;
            case 3: cout<<"Enter node to be deleted: "<<endl;
                    int pos;
                    cin>>pos;
                    head=delete_at_pos(head,pos);
                    print_nodes(head);
                    count_nodes(head);
                    break;
            default: cout<<"Invalid Input!"<<endl; break;
        }
    }
    else if(n==3)
    {
        head=reverse_nodes(head);
        print_nodes(head);
        count_nodes(head);
    }
    }
    return 0;

}