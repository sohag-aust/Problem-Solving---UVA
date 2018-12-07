#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int d,k;

    while(cin>>d>>k)
    {
        vector<int>duck,knight;

        if(!d && !k) break;

        for(int i=0; i<d; i++)
        {
            int in;
            cin>>in;
            duck.push_back(in);
        }

        for(int i=0; i<k; i++)
        {
            int in;
            cin>>in;
            knight.push_back(in);
        }

        sort(duck.begin(),duck.end());
        sort(knight.begin(),knight.end());

        int i,j,sum;
        int flag = 1;

        sum = i = j = 0;

        while(true)
        {
            int fd = duck[i];
            int kn = knight[j];

            if(fd <= kn)
            {
                i++,j++;
                sum += kn;
            }

            else
                j++;

            if(i < duck.size() && j >= knight.size())
            {
                flag = 0;
                break;
            }

            if(i >= duck.size()) break;
            if(j >= knight.size()) break;
        }

        if(flag)
            cout<<sum;
        else
            cout<<"Loowater is doomed!";

        cout<<endl;
    }

    return 0;
}

