#include<bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    bool space=false;
    while(cin>>a>>b) {
        if(space) cout<<endl;
        space=true;

        int a_sz=a.size();
        int b_sz=b.size();
        int dp[b_sz+2][a_sz+2];
        map<pair<int,int>, char>mp;

        int maxi=0;
        for(int i=0;i<=b_sz;i++) {
            for(int j=0;j<=a_sz;j++) {
                if(i==0 || j==0) {
                    dp[i][j]=0;
                    mp[{i,j}]='1';
                }
                else {
                    dp[i][j]=-1;
                    mp[{i,j}]='1';
                }
            }
        }

        for(int j=1;j<=b_sz;j++) {
            for(int i=1;i<=a_sz;i++) {
                if(a[i-1]==b[j-1]) {
                    dp[j][i]=dp[j-1][i-1]+1;
                    mp[{j,i}]=a[i-1];
                }
                else {
                    dp[j][i]=0;
                    mp[{j,i}]='1';
                }
                maxi=max(maxi,dp[j][i]);
            }
        }

        string temp="";
        vector<string>v;
        for(int i=1;i<=b_sz;i++) {
            for(int j=1;j<=a_sz;j++) {
                if(dp[i][j]==maxi) {
                    int ti=i,tj=j;
                    temp="";
                    while(ti>=1 && tj>=1 && dp[ti][tj]>=1) {
                        if(isalpha(mp[{ti,tj}])) {
                            temp+=mp[{ti,tj}];
                        }
                        ti--,tj--;
                    }
                    reverse(temp.begin(),temp.end());
                    v.push_back(temp);
                }else temp="";
            }
        }

        sort(v.begin(),v.end());
        bool found=false;

        if(maxi==0 || v.size()==0) {
            cout<<"No common sequence."<<endl;
        }else {
            map<string,int>visit;
            for(auto it:v) {
                if(it.size()==maxi) {
                    found=true;
                    if(!visit[it]) {
                        cout<<it<<endl;
                        visit[it]=1;
                    }
                }
            }
            if(!found) cout<<"No common sequence."<<endl;
        }
    }
    return 0;
}
