#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("365in.txt","r",stdin);
    int r,c,e;
    char ara[15][15];

    while(cin>>r>>c>>e)
    {
        if(!r && !c && !e) break;

        pair<int,int>p;
        map<pair<int,int>,int>mp,prev;

        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=c; j++)
            {
                char ch;
                cin>>ch;
                ara[i][j] = ch;
            }
        }

        int posc = e;
        int posr = 1;
        int cnt = 0;
        int track[20][20];

        int step,loop;
        step = loop = 0;

        while(true)
        {
            if(ara[posr][posc] == 'W')
            {
                posc--;

                if(posc<1)
                {
                    cnt++;
                    break;
                }

                p = make_pair(posr,posc);
                mp[p]++;

                if(mp[p]>1)
                {
                    cnt++;
                    step = prev[p];
                    loop = cnt-step;

                    int p1 = p.first;
                    int p2 = p.second;
                    p2++;

                    if(p1==1 && p2==e) step=0;
                    break;
                }

                cnt++;
                track[posr][posc] = cnt;
                prev[p] = cnt;
            }

            else if(ara[posr][posc] == 'E')
            {
                posc++;

                if(posc>c)
                {
                    cnt++;
                    break;
                }

                p = make_pair(posr,posc);
                mp[p]++;

                if(mp[p]>1)
                {
                    cnt++;
                    step = prev[p];
                    loop = cnt-step;

                    int p1 = p.first;
                    int p2 = p.second;
                    p2--;

                    if(p1==1 && p2==e) step=0;
                    break;
                }

                cnt++;
                track[posr][posc] = cnt;
                prev[p] = cnt;
            }

            else if(ara[posr][posc] == 'N')
            {
                posr--;

                if(posr<1)
                {
                    cnt++;
                    break;
                }

                p = make_pair(posr,posc);
                mp[p]++;

                if(mp[p]>1)
                {
                    cnt++;
                    step = prev[p];
                    loop = cnt-step;

                    int p1 = p.first;
                    int p2 = p.second;
                    p1++;

                    if(p1==1 && p2==e) step=0;
                    break;
                }

                cnt++;
                track[posr][posc] = cnt;
                prev[p] = cnt;
            }

            else if(ara[posr][posc] == 'S')
            {
                p = make_pair(posr,posc);

                posr++;

                if(posr>r)
                {
                    cnt++;
                    break;
                }

                p = make_pair(posr,posc);
                mp[p]++;

                if(mp[p]>1)
                {
                    cnt++;
                    step = prev[p];
                    loop = cnt-step;

                    int p1 = p.first;
                    int p2 = p.second;
                    p1--;

                    if(p1==1 && p2==e) step=0;
                    break;
                }

                cnt++;
                track[posr][posc] = cnt;
                prev[p] = cnt;
            }
        }

        if(loop == 0)
        {
            cout<<cnt<<" step(s) to exit";
        }

        else
        {
            cout<<step<<" step(s) before a loop of "<<loop<<" step(s)";
        }

        cout<<endl;
    }

    return 0;
}

