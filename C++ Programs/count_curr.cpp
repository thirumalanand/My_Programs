/* 
Given an amount A(integer) find the number of currency notes required to make the amount up in the most optimal way. The available denominations are 1000,500,100,50,10,1. The question is set in PRE-DEMONITISATION era so 1000 rupee notes are available :) eg: rs 689 (* currency notes are 500,100,50,10,1 ) 500+100+50+(3*10)+(9*1) count=15

Input Format

Enter integer N, representing the amount.

Constraints

N <= 100000000

Output Format

Corresponding output.

Sample Input 0

689
Sample Output 0

15
Sample Input 1

777
Sample Output 1

13
*/

#include <iostream>
using namespace std;


void count(int amt)
{
    int notes[6] = { 1000, 500, 100, 50, 10, 1 };
    int counter[6] = { 0 };
    for (int i = 0; i < 6; i++) 
    {
        if (amt >= notes[i]) 
        {
            counter[i] = amt / notes[i];
            amt = amt - counter[i] * notes[i];
        }
    }
    int sum=0;
    for (int i = 0; i < 6; i++) 
    {
            sum=sum+counter[i];
    }
    cout<<sum;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int amt;
    cin>>amt;
    count(amt);
    return 0;
}
