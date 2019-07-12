#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    while(getline(cin,a))
    {
        getline(cin,b);

        stringstream ss1(a);
        string s,ans1,ans2;
        ans1 = ans2 = s = "";

        while(ss1>>s)
            ans1+=s[0];

        stringstream ss2(b);
        while(ss2>>s)
            ans2+=s[0];

        cout<<((ans1==ans2) ? "yes":"no")<<endl;
    }

    return 0;
}
