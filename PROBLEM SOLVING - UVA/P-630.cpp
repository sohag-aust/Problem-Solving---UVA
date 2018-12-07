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
        int n;
        cin>>n;

        cin.ignore();

        string str;
        vector<string>v1,v2;

        while(n--)
        {
            getline(cin,str);
            v1.push_back(str);
        }

        while(getline(cin,str))
        {
            if(str=="END") break;
            v2.push_back(str);
        }

        for(int i=0;i<v2.size();i++)
        {
            string s1 = v2[i];

            cout<<"Anagrams for: "<<s1<<endl;

            int flag = 0;
            int cnt = 0;

            for(int j=0;j<v1.size();j++)
            {
                string s2 = v1[j];

                sort(s1.begin(),s1.end());
                sort(s2.begin(),s2.end());

                if(s1 == s2)
                {
                    flag = 1;
                    printf("%3d) ",++cnt);
                    cout<<v1[j]<<endl;
                }
            }

            if(!flag) cout<<"No anagrams for: "<<v2[i]<<endl;
        }

        if(test) cout<<endl;
    }

    return 0;
}

