#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,cnt,temp,mod,i,flag;
    map<int,int>mp;

    while(cin>>n>>m>>k)
    {
        if(!n && !m && !k) return 0;

        flag=cnt=i=0;

        while(true)
        {
            i++;
            cnt++;

            if(i==m)
            {
                if(cnt%7==0)
                    mp[m]++;
                else
                {
                    temp=cnt;
                    while(temp>0)
                    {
                        mod=temp%10;

                        if(mod==7)
                        {
                            mp[m]++;
                            break;
                        }

                        temp/=10;
                    }
                }

                if(mp[m]==k)
                {
                    flag=1;
                    break;
                }
            }

            if(flag) break;

            if(i==n)
            {
                while(i>1)
                {
                    i--;
                    cnt++;

                    if(i==m)
                    {
                        if(cnt%7==0)
                            mp[m]++;
                        else
                        {
                            temp=cnt;
                            while(temp>0)
                            {
                                mod=temp%10;

                                if(mod==7)
                                {
                                    mp[m]++;
                                    break;
                                }

                                temp/=10;
                            }
                        }

                        if(mp[m]==k)
                        {
                            flag=1;
                            break;
                        }
                    }
                }

                if(flag) break;
            }
        }

        cout<<cnt<<endl;
        mp.clear();
    }
}

