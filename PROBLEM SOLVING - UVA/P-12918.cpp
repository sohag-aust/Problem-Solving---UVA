#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    int a,b;
    int sum,res;
    cin>>test;
    while(test--)
    {
        sum=0;
        cin>>a>>b;
        for(int i=1; i<=a; i++)
        {
            res=b-i;
            sum+=res;
        }
        cout<<sum<<endl;
    }
    return 0;
}

