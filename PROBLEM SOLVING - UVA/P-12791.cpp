
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll fst,lst;
    ll sum,cnt,diff;
    ll temp_f,temp_l;

    while(cin>>fst>>lst)
    {
        cnt=0;
        temp_f=fst;
        temp_l=lst;

        while(1)
        {
            diff=lst-fst;

            if(diff>=temp_l)
            {
                cnt++;
                break;
            }

            fst+=temp_f;
            lst+=temp_l;
            cnt++;
        }

        cout<<cnt<<endl;
    }

    return 0;
}
