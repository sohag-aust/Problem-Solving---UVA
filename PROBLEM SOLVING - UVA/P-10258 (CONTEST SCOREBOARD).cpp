#include<bits/stdc++.h>
using namespace std;

struct node
{
    int team;
    int total_solve;
    int time_penalty;
} ara[110];

void init()
{
    for(int i=0; i<110; i++)
    {
        ara[i].team = ara[i].time_penalty = ara[i].total_solve = 0;
    }
}

bool cmp(node a,node b)
{
    if(a.total_solve == b.total_solve && a.time_penalty == b.time_penalty) return a.team < b.team;
    else if(a.total_solve == b.total_solve) return a.time_penalty < b.time_penalty;
    return a.total_solve > b.total_solve;
}

int convert_to_int(string s)
{
    reverse(s.begin(),s.end());

    int sum = 0;
    int k = 0;

    for(auto i : s)
    {
        double po = pow((double)10,(double)k);
        int v = i - '0';
        double r = (double)v * po;
        sum += (int)r;
        k++;
    }

    return sum;
}

int main()
{
    int test;
    cin>>test;
    cin.ignore();
    cin.ignore();

    while(test--)
    {
        init();

        string str;
        int k = 0;

        map<int,int>mp;
        map<int,int>time;
        map<int,int>solve;
        map<int,int>penalty;
        set<int>st;
        vector<int>vec[110];
        vector<int>inc[110];

        while(getline(cin,str))
        {
            if(str.size() == 0) break;
            stringstream ss(str);

            string s;
            vector<string>v;

            while(ss>>s)
            {
                v.push_back(s);
            }

            int t = convert_to_int(v[0]);
            int n = convert_to_int(v[1]);
            int p = convert_to_int(v[2]);
            string oj = v[3];
            char o = oj[0];

            int flag = 1;

            st.insert(t);

            if(o == 'C')
            {
                int sz = vec[n].size();

                for(int j=0; j<sz; j++)
                {
                    if(vec[n][j] == t)
                    {
                        flag = 0;
                        break;
                    }
                }

                if(!flag)
                    continue;

                time[t] += p;
                solve[t] += 1;
                vec[n].push_back(t);

                if(penalty[t] > 0)
                {
                    int ssz = inc[n].size();

                    for(int j=0; j<sz; j++)
                    {
                        if(inc[n][j] == t)
                        {
                            flag = 0;
                            break;
                        }
                    }

                    if(!flag || !ssz) continue;

                    else
                    {
                        time[t] += penalty[t];
                        penalty[t] -= 20;
                    }
                }
            }

            else if(o == 'I')
            {
                penalty[t] += 20;
                inc[n].push_back(t);
            }
        }

        int in = 0;

        for(auto i : st)
        {
            ara[in].team = i;
            ara[in].total_solve = solve[i];
            ara[in].time_penalty = time[i];

            in++;
        }

        sort(ara,ara+in,cmp);

        for(int i=0; i<in; i++)
        {
            cout<<ara[i].team<<" "<<ara[i].total_solve<<" "<<ara[i].time_penalty<<endl;
        }

        if(test) cout<<endl;
    }

    return 0;
}

