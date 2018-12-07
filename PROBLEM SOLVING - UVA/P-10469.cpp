#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int a,b;

    while(cin>>a>>b)
    {
        string s1,s2;
        s1 = s2 = "";

        while(a)
        {
            int mod = a%2;
            s1 += (char)mod + '0';
            a /= 2;
        }

        while(b)
        {
            int mod = b%2;
            s2 += (char)mod + '0';
            b /= 2;
        }

        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());

        deque<char>q1,q2;

        int maxi = max(s1.size(),s2.size());
        int i = 0;

        while(maxi--)
        {
            if(i >= s1.size())
                q1.push_front('0');
            else
                q1.push_back(s1[i]);

            if(i >= s2.size())
                q2.push_front('0');
            else
                q2.push_back(s2[i]);

            i++;
        }

        ll sum = 0;
        int k = 0;

        while(!q1.empty())
        {
            if(q1.back() == q2.back())
            {
                double val = (double)0 * pow((double)2,(double)k);
                sum += (ll)val;
            }

            else
            {
                double val = (double)1 * pow((double)2,(double)k);
                sum += (ll)val;
            }

            q1.pop_back();
            q2.pop_back();
            k++;
        }

        cout<<sum<<endl;
    }

    return 0;
}

