#include<iostream>
#include <vector>
using namespace std;


/* bool palin(string str)
{
   string rev= string(str.rbegin(), str.rend());
   if(str==rev) return true;
   else return false;
}

void check( string s )
{
    int flag=1;
    for(int i=0; s[i]!='\0'; i++)
    {
        if((s[i]<='z' && s[i]>='a') || (s[i]<='Z' && s[i]>='A'))
        {
            continue;
        }
        else flag=0;
    }
    if(flag)
    {
        
        if(palin(s)) cout<<"you inputted a strong string";
        else cout<<"you inputted a weak string";
    }
    else cout<<"you inputted a weak string";
}

main(){
   string n;
   getline(cin,n);
   check(n);
} */


/* #include<iostream>
using namespace std;
long fact(long n) {
   if(n == 0 || n == 1 )
      {return 1;}
   return n*fact(n-1);
}
int countPermutation(string str) {
   int freq[26] = {0};
   int size=0;
   for(int i=0; str[i]!='\0'; i++) 
   {
       size++;
    }
   for(int i = 0; i<size; i++) 
   {
      freq[str[i] - 'a']++; 
   }
   int res = fact(size); 
   for(int i = 0; i<26; i++) {
      if(freq[i] > 1)
         {res /= fact(freq[i]);} 
   }
   return res;
}
main(){
   string n;
   
   getline(cin,n);
   cout << countPermutation(n);
} */

int hex(int n)
{

}

int check(int n, int div)
{
   int q;
   vector<int> r;
   do
   {
      q=n/div;
      r.push_back(hex(n%div));
      n=q;
   }while(q!=0)

   return res;
}

int main()
{
    int n,num;
    cout<<check(n,num);
    return 0;
}