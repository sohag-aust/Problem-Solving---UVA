#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    float f,c;
    int test;
    float res1;
    int i=1;
    cin>>test;
    while(test--)
    {
        cin>>c>>f;
        res1=((5*f)/9)+c;
        printf("Case %d: %.2f\n",i,res1);
        i++;
    }
    return 0;
}
