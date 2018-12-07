#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    cin.ignore();
    cin.ignore();

    while(test--)
    {
        string str;
        vector<string>v;

        while(getline(cin,str))
        {
            if(str.size() == 0) break;

            v.push_back(str);
        }

        sort(v.begin(),v.end());

        for(int i=0; i<v.size(); i++)
        {
            for(int j=i+1; j<v.size(); j++)
            {
                string s = "";
                string temp = v[j];

                for(int k=0; k<temp.size(); k++)
                {
                    if(!isspace(temp[k])) s+=temp[k];
                }

                sort(s.begin(),s.end());

                string temp1 = v[i];
                string s1 = "";

                for(int m=0; m<temp1.size(); m++)
                {
                    if(!isspace(temp1[m])) s1+=temp1[m];
                }

                sort(s1.begin(),s1.end());

                if(s == s1)
                {
                    cout<<temp1<<" = "<<temp<<endl;
                }
            }
        }

        if(test)
            cout<<endl;
    }

    return 0;
}
