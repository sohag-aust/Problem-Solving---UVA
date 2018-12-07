#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    cin.ignore();

    string str,ans;

    int a,c,g,t;


    while(test--)
    {
        a=c=g=t=0;

        set<string>st;
        vector<int>va,vc,vg,vt;

        cin>>str;

        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='A')
            {
                a=1;
                va.push_back(i);
            }

            else if(str[i]=='C')
            {
                c=1;
                vc.push_back(i);
            }

            else if(str[i]=='G')
            {
                g=1;
                vg.push_back(i);
            }
            else if(str[i]=='T')
            {
                t=1;
                vt.push_back(i);
            }
        }

        if(a==1)
        {
            int len=str.size();
            ans="";

            for(int i=0; i<va.size(); i++)
            {
                int start=va[i];
                int en;

                if(start==0)
                {
                    for(int i=start; i<len; i++)
                        ans+=str[i];

                    st.insert(ans);
                    ans="";
                }

                else
                {
                    en=start-1;

                    for(int j=start; j!=en; j++)
                    {
                        if(j==len)
                        {
                            j=0;
                            if(j==en) break;
                        }
                        ans+=str[j];
                    }

                    ans+=str[en];
                    st.insert(ans);
                    ans="";
                }
            }

            set<string>::iterator it;
            it=st.begin();
            cout<<*it<<endl;
        }

        else if(c==1)
        {
            int len=str.size();
            ans="";

            for(int i=0; i<vc.size(); i++)
            {
                int start=vc[i];
                int en;

                if(start==0)
                {
                    for(int i=start; i<len; i++)
                        ans+=str[i];

                    st.insert(ans);
                    ans="";
                }

                else
                {
                    en=start-1;

                    for(int j=start; j!=en; j++)
                    {
                        if(j==len) j=0;
                        ans+=str[j];
                    }
                    ans+=str[en];
                    st.insert(ans);
                    ans="";
                }
            }

            set<string>::iterator it;
            it=st.begin();
            cout<<*it<<endl;
        }

        else if(g==1)
        {
            int len=str.size();
            ans="";

            for(int i=0; i<vg.size(); i++)
            {
                int start=vg[i];
                int en;

                if(start==0)
                {
                    for(int i=start; i<len; i++)
                        ans+=str[i];

                    st.insert(ans);
                    ans="";
                }

                else
                {
                    en=start-1;

                    for(int j=start; j!=en; j++)
                    {
                        if(j==len) j=0;
                        ans+=str[j];
                    }
                    ans+=str[en];
                    st.insert(ans);
                    ans="";
                }
            }

            set<string>::iterator it;
            it=st.begin();

            cout<<*it<<endl;
        }

        else if(t==1)
        {
            int len=str.size();
            ans="";

            for(int i=0; i<vt.size(); i++)
            {
                int start=vt[i];
                int en;

                if(start==0)
                {
                    for(int i=start; i<len; i++)
                        ans+=str[i];

                    st.insert(ans);
                    ans="";
                }

                else
                {
                    en=start-1;

                    for(int j=start; j!=en; j++)
                    {
                        if(j==len) j=0;
                        ans+=str[j];
                    }
                    ans+=str[en];
                    st.insert(ans);
                    ans="";
                }
            }

            set<string>::iterator it;
            it=st.begin();

            cout<<*it<<endl;
        }
    }

    return 0;
}

