#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s1,s2,s3,s4;

    cin>>n;
    string str[n+5];
    cin.ignore();

    for(int i=0; i<n*2; i++)
        getline(cin,str[i]);

    for(int i=0; i<n*2; i++)
    {
        string ss=str[i];

        if(i%2==0)
        {
            s1=s2=s3=s4="";
            int cnt=0;

            for(int j=0; j<ss.size(); j++)
            {
                if(ss[j]=='<' && cnt==0)
                {
                    j++;
                    while(ss[j]!='>' && j<ss.size())
                    {
                        s1+=ss[j];
                        j++;
                    }

                    j++;

                    while(ss[j]!='<' && j<ss.size())
                    {
                        s2+=ss[j];
                        j++;
                    }

                    cnt=1;

                    if(ss[j]=='<' && cnt==1 && j<ss.size())
                    {
                        j++;

                        while(ss[j]!='>' && j<ss.size())
                        {
                            s3+=ss[j];
                            j++;
                        }

                        j++;

                        while(j<ss.size())
                        {
                            s4+=ss[j];
                            j++;
                        }
                    }
                }
            }

            for(int j=0; j<ss.size(); j++)
            {
                if(ss[j]!='<' && ss[j]!='>') cout<<ss[j];
            }
            cout<<endl;
        }


        else
        {
            string res="";
            int cnt=0,pos=0;

            for(int j=0; j<ss.size(); j++)
            {
                if(ss[j]!='.')
                    res+=ss[j];

                if(ss[j]=='.')
                {
                    cnt=1;
                    pos=j;

                    while(ss[j]=='.' && j<ss.size())
                    {
                        j++;
                        cnt++;

                        if(cnt==3) break;
                    }

                    if(cnt==3) break;
                }
            }

            string s11,s22;

            s11=s1+s4;
            s22=s3+s2;
            res+=s22+s11;

            cout<<res<<endl;
        }
    }

    return 0;
}

