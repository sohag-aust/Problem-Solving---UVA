#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    int d,m,y;
    long long maxi,mini,total_day=0;
    int test;
    int i,j;

    maxi=total_day=0;
    mini=1e9;

    cin>>test;
    getchar();

    while(test--)
    {
        cin>>s1>>d>>m>>y;

        total_day = y*365+m*30+d; /// converting year and month in day..

        /// we know 1 year = 365 day
        /// so y*365;

        /// we know 1 month = 30 day
        /// so m*30;

        if(total_day>maxi)
        {
            maxi=total_day;
            s2=s1;
        }

        if(total_day<mini)
        {
            mini=total_day;
            s3=s1;
        }

    }
    //cout<<"Maxi: "<<maxi<<endl;
    //cout<<"Mini: "<<mini<<endl;

    cout<<s2<<endl;
    cout<<s3<<endl;

    return 0;
}
