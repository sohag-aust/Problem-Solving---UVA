#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp;
    set<string>st;
    string str;
    int test,cnt;

    cin>>test;
    cin.ignore();
    cin.ignore();

    while(test--)
    {
        cnt=0;

        while(getline(cin,str))
        {
            if(str.size()==0)
                break;

            st.insert(str);
            mp[str]++;
            cnt++;
        }

        set<string>::iterator it;
        it=st.begin();

        while(it!=st.end())
        {
            double val=(((double)(mp[*it]))*100.0)/(double)cnt;

            cout<<*it<<" "<<setprecision(4)<<fixed<<val<<endl;
            it++;
        }

        if(test)
            cout<<endl;

        mp.clear();
        st.clear();
    }

    return 0;
}

