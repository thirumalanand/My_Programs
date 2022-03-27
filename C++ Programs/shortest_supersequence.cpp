/* Given two strings X and Y of lengths m and n respectively, find the length of the smallest string which has both, X and Y as its sub-sequences.

Input Format

First line of input contains string X. Next line of input contains string Y.

Constraints

1<= |X|, |Y| <= 100

Output Format

Print the length of the smallest string which has both, X and Y as its sub-sequences

Sample Input 0

abcd
xycd
Sample Output 0

6
Sample Input 1

efgh
jghi
Sample Output 1

6 */

#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string x,y;
    getline(cin,x);
    getline(cin,y);
    int n,m;
    n=x.length();
    m=y.length();
    int tot=m+n;
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(x[i]==y[j])
            {
                count++;
            }
        }
    }
    cout<<tot-count;
    return 0;
}