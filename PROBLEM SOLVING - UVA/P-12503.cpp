#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string>mp;
    int test,n,num;
    cin>>test;
    string str,s,s1;

    while(test--)
    {
        int temp=0,cnt=0;
        cin>>n;
        cin.ignore();

        for(int i=0; i<n; i++)
        {
            cin>>str;
            cnt++;

            if(str=="LEFT")
            {
                temp--;
                mp[cnt]="LEFT";
            }

            else if(str=="RIGHT")
            {
                temp++;
                mp[cnt]="RIGHT";
            }

            else
            {
                cin>>s1;
                cin>>num;
                s=mp[num];

                if(s=="LEFT")
                {
                    mp[cnt]="LEFT";
                    temp--;
                }

                else
                {
                    mp[cnt]="RIGHT";
                    temp++;
                }
            }
        }

        cout<<temp<<endl;

        mp.clear();
    }

    return 0;
}
