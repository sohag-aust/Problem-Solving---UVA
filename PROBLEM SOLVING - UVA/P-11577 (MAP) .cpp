/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp;
    string str;
    char ch;
    int test,maxi;

    cin>>test;
    getchar();

    while(test--)
    {
        maxi=0;
        getline(cin,str);

        for(int i=0; i<str.size(); i++)
        {
            if(isalpha(str[i]))
            {
                ch=tolower(str[i]);
                mp[ch]++;

                if(mp[ch]>=maxi)
                    maxi=mp[ch];
            }
        }

        for(int i=97; i<=122; i++)
        {
            if(mp[i]==maxi)
                printf("%c",i);
        }
        cout<<endl;

        mp.clear();
    }
    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,maxi,val;
    string s,new_s;
    map<char,int>mp;
    map<char,bool>MP;
    vector<char>v;
    char ch;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        new_s="";
        maxi=0;
        getline(cin,s);

        for(int i=0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
            {
                new_s+=(char)tolower(s[i]);

                ch=char(tolower(s[i]));
                MP[ch]=true;

                mp[ch]++;
                val=mp[ch];

                if(val>maxi)
                    maxi=val;
            }
        }

        for(int i=0; i<new_s.size(); i++)
        {
            if(MP[new_s[i]])
            {
                if(mp[new_s[i]]==maxi)
                    v.push_back(new_s[i]);

                MP[new_s[i]]=false;
            }
        }

        sort(v.begin(),v.end());

        vector<char>::iterator it;
        it=v.begin();

        while(it!=v.end())
        {
            cout<<*it;
            it++;
        }

        cout<<endl;

        new_s.clear();
        mp.clear();
        v.clear();
    }

    return 0;
}

