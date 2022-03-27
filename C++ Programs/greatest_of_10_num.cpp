#include <iostream>
using namespace std;

void largest(int ar[], int n)
{
    int greatest=ar[0];
    for(int a=0; a<n; a++)
    {
        
        if(greatest<=ar[a+1])
        {
            greatest=ar[a+1];
        }
        else continue;
    }
    cout<<"Greatest of the "<<n<<" numbers is "<<greatest;
}

int main()
{
    int n;
    cout<<"Number of inputs: ";
    cin>>n;
    int ar[n];
    for(int a=0; a<n; a++)
    {
        cout<<"Enter element "<<a+1<<" : ";
        cin>>ar[a];
    }

    largest(ar,n);
    return 0;
}