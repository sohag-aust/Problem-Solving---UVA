#include<bits/stdc++.h>
using namespace std;

map<string, char> B;
map<char, string> S;

void init()
{
    B["*....."] = '1', B["*.*..."] = '2', B["**...."] = '3', B["**.*.."] = '4';
    B["*..*.."] = '5', B["***..."] = '6', B["****.."] = '7', B["*.**.."] = '8';
    B[".**..."] = '9', B[".***.."] = '0';

    S['1'] = "*.....", S['2'] = "*.*...";
    S['3'] = "**....", S['4'] = "**.*..", S['5'] = "*..*..", S['6'] = "***...";
    S['7'] = "****..", S['8'] = "*.**..", S['9'] = ".**...", S['0'] = ".***..";
}

int main()
{
    init();
    int n;

    while(cin>>n && n)
    {
        char ch;
        cin>>ch;

        string str;
        if(ch == 'S')
        {
            cin>>str;
            int cnt = 0;
            int cnt1 = -2;

            for(int j=0; j<3; j++)
            {
                string res = "";
                int k;

                cnt = 0;
                cnt1 += 2;
                cnt += cnt1;

                for(int i=0; i<str.size(); i++)
                {
                    string temp = S[str[i]];
                    string temp1 = "";

                    for(k=cnt; k<cnt+2; k++)
                        temp1 += temp[k];

                    if(i == str.size()-1)
                        res += temp1;

                    else
                    {
                        res += temp1;
                        res += " ";
                    }
                }

                cout<<res<<endl;
            }
        }

        else if(ch == 'B')
        {
            cin.ignore();
            string st[n+5];

            int ind;

            for(int j=0; j<3; j++)
            {
                getline(cin,str);
                int k;

                ind = 0;

                for(int i=0; i<str.size(); i++)
                {
                    string temp1 = "";
                    if(str[i] == ' ') continue;

                    for(k=i; k<i+2; k++)
                        temp1 += str[k];

                    i = k;

                    string temp = st[ind];
                    temp += temp1;
                    st[ind] = temp;
                    ind++;
                }
            }

            for(int i=0;i<n;i++)
                cout<<B[st[i]];
            cout<<endl;
        }
    }

    return 0;
}
