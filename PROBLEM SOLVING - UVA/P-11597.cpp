#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num;
    int i=0;
    while(cin>>num)
    {
        if(num==0)
            break;
        cout<<"Case "<<++i<<": "<<num/2<<endl;
    }
    return 0;
}

