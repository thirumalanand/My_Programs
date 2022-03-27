#include <iostream>
#include <algorithm>
using namespace std;

int ispalin(int n)
{
    int temp=n,digit=0,rem;
    while(n)
    {
        rem=n%10;
        digit=digit*10 + rem;
        n=n/10;
    }
    if(temp==digit) return 1;
    else return 0;
}

void check(int a[], int n)
{
    sort(a,a+n);
    for(int i=n-1; i>=0; i--)
    {
        if(ispalin(a[i]))
        {
            cout<<a[i]; break;
        }
    }
}


int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    check(a,n);
    return 0;
}