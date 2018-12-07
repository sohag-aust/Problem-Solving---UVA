
#include<bits/stdc++.h>
using namespace std;

long long ara[110][110];
long long test,num;
long long i,j;
bool flag;
char ch;

int main()
{
    cin>>test;

    while(test--)
    {
        static int cnt=1;

        flag=true;

        cin.ignore();

        scanf("%c %c %lld",&ch,&ch,&num);

        for(i=1; i<=num; i++)
        {
            for(j=1; j<=num; j++)
                cin>>ara[i][j];
        }

        for(i=1; i<=num; i++)
        {
            for(j=1; j<=num; j++)
            {
                //cout<<"ara[num-1]: "<<ara[(num-i)+1][(num-j)+1]<<endl;
                //cout<<"ara[i][j]: "<<ara[i][j]<<endl;

                if(ara[(num-i)+1][(num-j)+1]==ara[i][j] && ara[i][j]>=0)
                    flag=true;
                else
                {
                    flag=false;
                    break;
                }
            }

            if(!flag)
                break;
        }

        if(flag)
            cout<<"Test #"<<cnt<<": "<<"Symmetric."<<endl;
        else
            cout<<"Test #"<<cnt<<": "<<"Non-symmetric."<<endl;

        cnt++;
    }

    EXIT_SUCCESS;
}
