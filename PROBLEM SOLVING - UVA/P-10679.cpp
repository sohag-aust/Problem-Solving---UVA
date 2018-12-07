#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    int len1,len2,flag;
    int i,j,q;
    int test;
    cin>>test;
    getchar();

    while(test--)
    {
        cin>>str1;
        len1=str1.size();
        cin>>q;
        getchar();

        while(q--)
        {
            flag=1;
            cin>>str2;
            len2=str2.size();
            for(i=0,j=0; (i<len1 && j<len2); i++,j++)
            {
                if(str1[i]==str2[j])
                    flag=1;
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                cout<<"y"<<endl;
            else
                cout<<"n"<<endl;
        }
    }
    return 0;
}


