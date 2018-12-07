#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test,num;
    cin>>test;
    int k=0,res;
    while(test--)
    {
        cin>>num;
        res=((num*2)-1);
        cout<<"Case #"<<++k<<": "<<res<<endl;
    }
    return 0;
}

