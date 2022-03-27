/* Given an integer N denoting the Length of a line segment. you need to cut the line segment in such a way that the cut length of a line segment each time is integer either x , y or z. and after performing all cutting operation the total number of cutted segments must be maximum.

Input:

First line of input contains of an integer 'T' denoting number of test cases. First line of each testcase contains N . Second line of each testcase contains 3 space separated integers x , y and z.

Output:

For each test case print in a new line an integer corresponding to the answer .

Constraints:

1<=t<=70

1<=N,x,y,z<=4000 */

#include <iostream>
#include <string>
#include <list>
#include <bits/stdc++.h>
using namespace std;
 
int max_seg(int n, int x, int y, int z)
{
    int d[n+1];
    memset(d, -1, sizeof(d));
    d[0]=0;
    for (int i=0; i<n; i++)
    {
        if(d[i]!= -1)
        {
            if(i+x<=n) d[i+x]=max(d[i]+1,d[i+x]);
            
            if(i+y<=n) d[i+y]=max(d[i]+1,d[i+y]);
            
            if(i+z<=n) d[i+z]=max(d[i]+1,d[i+z]);
            
        }
    }
    
    return d[n];
}
 
int main () {
    int t,n,x,y,z;
    cin>>t;
    int result[t];
    for (int i=0; i<t; ++i)
    {
        cin>>n;
        cin>>x>>y>>z;
        result[i]=max_seg(n,x,y,z);
    }
    
    for (int i=0; i<t; ++i)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}