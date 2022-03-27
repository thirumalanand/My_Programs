#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct node
{
    int data;
    node* link;
}node;

void count_nodes(node* head)
{
    int count=0;
    if(head==NULL) cout<<"The Linked List is empty"<<endl;
    node* temp=NULL;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    cout<<"Number of nodes is :"<<count<<endl;
}

void print_nodes(node* head)
{
    if(head==NULL) cout<<"The Linked List is empty"<<endl;
    node* temp=NULL;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->link;
    }
}

void create_node(int n, node* head)
{
    node *current, *temp;
    int data, i;

    // Input data of node from the user
    cout<<"Enter the data of node 1: ";
    cin>>data;

    head->data = data; // Link data field with data
    head->link = NULL; // Link address field to NULL

    // Create n - 1 nodes and add to list
    temp=head;
    for(i=2; i<=n; i++)
    {
        current = (node*)malloc(sizeof(node));
        cout<<"Enter the data of node "<<i<<": ";
        cin>>data;

        current->data = data;
        current->link = NULL;
        temp->link = current; // Link previous node with current node
        temp = temp->link;    // Make temp node as previous node  temp->link->link
    }
}

void add_at_end(node* head, int value)
{
    node* ptr,*temp;
    ptr=head;
    temp=(node*)malloc(sizeof(node));
    temp->data=value;
    temp->link=NULL;

    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}

node* add_at_begin(node* head, int value)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->data=value;
    temp->link=NULL;
    temp->link=head;

    head=temp;
    return head;
}

void delete_at_end(node* head)
{
    if(head==NULL) cout<<"The linked List is empty"<<endl;
    else if(head->link==NULL){ free(head); head=NULL;}
    node* temp = head;
    while(temp->link->link!=NULL)
    {
        temp=temp->link;
    }
    free(temp->link);
    temp->link=NULL;
}

node* delete_at_begin(node* head)
{
    if(head==NULL) cout<<"The linked List is empty"<<endl;
    node* temp=head;
    head=head->link;
    free(temp);
    temp=NULL;
    return head;
}

void add_at_pos(node* head, int value, int pos)
{
    if(head==NULL) cout<<"The linked List is empty"<<endl;
    node* ptr=head;
    node* ptr2=(node*)malloc(sizeof(node));
    ptr2->data=value;
    ptr2->link=NULL;
    pos--;
    while(pos!=1)
    {
        ptr=ptr->link;
        pos--;
    }
    ptr2->link=ptr->link;
    ptr->link=ptr2;

}

void delete_at_pos(node** head, int pos)
{
    node* prev=*head;
    node* current=*head;

    if(*head==NULL) cout<<"The linked List is empty"<<endl;
    
    
    while(pos!=1)
    {
        prev=current;
        current=current->link;
        pos--;
    }
    prev->link=current->link;
    free(current);
    current=NULL;

}

void delete_entire_node(node* head)
{
    if(head==NULL) cout<<"The linked List is empty"<<endl;
    node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->link;
        free(head);
        head=temp;
    }
    if(head==NULL) cout<<"The Linked List has been deleted"<<endl;
    else cout<<"Error"<<endl;
}

node* reverse(node* head)
{
    node* prev=NULL;
    node* next=NULL;
    while(head!=NULL)
    {
        next=head->link;
        head->link=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;

}


int main()
{
    /* CREATING THE LINKED LIST:

    //creating node 1
    node* head=(node*)malloc(sizeof(node));
    head->data=45;
    head->link=NULL;

    //creating node 2
    node* current=(node*)malloc(sizeof(node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    //creating node 3
    current=(node*)malloc(sizeof(node));
    current->data=3;
    current->link=NULL;
    head->link->link=current; 
    */

    int n;
    node* head = new node;

    cout<<"Enter the number of nodes u wish to create: ";
    cin>>n;

    create_node(n,head);
    count_nodes(head);
    print_nodes(head);

    cout<<"\nDo u wish to 1:add or 2:delete a node or 3:reverse the linked list:"<<endl;
    int i,value;
    cin>>i;
    if(i==1)
    {
        cout<<"Do u wish to add at 1:Beggining or 2:End or 3:Any position of the linked list :"<<endl;
        cin>>i;
        if(i==2)
        {
            cout<<"Enter Data to be added at end of linked list: ";
            cin>>value;
            add_at_end(head,value);
            count_nodes(head);
            print_nodes(head);

        }
        else if(i==1)
        {
            cout<<"Enter Data to be added at beggining of linked list: ";
            cin>>value;
            head=add_at_begin(head,value);
            count_nodes(head);
            print_nodes(head);
        }
        else if(i==3)
        {
            int pos;
            cout<<"Enter Data and position to be added to the linked list: "<<endl;
            cin>>value;
            cin>>pos;
            add_at_pos(head,value,pos);
            count_nodes(head);
            print_nodes(head);
        }
    }
    else if(i==2)
    {
        cout<<"Do u wish to delete at 1:Beggining or 2:End or 3: Any position of the linked list or 4: Entire Linked List :"<<endl;
        cin>>i;
        if(i==1)
        {
            head=delete_at_begin(head);
            count_nodes(head);
            print_nodes(head);

        }
        else if(i==2)
        {
            delete_at_end(head);
            count_nodes(head);
            print_nodes(head);
        }
        else if(i==3)
        {
            int pos;
            cout<<"position to be deleted in the linked list: "<<endl;
            cin>>pos;
            if(pos==1) head=delete_at_begin(head);
            else delete_at_pos(&head,pos);
            count_nodes(head);
            print_nodes(head);
        }
        else if(i==4)
        {
            delete_entire_node(head);
        }
    }
    else
    {
        head=reverse(head);
        count_nodes(head);
        print_nodes(head);
    }

    delete head;


    return 0;
}