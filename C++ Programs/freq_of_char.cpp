#include <iostream>
using namespace std;


int main()
{
    string s1;
    getline(cin,s1);
    int n=s1.length();
    int vis[n]={0};
    for(int i=0; i<n; i++)
    {
        int count=1;
        if(vis[i]==1) continue;
        for(int j=i+1; j<n; j++)
        {
            if(s1[i]==s1[j]) {count++; vis[j]=1;}
        }
        cout<<"count of "<<s1[i]<<" is "<<count<<endl;
    }

    return 0;
}