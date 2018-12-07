#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int test,len,flag,cnt;
    int slash,brac_right,brac_left;
    int k=0;
    cin>>test;
    getchar();

    while(test--)
    {
        flag=1;
        cnt=1;

        for(int j=1; j<=5; j++)
        {
            flag=1;
            slash=brac_right=brac_left=0;

            cin>>str;
            len=str.size();

            for(int i=0; i<len; i++)
            {
                if(str[i]=='|')
                    slash++;

                else if(str[i]=='>')
                {
                     brac_right++;
                     if(slash>=brac_right)
                     {
                         flag=0;
                         cnt=0;
                     }
                }

                else if(str[i]=='<')
                {
                     brac_left++;
                     if(slash<brac_left)
                     {
                         flag=0;
                         cnt=0;
                     }
                }
            }
        }

        if(cnt==0)
            cout<<"Case "<<++k<<": "<<"No Ball"<<endl;

        else
            cout<<"Case "<<++k<<": "<<"Thik Ball"<<endl;
    }
    return 0;
}

