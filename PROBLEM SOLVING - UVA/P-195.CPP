#include<bits/stdc++.h>
using namespace std;

bool cmp(char a,char b)
{
    if(tolower(a)==tolower(b))
    {
        return a<b;
    }

    else
    {
        return tolower(a)<tolower(b);
    }
}
int main()
{
    int test,len;
    char str[1010];

    cin>>test;
    cin.ignore();

    while(test--)
    {
        cin>>str;

        len=strlen(str);

        sort(str,str+len,cmp);

        do{
            cout<<str<<endl;
        }while(next_permutation(str,str+len,cmp));
    }

    return 0;
}
