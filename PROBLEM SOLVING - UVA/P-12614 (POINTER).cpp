
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,num;

    int *ara,maxi;

    cin>>test;

    while(test--)
    {

        static int count = 1;

        maxi=0;

        cin>>num;

        ara=new int [num];

        for(int i=0; i<num; i++)
        {
            cin>>*(ara+i);
        }

        for(int i=num-1; i>=0; i--)
        {
            if(*(ara+i)>=maxi)
                maxi=*(ara+i);
        }

        cout<<"Case "<<count<<": "<<maxi<<endl;

        count++;
    }
    return 0;
}

