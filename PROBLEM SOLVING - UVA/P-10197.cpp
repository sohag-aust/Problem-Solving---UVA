#include<bits/stdc++.h>
using namespace std;

#define sz 6

struct node
{
    string second,third;

    node(string _second,string _third)
    {
        second = _second;
        third = _third;
    }
};

vector<node>v[sz+4];
string str[sz+4];

void init()
{
    str[0] = "eu";
    str[1] = "tu";
    str[2] = "ele/ela";

    string s1 = "",s2 = "";

    s1 += 'n', s1 += (char)243, s1 += 's';
    s2 += 'v', s2 += (char)243, s2 += 's';

    str[3] = s1;
    str[4] = s2;
    str[5] = "eles/elas";

    v[0].push_back(node("o","1"));
    v[0].push_back(node("tv","s"));
    v[0].push_back(node("tv","1"));
    v[0].push_back(node("tv","mos"));
    v[0].push_back(node("tv","is"));
    v[0].push_back(node("tv","m"));

    v[1].push_back(node("o","1"));
    v[1].push_back(node("tv","s"));
    v[1].push_back(node("tv","1"));
    v[1].push_back(node("tv","mos"));
    v[1].push_back(node("tv","is"));
    v[1].push_back(node("tv","m"));

    v[2].push_back(node("o","1"));
    v[2].push_back(node("es","1"));
    v[2].push_back(node("e","1"));
    v[2].push_back(node("tv","mos"));
    v[2].push_back(node("tv","s"));
    v[2].push_back(node("em","1"));
}

int main()
{
    init();
    string v1,v2,str1,ans;
    char temp;
    int ind,sz2;

    bool blank = false;

    while(cin>>v1>>v2)
    {
        if(blank) cout<<endl;
        blank = true;

        cout<<v1<<" (to "<<v2<<")"<<endl;

        if(v1.size() < 2)
        {
            cout<<"Unknown conjugation"<<endl;
        }

        else
        {
            string sub = v1.substr(v1.size()-2,2);

            temp = v1[v1.size()-2];
            str1 = v1.erase(v1.size()-2,2);

            if(sub == "ar")
            {
                ind = 0;

                for(int j=0; j<sz; j++)
                {
                    ans = "";
                    ans += str1;

                    cout<<str[j];

                    sz2 = str[j].size();
                    for(int k=sz2+1; k<=10; k++)
                        cout<<" ";

                    if(v[ind][j].second == "tv") ans += temp;
                    else ans += v[ind][j].second;
                    if(v[ind][j].third != "1") ans += v[ind][j].third;

                    cout<<ans<<endl;
                }
            }

            else if(sub == "er")
            {
                ind = 1;

                for(int j=0; j<sz; j++)
                {
                    ans = "";
                    ans += str1;

                    cout<<str[j];

                    sz2 = str[j].size();
                    for(int k=sz2+1; k<=10; k++)
                        cout<<" ";

                    if(v[ind][j].second == "tv") ans += temp;
                    else ans += v[ind][j].second;
                    if(v[ind][j].third != "1") ans += v[ind][j].third;

                    cout<<ans<<endl;
                }
            }

            else if(sub == "ir")
            {
                ind = 2;

                for(int j=0; j<sz; j++)
                {
                    ans = "";
                    ans += str1;

                    cout<<str[j];

                    sz2 = str[j].size();
                    for(int k=sz2+1; k<=10; k++)
                        cout<<" ";

                    if(v[ind][j].second == "tv") ans += temp;
                    else ans += v[ind][j].second;
                    if(v[ind][j].third != "1") ans += v[ind][j].third;

                    cout<<ans<<endl;
                }
            }

            else
                cout<<"Unknown conjugation"<<endl;
        }
    }

    return 0;
}
