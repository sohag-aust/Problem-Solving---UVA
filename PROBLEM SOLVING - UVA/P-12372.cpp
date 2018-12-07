#include<iostream>
using namespace std;
int main(void)
{
    int test;
    int l,w,h;
    int i=1;
    cin>>test;
    while(test--)
    {
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20)
            cout<<"Case "<<i<<": "<<"good"<<endl;
        else
            cout<<"Case "<<i<<": "<<"bad"<<endl;
        i++;
    }
    return 0;
}

