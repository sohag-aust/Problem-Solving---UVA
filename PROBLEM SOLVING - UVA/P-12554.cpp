#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string>mp;
    map<int,string>MP;
    int num,k,res,c;
    string str;

    mp[1]="Happy";
    mp[2]="birthday";
    mp[3]="to";
    mp[4]="you";
    mp[5]="Happy";
    mp[6]="birthday";
    mp[7]="to";
    mp[8]="you";
    mp[9]="Happy";
    mp[10]="birthday";
    mp[11]="to";
    mp[12]="Rujia";
    mp[13]="Happy";
    mp[14]="birthday";
    mp[15]="to";
    mp[16]="you";

    cin>>num;
    cin.ignore();

    for(int i=1; i<=num; i++)
    {
        cin>>str;
        MP[i]=str;
    }

    c=k=0;

    if(num<=16)
    {
        for(int i=1; i<=16; i++)
        {
            k++;

            cout<<MP[k]<<": "<<mp[i]<<endl;

            if(k==num)
                k=0;
        }
    }

    else
    {
        res=num/16;
        res=16*(res+1);

        for(int i=1; i<=res; i++)
        {
            k++;
            c++;

            cout<<MP[k]<<": "<<mp[c]<<endl;

            if(k==num)
                k=0;

            if(c==16)
                c=0;
        }
    }

    return 0;
}

