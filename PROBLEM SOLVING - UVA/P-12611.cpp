#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test,k=0;
    cin>>test;
    while(test--)
    {
        int rad;
        cin>>rad;

        int len=5*rad;
        int wid=(3*len)/5;
        int mid=wid/2;
        int left=(45*len)/100;
        int right=(55*len)/100;

        cout<<"Case "<<++k<<":"<<endl;

        cout<<-left<<" "<<mid<<endl;
        cout<<right<<" "<<mid<<endl;
        cout<<right<<" "<<-mid<<endl;
        cout<<-left<<" "<<-mid<<endl;
    }
    return 0;
}

