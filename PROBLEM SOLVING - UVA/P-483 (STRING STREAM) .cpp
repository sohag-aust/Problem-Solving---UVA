#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        vector<string>v;
        stringstream ss(str);

        while(ss>>str)
            v.push_back(str);

        for(int i=0; i<v.size(); i++)
        {
            string s=v[i];
            int si=s.size();
            for(int j=si-1; j>=0; j--)
                cout<<s[j];

            if(i<v.size()-1)
                cout<<" ";
        }

        cout<<endl;
    }

    return 0;
}

