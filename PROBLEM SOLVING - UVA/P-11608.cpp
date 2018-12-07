#include<bits/stdc++.h>
using namespace std;

const int size=12;
int a[size],b[size];

int main()
{
    int num;

    while(cin>>num)
    {
        if(num<0)
            break;

        static int cnt=1;

        for(int i=0; i<12; i++)
            cin>>a[i];

        for(int j=0; j<12; j++)
            cin>>b[j];

        cout<<"Case "<<cnt<<":"<<endl;

        for(int k=0; k<12; k++)
        {
            if(num>=b[k])
            {
                num-=b[k];
                cout<<"No problem! :D"<<endl;
            }

            else
            {
                cout<<"No problem. :("<<endl;
            }

            num+=a[k];
        }
        cnt++;
    }
    EXIT_SUCCESS;
}

