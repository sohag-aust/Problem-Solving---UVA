#include<bits/stdc++.h>
using namespace std;

void init(int k)
{
    int newp,dead;

    int sz = k*2;

    int i = k;

    while(true)
    {
        newp = sz;
        dead = (i-1) % newp;

        while(dead>=k && newp>=k)
        {
            newp--;
            dead = (dead-1+i) % newp;
        }

        if(newp == k) break;

        i++;
    }

    cout<<i<<endl;

    return ;
}

int main()
{
    int k;
    int ara[15] = {0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881,13482720};

    while(cin>>k && k)
    {
        ///init(k);
        cout<<ara[k]<<endl;
    }

    return 0;
}

