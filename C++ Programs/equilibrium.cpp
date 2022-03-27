/* Equilibrium index of an array
Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.

Sum of elements at lower indexes = Sum of elements at higher indexes.

Example
Arr= {-7,1,5,2,-4,3,0}

sum= -7+1+5=-1    -4+3+0=-1

Equilibrium Index= 3 */


#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


int main()
{
    int n,m;
    cout<<"Enter Size : ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    int equi,left_sum=0;
    for(int i=0; i<n; i++)
    {
        sum-=a[i];
        if(sum==left_sum)
        {
            equi=i;
            break;
        }
        left_sum+=a[i];
    }
    
    cout<<"Output : ";
    cout<<equi;
    return 0;
}