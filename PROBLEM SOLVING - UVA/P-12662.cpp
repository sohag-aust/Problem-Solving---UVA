#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cin>>len;
    string str;
    cin.ignore();
    getline(cin,str);
    string s;

    stringstream ss(str);
    vector<string>vec;
    while(ss>>s)
        vec.push_back(s);

    vector<int>letter,wht;
    map<int,string>mp,ans;
    map<int,bool>visit,vis;
    letter.push_back(0);
    wht.push_back(0);

    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]=="?") wht.push_back(i+1);
        else
        {
            letter.push_back(i+1);
            mp[i+1]=vec[i];
            vis[i+1]=true;
        }
    }

    for(int i=1,j=i+1; j<letter.size(); i++,j++)
    {
        for(int k=1; k<wht.size(); k++)
        {
            int ind_k=wht[k];
            if(!visit[ind_k])
            {
                int ind_i=letter[i];
                int ind_j=letter[j];

                if(ind_k>ind_i && ind_k<ind_j)
                {
                    int dis1=abs(ind_k-ind_i);
                    int dis2=abs(ind_k-ind_j);

                    if(dis1<dis2)
                    {
                        string st="";
                        if(ind_k>ind_i)
                        {
                            for(int m=1; m<=dis1; m++)
                                st+="right of ";

                            st+=mp[ind_i];
                            ans[ind_k]=st;
                        }

                        else
                        {
                            for(int m=1; m<=dis1; m++)
                                st+="left of ";

                            st+=mp[ind_i];
                            ans[ind_k]=st;
                        }
                    }

                    else if(dis2<dis1)
                    {
                        string st="";
                        if(ind_k>ind_j)
                        {
                            for(int m=1; m<=dis2; m++)
                                st+="right of ";

                            st+=mp[ind_j];
                            ans[ind_k]=st;
                        }

                        else
                        {
                            for(int m=1; m<=dis2; m++)
                                st+="left of ";

                            st+=mp[ind_j];
                            ans[ind_k]=st;
                        }
                    }

                    else
                    {
                        string st="";
                        st+="middle of ";
                        st+=mp[ind_i];
                        st+=" and ";
                        st+=mp[ind_j];
                        ans[ind_k]=st;
                    }

                    visit[ind_k]=true;
                }
            }
        }
    }

    int sz=letter.size()-1;

    int first=letter[1];
    int last=letter[sz];

    string s1="",s3="";

    for(int i=1; i<wht.size(); i++)
    {
        if(wht[i]>last)
        {
            s3+="right of ";
            string s2=s3+mp[last];
            ans[wht[i]]=s2;
        }
    }

    for(int i=wht.size()-1; i>=1; i--)
    {
        if(wht[i]<first)
        {
            s1+="left of ";
            string s2=s1+mp[first];
            ans[wht[i]]=s2;
        }
    }

    int que;
    cin>>que;
    for(int i=1; i<=que; i++)
    {
        int n;
        cin>>n;

        if(vis[n]) cout<<mp[n];
        else cout<<ans[n];
        cout<<endl;
    }

    return 0;
}
/**
10
A ? ? D ? ? ? H ? ?
4
3
8
6
10
*/
