/* Scheme
He first turns and travels 10 units of distance
His second turn is upward for 20 units
Third turn is to the left for 30 units
Fourth turn is the downward for 40 units
Fifth turn is to the right(again) for 50 units
… And thus he travels, every time increasing the travel distance by 10 units.

Test Cases
Case 1
Input : 3
Expected Output :-20 20
Case 2
Input: 4
Expected Output: -20 -20
Case 3
Input : 5
Expected Output : 30 -20
Case 4
Input : 7
Expected Output : 90 -20 */


#include <iostream>
using namespace std;


void coordinate(int n)
{
    int x=0,y=0;
    int dis=10;
    char ch='R';
    while(n) 
    {
        
        switch(ch)
        {
            case 'R':
            x=x+dis;
            dis+=10;
            ch='U'; 
            break;

            case 'U':
            y=y+dis;
            dis+=10;
            ch='L'; 
            break;

            case 'L':
            x=x-dis;
            dis+=10;
            ch='D'; 
            break;

            case 'D':
            y=y-dis;
            dis+=10;
            ch='A'; 
            break;

            case 'A':
            x=x+dis;
            dis+=10;
            ch='R'; 
            break;
        }
        n--;
    }
    cout<<x<<" "<<y<<endl;
}

int main()
{
    int n;
    cin>>n;
    coordinate(n);
    return 0;
} 
