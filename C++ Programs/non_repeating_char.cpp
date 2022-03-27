#include <iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    int n=s.size();
    int viz[n]={0};
    for(int i=0; i<n; i++)
    {
        int count=1;
        if(viz[i]==1) continue;
        for(int j=i+1; j<n; j++)
        {
            if(s[i]==s[j])
            {
                count++;
                viz[j]=1;
            } 
        }
        if(count==1)
        cout<<s[i]<<" ";
    }
    return 0;
}