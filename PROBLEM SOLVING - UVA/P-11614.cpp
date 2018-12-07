#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,res;
    double num;

    cin>>test;
    while(test--)
    {
        cin>>num;
        res=sqrt(1+((double)8*num));
        res--;

        cout<<res/2<<endl;
    }

    EXIT_SUCCESS;
}
