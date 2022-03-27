#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <sstream>
using namespace std;

/* int conv_bin(int num)
{
    int decimal_num = 0, base = 1, rem;  
    while ( num > 0)  
    {  
        rem = num % 10;
        decimal_num = decimal_num + rem * base;  
        num = num / 10;
        base = base * 2;  
    }
    return decimal_num;
}

void decode(string s1)
{ 
    int key=0;
    for(int i=0; i<=7; i++)
    {
        key=key*10+(s1[i]-'0');
    }
    int len=0;
    for(int i=8; i<=15; i++)
    {
        len=len*10+(s1[i]-'0');
    }
    int dec_len=conv_bin(len);
    while(dec_len!=0)
    {
        
    }
}


int main()
{   
    string s1="10101010000001011110001011001111110001101100011011000101";
    decode(s1);
    return 0;
} */

/* void sortArray(int n,int arr[])
{
    if(n%2==0)
    {
        sort(arr,arr+n); 
    }
    else
    {
        sort(arr,arr+n);
        reverse(arr,arr+n);
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int n,result;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sortArray(n,arr);
    return 0;
}
 */

/* bool check(int x)
{
    if (x >= 0) 
    {
 
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int temp=n;
    while(temp>=n)
    {
        if(check(temp))
        {
            cout<<temp;
            break;
        }
        temp++;
    }
    return 0;
} */

/* int main()
{
    string s;
    getline(cin,s);
    int con;
    if( (s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z') )
    {
        con=1;
    }
    else con=0;
    for(int i=1; s[i]!='\0'; i++)
    {
        if(!isalnum(s[i]) && s[i]!='_')
        {
            con=0; 
            break;
        }
    }
    if(con==1)
    {
        cout<<"True";
    }
    else cout<<"False";
    return 0;
} */
