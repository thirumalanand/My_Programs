#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


void check(int arr[], int n)
{
   for (int i=0; i<n; i++)
    {
        // Check if the picked element is already printed
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
  
        // If not printed earlier, then print it
        if (i == j)
          cout << arr[i] << " ";
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