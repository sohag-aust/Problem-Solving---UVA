
#include<bits/stdc++.h>
using namespace std;
int main()

{
    map<char,int>my_map;
    string str;
    char ch;

    int test,len;
    int m,f,sp;
    cin>>test;
    getchar();

    while(test--)
    {
        m=f=sp=0;
        getline(cin,str);

        len=str.size();

        for(int i=0;i<len;i++)
        {
            ch=str[i];
            my_map[ch]++;
        }

        m=my_map['M'];
        f=my_map['F'];

        if(m==f && len>2)
            cout<<"LOOP"<<endl;
        else
            cout<<"NO LOOP"<<endl;

        my_map.clear();
    }
    return 0;
}

/**
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int m,f,sp;
    string str;
    cin>>test;
    getchar();
    while(test--)
    {
        m=f=sp=0;
        getline(cin,str);

        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='M')
                m++;
            else if(str[i]=='F')
                f++;
            else
                sp++;
        }
        if(m==f && m+f+sp>2)
            cout<<"LOOP"<<endl;
        else
            cout<<"NO LOOP"<<endl;
    }
    return 0;
}

*/








