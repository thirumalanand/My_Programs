#include <iostream>
#include <stdlib.h>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* get_new_node(int data)
{
    BstNode* newNode= new BstNode();       //same as BstNode* newNode=(BstNode* )malloc(sizeof(BstNode));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

BstNode* insert(BstNode* root, int data)
{
    if(root==NULL) 
    {
        root=get_new_node(data); 
    }

    else if(data<=root->data)
    {
        root->left=insert(root->left,data);
    }

    else
    {
        root->right=insert(root->right,data);
    }
    return root;
}

bool search(BstNode* root,int data) 
{
	if(root == NULL) return false;
	else if(root->data == data) return true;
	else if(data <= root->data) return search(root->left,data);
	else return search(root->right,data);
}

int main()
{
    BstNode* root=NULL;  //pointer to root node and set to null to show that empty

    int n,data;

    cout<<"Enter number of elements to be entered"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter Element "<<i<<endl;
        cin>>data;
        root = insert(root,data);
    }

    cout<<"Enter number be searched\n";
	cin>>n;

	if(search(root,n) == true) cout<<"Found\n";
	else cout<<"Not Found\n";

    return 0;
}