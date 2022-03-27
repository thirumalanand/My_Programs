/* Sum of minimum absolute difference
Program to find the sum of minimum absolute difference of the array is discussed here. An array of distinct elements is given as input and the sum of minimum absolute difference of each array element has to be found.

Example:
arr = {2, 3, 9, 5, 6}

choose optimal solution = 3

output = 12 */

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
    sort(a,a+n);
    m=a[int(n/2)-1];
    cout<<"Optimal Solution: "<<m<<endl;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=abs(a[i]-m);
    }
    cout<<"Output : ";
    cout<<sum;
    return 0;
}