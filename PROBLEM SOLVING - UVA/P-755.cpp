#include<bits/stdc++.h>
using namespace std;

map<char,int>mp;

void init()
{
    mp['A'] = mp['B'] = mp['C'] = 2;
    mp['D'] = mp['E'] = mp['F'] = 3;
    mp['G'] = mp['H'] = mp['I'] = 4;
    mp['J'] = mp['K'] = mp['L'] = 5;
    mp['M'] = mp['N'] = mp['O'] = 6;
    mp['P'] = mp['R'] = mp['S'] = 7;
    mp['T'] = mp['U'] = mp['V'] = 8;
    mp['W'] = mp['X'] = mp['Y'] = 9;
}

int main()
{
    int test;
    cin>>test;

    cin.ignore();

    while(test--)
    {
        init();

        int n;
        cin>>n;

        cin.ignore();

        int flag = 0;

        vector<string>ans;
        map<string,int>cnt;

        while(n--)
        {
            string str,s = "";
            cin>>str;

            for(int i=0; str[i]; i++)
            {
                if(isdigit(str[i]))
                    s += str[i];
                else if(isalpha(str[i]))
                    s += mp[str[i]]+'0';

                if(s.size() == 3) s += "-";
            }

            cnt[s]++;
            ans.push_back(s);

            if(cnt[s]>1) flag = 1;
        }

        if(!flag) cout<<"No duplicates."<<endl;
        else
        {
            sort(ans.begin(),ans.end());
            map<string,bool>visit;

            for(int i=0;i<ans.size();i++)
            {
                string temp = ans[i];
                if(!visit[temp])
                {
                    if(cnt[temp]>1) cout<<temp<<" "<<cnt[temp]<<endl;
                    visit[temp] = true;
                }
            }
        }

        if(test) cout<<endl;
    }

    return 0;
}
