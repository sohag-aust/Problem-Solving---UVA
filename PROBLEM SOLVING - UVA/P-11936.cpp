#include<iostream>
using namespace std;
int main(void)
{
    int test,a,b,c;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        if(a+b>c)
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
    return 0;
}

