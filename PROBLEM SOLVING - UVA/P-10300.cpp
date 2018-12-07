#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test,num;
    int a,b,c;
    cin>>test;
    while(test--)
    {
        int res;
        int sum=0;
        cin>>num;
        while(num--)
        {
            cin>>a>>b>>c;
            res=a*c;
            sum+=res;
        }
        cout<<sum<<endl;
    }
    return 0;
}
