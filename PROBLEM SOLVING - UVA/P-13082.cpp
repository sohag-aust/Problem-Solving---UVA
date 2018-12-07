
#include<bits/stdc++.h>

using namespace std;

int *ara;
int size;
int test;
int cnt;

int main()
{
    cin>>test;

    while(test--)
    {
        static int k=1;
        cnt=0;

        cin>>size;
        ara=new int[size];

        for(int i=0; i<size; i++)
            cin>>ara[i];

        for(int i=0; i<size; i++)
        {
            if(ara[i]==cnt+1)
                cnt++;
        }

        cout<<"Case "<<k<<": "<<size-cnt<<endl;
        k++;
    }

    EXIT_SUCCESS;
}

