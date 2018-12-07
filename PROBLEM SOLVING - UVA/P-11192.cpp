#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string str;
    int len,a,b,div;
    int num;
    while(cin>>num)
    {
        if(num==0)
            break;

        getchar();
        cin>>str;
        len=str.size();
        div=len/num;
        a=0;
        b=div;

        while(b<=len)
        {
            for(int i=b-1; i>=a; i--)
            {
                cout<<str[i];
            }
            a+=div;
            b+=div;
        }
        cout<<endl;
    }
    return 0;
}

