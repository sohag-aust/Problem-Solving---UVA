#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,que;
    string s1,s2,s3;
    map<string,string>mp;
    map<string,bool>MP;

    cin>>test>>que;
    cin.ignore();

    while(test--)
    {
        cin>>s1>>s2;
        mp[s1]=s2;
        MP[s1]=true;
    }

    while(que--)
    {
        cin>>s3;

        if(MP[s3])
        {
            cout<<mp[s3]<<endl;
        }

        else
        {
            int len=s3.size();

            if(s3[len-1]=='y' && (s3[len-2]!='a' && s3[len-2]!='e' && s3[len-2]!='i'&& s3[len-2]!='o'&& s3[len-2]!='u'))
            {
                for(int i=0; i<len-1; i++)
                    cout<<s3[i];
                cout<<"ies"<<endl;
            }

            else if(s3[len-1]=='o' || s3[len-1]=='s' || s3[len-1]=='x')
            {
                for(int i=0; i<len; i++)
                    cout<<s3[i];
                cout<<"es"<<endl;
            }

            else if((s3[len-1]=='h' && s3[len-2]=='c') || (s3[len-1]=='h' && s3[len-2]=='s') )
            {
                for(int i=0; i<len; i++)
                    cout<<s3[i];
                cout<<"es"<<endl;
            }

            else
            {
                for(int i=0; i<len; i++)
                    cout<<s3[i];
                cout<<"s"<<endl;
            }
        }
    }

    return 0;
}

