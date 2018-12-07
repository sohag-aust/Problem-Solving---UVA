#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test,num;
    int ara[1000];
    cin>>test;
    int val;
    int k=0;
    while(test--)
    {
        cin>>num;
        for(int i=0; i<num; i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+num);
        for(int i=num-1; i>=0; i--)
        {
            val=ara[i];
            break;
        }
        cout<<"Case "<<++k<<": "<<val<<endl;
    }
    return 0;
}

