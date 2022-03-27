/* Little Petya very much likes gifts. Recently he has received a new laptop as a New Year gift from his mother. He immediately decided to give it to somebody else as what can be more pleasant than giving somebody gifts. And on this occasion he organized a New Year party at his place and invited n his friends there.

If there's one thing Petya likes more that receiving gifts, that's watching others giving gifts to somebody else. Thus, he safely hid the laptop until the next New Year and made up his mind to watch his friends exchanging gifts while he does not participate in the process. He numbered all his friends with integers from 1 to n. Petya remembered that a friend number i gave a gift to a friend number pi. He also remembered that each of his friends received exactly one gift.

Now Petya wants to know for each friend i the number of a friend who has given him a gift.

Input Format

The first line contains one integer n— the quantity of friends Petya invited to the party. The second line contains n space-separated integers: the i-th number is pi — the number of a friend who gave a gift to friend number i. It is guaranteed that each friend received exactly one gift. It is possible that some friends do not share Petya's ideas of giving gifts to somebody else. Those friends gave the gifts to themselves.

Constraints

(1 ≤ n ≤ 100)

Output Format

Print n space-separated integers: the i-th number should equal the number of the friend who gave a gift to friend number i.

Sample Input 0

4
2 3 4 1
Sample Output 0

4 1 2 3 
Sample Input 1

3
1 3 2
Sample Output 1

1 3 2  */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    int p;
    for(int i=1; i<=n; i++)
    {
        cin>>p;
        a[p-1]=i;
    }
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    
    return 0;
}
