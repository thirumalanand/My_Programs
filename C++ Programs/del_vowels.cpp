#include <iostream>
using namespace std;

void del_vow(string str)
{
    int len=str.length();
    for(int i=0; i<len; i++) 
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			for(int j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		len--;
		}
    }
    cout<<"After Deletion of Vowels is :"<<str<<endl;
}

int main()
{
    string str;
    cout<<"Enter a String"<<endl;
    getline(cin,str);
    cout<<"Before Deleting :"<<str<<endl;
    del_vow(str);
    return 0;
}