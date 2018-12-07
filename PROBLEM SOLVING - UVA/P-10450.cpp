#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll ara[100];

int main()
{
    ara[1]=2;
    ara[2]=3;

    for(int i=3; i<=50; i++)
        ara[i]=ara[i-1]+ara[i-2];

    int test,num;
    cin>>test;

    while(test--)
    {
        static int cnt=1;

        cin>>num;

        cout<<"Scenario #"<<cnt<<":"<<endl;
        cout<<ara[num]<<"\n"<<endl;

        cnt++;
    }

    EXIT_SUCCESS;
}


/// ANOTHER SYSTEM...
/**
#include<bits/stdc++.h>
using namespace std;
unsigned long long a,b,c;

int main()
{
    int test,num;

    cin>>test;

    while(test--)
    {
        static int cnt=1;

        a=0;
        b=1;
        c=a+b;

        cin>>num;

        for(int i=1; i<=num; i++)
        {
            a=b;
            b=c;
            c=a+b;
        }

        cout<<"Scenario #"<<cnt<<":"<<endl;
        cout<<c<<"\n"<<endl;

        cnt++;
    }
    EXIT_SUCCESS;
}

*/ /// ANOTHER SYSTEM...
/**

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll FIB[100];

ll fibo(ll a)
{
    if(FIB[a])return FIB[a];

    return FIB[a] = fibo(a-1)+fibo(a-2);
}

int main(void)
{
    FIB[1] = 2;
    FIB[2] = 3;

    ll a , in;
    cin >> a;

    for(int i=0;i<a;i++){

        cin >> in;
        printf("Scenario #%d:\n",i+1);
        cout << fibo(in) << endl;
        cout << endl;
    }

    return 0;
}
*/

