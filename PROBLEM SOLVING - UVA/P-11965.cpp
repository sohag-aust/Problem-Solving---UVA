#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n;
    bool blank=false;
    cin>>test;
    while(test--)
    {
        static int cnt=0;
        cin>>n;
        cin.ignore();
        string str[n+2];

        for(int i=0; i<n; i++) getline(cin,str[i]);

        if(blank) puts("");
        blank=true;

        cout<<"Case "<<++cnt<<":\n";
        for(int i=0; i<n; i++)
        {
            string s=str[i];
            int sp=0;
            for(int j=0; j<s.size(); j++)
            {
                if(isspace(s[j]))
                {
                    sp++;
                    if(sp<=1) cout<<" ";
                }

                else if(s[j]!=' ')
                {
                    cout<<s[j];
                    sp=0;
                }
            }

            cout<<endl;
        }
    }

    return 0;
}

