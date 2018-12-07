/**Solving Technique:
The problem asks given a number n how many squares are there in n by n grid.
The relation can be found out by drawing n*n sqares
and counting the squares.
Since it will be very hard to draw
and count more than 4 by 4 grid.
We can try 1 by 1, 2 by 2, 3 by 3, 4 by 4 grid and count the number of squares.
From there we can try to guess an equation.
*/

#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num;
    while(cin>>num)
    {
        int sum=0;
        if(num==0)
            break;
        else
        {
            for(int i=num; i>=1; i--)
                sum+=i*i;
            cout<<sum<<endl;
        }
    }
    return 0;
}

