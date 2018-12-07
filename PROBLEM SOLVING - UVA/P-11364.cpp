/**To solve UVa problem 11364 (Parking), it would be beneficial to know that the minimal distance Michael has to walk is simply twice the distance from the farthest store to the nearest store. For example, consider the following setup:
A________B______________C_____D
X______________________________

A, B, C and D are the stores while X is Michael’s car. To get to all the stores and return to his car, Michael would have to walk:

A to B
B to C
C to D
D to C
C to B
B to A

In essense, the total distance he would have traveled would be just twice the distance from A to D.
*/

#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int num;
        int ara[1000];
        int ara1[1000];
        int sum=0;
        int diff;
        int i,j;
        cin>>num;
        for(i=0;i<num;i++)
        {
            cin>>ara[i];
        }
        for(i=0,j=0;i<num;i++,j++)
        {
            ara1[j]=ara[i];
        }
        sort(ara,ara+num);
        sort(ara1,ara1+num);
        for(i=0,j=1;j<num;i++,j++)
        {
                diff=abs(ara1[j]-ara[i]);
                sum+=diff;
        }
        cout<<sum*2<<endl;
    }
    return 0;
}


/**
another process

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num;
    int i;
    int ara[1000];
    int mini,maxi;
    cin>>test;
    while(test--)
    {
        cin>>num;
        for(i=0;i<num;i++)
            cin>>ara[i];
            sort(ara,ara+num);
            int res=ara[num-1]-ara[0];
            cout<<res*2<<endl;
    }
    return 0;
}
*/

