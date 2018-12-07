#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        string str;
        cin>>str;

        int ind1,ind2,m,e;
        ind1 = ind2 = m = e = 0;

        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == 'M' && i>0)
            {
                m = 1;
                ind1 = i;
            }

            else if(str[i] == 'E' && i>0)
            {
                e = 1;
                ind2 = i;
                break;
            }
        }

        if(m && e)
        {
            int x,y,z;
            int first,second,third;

            x = y = z = 0;
            first = second = third = 0;

            for(int i=0; i<ind1; i++)
            {
                if(str[i] == '?') first++;
                if(str[i] != '?') x = 1;
            }

            for(int i=ind1+1; i<ind2; i++)
            {
                if(str[i] == '?') second++;
                if(str[i] != '?') y = 1;
            }

            for(int i=ind2+1; i<str.size(); i++)
            {
                if(str[i] == '?') third++;
                if(str[i] != '?') z = 1;
            }

            if(!first || !second || !third || x || y || z) cout<<"no-theorem";
            else
            {
                if(first+second == third) cout<<"theorem";
                else cout<<"no-theorem";
            }
        }

        else cout<<"no-theorem";
        cout<<endl;
    }

    return 0;
}

