#include<bits/stdc++.h>
using namespace std;

struct node
{
    int len;
    int track;
    string word;
} ara[1010];

bool cmp(node a,node b)
{
    if(a.len == b.len) return a.track<b.track;
    return a.len>b.len;
}

void init()
{
    for(int i=0; i<1010; i++)
    {
        ara[i].len = ara[i].track = 0;
        ara[i].word = "";
    }
}

int main()
{
    string str[]= {"qaz","wsx","edc","rfvtgb"," "," ","yhnujm","ik","ol","p"};

    int k,w;

    while(cin>>k>>w)
    {
        map<int,bool>mp;

        for(int i=0; i<k; i++)
        {
            int angul;
            cin>>angul;

            angul--;
            mp[angul] = true;
        }

        string s = "";

        for(int i=0; i<10; i++)
        {
            if(!mp[i]) s += str[i];
        }

        for(int i=0; i<w; i++)
        {
            string temp;
            cin>>temp;

            ara[i].len = temp.length();
            ara[i].word = temp;
            ara[i].track = i;
        }

        sort(ara,ara+w,cmp);

        int maxi = 0;
        set<string>st;

        for(int i=0; i<w; i++)
        {
            string ss = ara[i].word;

            int cnt = 0;

            for(int m=0; m<ss.size(); m++)
            {
                for(int n=0; n<s.size(); n++)
                {
                    if(ss[m] == s[n])
                    {
                        cnt++;
                        break;
                    }
                }

                if(cnt == ss.size() && cnt)
                {
                    if(cnt>=maxi)
                    {
                        maxi = cnt;
                        st.insert(ss);
                    }
                }
            }
        }

        cout<<st.size()<<endl;

        set<string>::iterator it = st.begin();

        while(it!=st.end())
        {
            cout<<*it<<endl;
            it++;
        }

        init();
    }

    return 0;
}

