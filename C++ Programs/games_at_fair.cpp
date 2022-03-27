/* 
Maxim wants to buy some games at the local game shop. There are n games in the shop, the i-th game costs ci.

Maxim has a wallet which can be represented as an array of integers. His wallet contains m bills, the j-th bill has value aj.

Games in the shop are ordered from left to right, Maxim tries to buy every game in that order.

When Maxim stands at the position i in the shop, he takes the first bill from his wallet (if his wallet is empty then he proceeds to the next position immediately) and tries to buy the i-th game using this bill. After Maxim tried to buy the n-th game, he leaves the shop.

Maxim buys the i-th game if and only if the value of the first bill (which he takes) from his wallet is greater or equal to the cost of the i-th game. If he successfully buys the i-th game, the first bill from his wallet disappears and the next bill becomes first. Otherwise Maxim leaves the first bill in his wallet (this bill still remains the first one) and proceeds to the next game.

Your task is to get the number of games Maxim will buy.

Input Format

The first line of the input contains two integers n and m — the number of games and the number of bills in Maxim's wallet.

The second line of the input contains n integers c1,c2,…,cn , where ci is the cost of the i-th game.

The third line of the input contains m integers a1,a2,…,am, where aj is the value of the j-th bill from the Maxim's wallet.

Constraints

(1≤n,m≤1000)

(1≤ci≤1000)

(1≤aj≤1000)

Output Format

Print a single integer — the number of games Maxim will buy.

For example, for array c=[2,4,5,2,4] and array a=[5,3,4,6] the following process takes place: Maxim buys the first game using the first bill (its value is 5), the bill disappears, after that the second bill (with value 3) becomes the first one in Maxim's wallet, then Maxim doesn't buy the second game because c2>a2, the same with the third game, then he buys the fourth game using the bill of value a2 (the third bill becomes the first one in Maxim's wallet) and buys the fifth game using the bill of value a3.

Sample Input 0

5 4
2 4 5 2 4
5 3 4 6
Sample Output 0

3
Sample Input 1

5 2
20 40 50 20 40
19 20
Sample Output 1

0
*/
#include <iostream>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m,count=0;
    cin>>n>>m;
    int c[n],a[m];  //c is cost of ith game, a is value of ith bill 
    for(int i=0; i<n; i++)
        cin>>c[i];
    for(int i=0; i<m; i++)
        cin>>a[i];
    int top=0;
    for(int i=top; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(c[j]<=a[i])
            {
                count++; i++; top++;
            }
        }break;
    }
    cout<<count;
    
    return 0;
}
