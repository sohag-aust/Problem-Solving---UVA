#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int cnt=0;

    vector<string> test,text;

    while(cin>>str)
    {
        if(str=="XXXXXX" && cnt==0)
        {
            cnt=1;
            continue;
        }
        else if(str=="XXXXXX" && cnt==1) break;

        if(cnt==0) text.push_back(str);
        else if(cnt==1) test.push_back(str);
    }

    map<string,string>mp;
    set<string>st;

    for(int i=0; i<test.size(); i++)
    {
        string s1=test[i];
        string temp1=s1;

        sort(s1.begin(),s1.end());
        string add="";
        st.clear();

        for(int j=0; j<text.size(); j++)
        {
            add="";
            string s2=text[j];
            string temp2=s2;

            sort(s2.begin(),s2.end());

            if(s1==s2)
            {
                add+=temp2;
                add+=" ";

                st.insert(add);
            }
        }

        set<string>::iterator it=st.begin();
        string so="";
        while(it!=st.end())
        {
            so+=*it;
            it++;
        }

        mp[temp1]=so;
    }

    for(int i=0; i<test.size(); i++)
    {
        string ss=mp[test[i]];

        if(ss.size()==0)
            cout<<"NOT A VALID WORD"<<endl;

        else
        {
            for(int j=0; j<ss.size(); j++)
            {
                if(ss[j]==' ') cout<<endl;
                else cout<<ss[j];
            }
        }
        cout<<"******"<<endl;
    }

    return 0;
}

