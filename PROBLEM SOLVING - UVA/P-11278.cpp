#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>? ";
    string s2="`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\" ";

    map<char,char>mp;

    for(int i=0; i<s1.size(); i++) mp[s1[i]]=s2[i];

    string str;

    while(getline(cin,str))
    {
        for(int i=0; i<str.size(); i++) cout<<mp[str[i]];
        cout<<endl;
    }

    return 0;
}
