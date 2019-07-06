#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

map<ll,ll>mp;

void init()
{
    mp[1] = 1, mp[2] = 10, mp[3] = 100, mp[4] = 1000, mp[5] = 10000, mp[6] = 100000, mp[7] = 1000000, mp[8] = 10000000;
    mp[9] = 100000000, mp[10] = 1000000000, mp[11] = 10000000000, mp[12] = 100000000000, mp[13] = 1000000000000;
    mp[14] = 10000000000000;
}

bool isPalindrome(string st)
{
    for(int i=0,j=st.size()-1; i<(st.size())/2; i++,j--)
    {
        if(st[i]!=st[j])
            return false;
    }
    return true;
}

int main()
{
    init();
    int test;
    cin>>test;

    while(test--)
    {
        ll num;
        cin>>num;
        int cnt = 0;

        while(cnt<1001)
        {
            ++cnt;
            ostringstream str1;

            str1<<num;
            string st = str1.str();
            int sz = st.size();

            ll num1 = num;
            ll num2 = 0;
            while(num1!=0)
            {
                int div = num1%10;
                num2+=div*mp[sz];
                --sz;
                num1/=10;
            }

            ll sum = num+num2;
            ostringstream str2;
            str2<<sum;
            st = str2.str();

            if(isPalindrome(st))
            {
                cout<<cnt<<" "<<st<<endl;
                break;
            }

            stringstream val(st);
            val>>num;
        }
    }

    return 0;
}
