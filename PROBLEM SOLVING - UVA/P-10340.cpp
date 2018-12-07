#include<bits/stdc++.h>
using namespace std;

string str1,str2;
int len1,len2;
int i,j;

int main()
{
    while(cin>>str1>>str2)
    {
        len1=str1.size();
        len2=str2.size();

        for(i=0,j=0; j<len2; j++)
        {
            if(str2[j]==str1[i])
                i++;
        }

        if(i==len1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
