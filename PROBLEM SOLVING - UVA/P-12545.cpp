#include<bits/stdc++.h>
using namespace std;

int zero_a,one_a;
int zero_b,one_b;

void CNT(string a, string b)
{
    zero_a = one_a = 0;
    zero_b = one_b = 0;

    for(int i=0; i<a.size(); i++)
    {
        if(a[i] == '0')
            zero_a++;
        else if(a[i] == '1')
            one_a++;
    }

    for(int i=0; i<b.size(); i++)
    {
        if(b[i] == '0')
            zero_b++;
        else if(b[i] == '1')
            one_b++;
    }
}

int main()
{
    int test,cs=0;
    cin>>test;

    while(test--)
    {
        string a,b;
        cin>>a>>b;

        CNT(a,b);

        int cnt = 0;

        for(int i=0; i<a.size(); i++)
        {
            if(a[i] == '?')
            {
                if(b[i] == '0')
                {
                    a[i] = '0';
                    zero_a++;
                }

                else if(b[i] == '1')
                {
                    if(one_a != one_b)
                    {
                        a[i] = '1';
                        one_a++;
                    }

                    else
                    {
                        a[i] = '0';
                        zero_a++;
                    }
                }

                cnt++;
            }
        }

        for(int i=0; i<a.size(); i++)
        {
            if(a[i] == '0')
            {
                if(b[i] == '1')
                {
                    if(one_a < one_b)
                    {
                        a[i] = '1';
                        one_a++;
                        zero_a--;
                        cnt++;
                    }
                }
            }
        }

        CNT(a,b);

        int mis_match = 0;

        cout<<"Case "<<++cs<<": ";

        if(zero_a == zero_b && one_a == one_b)
        {
            for(int i=0; i<a.size(); i++)
            {
                if(a[i] != b[i])
                    mis_match++;
            }

            cout<<cnt+(mis_match/2)<<endl;
        }

        else
            cout<<"-1"<<endl;
    }

    return 0;
}
