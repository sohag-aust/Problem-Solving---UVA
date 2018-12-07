#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("10.txt","r",stdin);
    //freopen("10o.txt","w",stdout);
    int test;
    cin>>test;
    cin.ignore();

    while(test--)
    {
        pair<string,string>p;
        vector<pair<string,string> >v1,v2;

        string old,neww;
        cin>>old;
        cin>>neww;

        int len1=old.size();
        int len2=neww.size();

        string os1,os2,ns1,ns2;

        os1=os2=ns1=ns2="";

        for(int i=1; i<len1; i++)
        {
            if(isalpha(old[i]))
                os1+=old[i];

            else if(isdigit(old[i]))
                os2+=old[i];

            else if(old[i]==',' || old[i]=='}')
            {
                p=make_pair(os1,os2);
                v1.push_back(p);
                os1=os2="";
            }
        }


        for(int i=1; i<len2; i++)
        {
            if(isalpha(neww[i]))
                ns1+=neww[i];

            else if(isdigit(neww[i]))
                ns2+=neww[i];

            else if(neww[i]==',' || neww[i]=='}')
            {
                p=make_pair(ns1,ns2);
                v2.push_back(p);
                ns1=ns2="";
            }
        }

        map<string,int>flag;
        flag.clear();
        int f=1,paici=0;

        set<string>star,minis,plis;

        /// checking minus and star

        for(int i=0; i<v1.size(); i++)
        {
            string s1=v1[i].first;
            string s2;
            paici=0;

            for(int j=0; j<v2.size(); j++)
            {
                s2=v2[j].first;

                if(s1==s2 && !flag[s1])
                {
                    string digit1=v1[i].second;
                    string digit2=v2[j].second;

                    paici=1;

                    if(digit1!=digit2)
                        star.insert(s1);

                    flag[s1]=1;
                }
            }

            if(!paici && !flag[s1] && s1.size()>0)
            {
                minis.insert(s1);
                flag[s1]=1;
            }
        }

        /// checking plus

        for(int i=0; i<v2.size(); i++)
        {
            string s1=v2[i].first;

            for(int j=0; j<v1.size(); j++)
            {
                string s2=v1[j].first;

                if(s1!=s2 && !flag[s1] && s1.size()>0)
                {
                    plis.insert(s1);
                    flag[s1]=1;
                }
            }
        }

        if(plis.size()==0 && minis.size()==0 && star.size()==0)
            cout<<"No changes"<<endl;

        else
        {
            int cnt=0;
            set<string>::iterator it1,it2,it3;

            if(plis.size()>=1)
            {
                cout<<"+";
                it1=plis.begin();
                while(it1!=plis.end())
                {
                    if(cnt<plis.size()-1) cout<<*it1<<",";
                    else cout<<*it1;
                    it1++;
                    cnt++;
                }

                cout<<endl;
            }

            cnt=0;

            if(minis.size()>=1)
            {
                cout<<"-";
                it2=minis.begin();
                while(it2!=minis.end())
                {
                    if(cnt<minis.size()-1) cout<<*it2<<",";
                    else cout<<*it2;
                    it2++;
                    cnt++;
                }

                cout<<endl;
            }

            cnt=0;

            if(star.size()>=1)
            {
                cout<<"*";
                it3=star.begin();
                while(it3!=star.end())
                {
                    if(cnt<star.size()-1) cout<<*it3<<",";
                    else cout<<*it3;
                    it3++;
                    cnt++;
                }

                cout<<endl;
            }
        }
        cout<<endl;
    }

    return 0;
}

