#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string str;
    int test,len;
    cin>>test;
    while(test--)
    {
        cin>>str;
        len=str.length();
        for(int i=0;i<len;i++)
        {
            if((len==3 && str[0]=='o' && str[1]=='n') || (len==3 && str[0]=='o' && str[2]=='e')|| (len==3 && str[1]=='n' && str[2]=='e'))
            {
                cout<<"1"<<endl;
                break;
            }
            else if((len==3 && str[0]=='t' && str[1]=='w') || (len==3 && str[0]=='t' && str[2]=='o') || (len==3 && str[1]=='w' && str[2]=='o'))
            {
                cout<<"2"<<endl;
                break;
            }
            else if(len==5)
            {
                cout<<"3"<<endl;
                break;
            }
        }
    }
    return 0;
}

