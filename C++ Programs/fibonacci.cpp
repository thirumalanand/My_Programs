#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    int prev=0; int curr=1;
    cout<<prev<<" "<<curr<<" ";
    for(int i=0; i<n-2; i++)
    {
        sum=prev+curr;
        prev=curr;
        curr=sum;
        cout<<" "<<sum;
    } 
    cout<<endl;
    sum=0;
    prev=0;curr=1;
    cout<<prev<<" "<<curr<<" ";
    while(prev<=n)
    {
        sum=prev+curr;
        prev=curr;
        curr=sum;
        cout<<" "<<sum;
    }
    return 0;
}