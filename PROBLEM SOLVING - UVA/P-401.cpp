
#include<bits/stdc++.h>
using namespace std;

map<char,char>rev;
string str;

void init()
{
    rev['A']='A';rev['E']='3';rev['H']='H';rev['I']='I';
    rev['J']='L';rev['L']='J';rev['M']='M';rev['O']='O';
    rev['S']='2';rev['T']='T';rev['U']='U';rev['V']='V';
    rev['W']='W';rev['X']='X';rev['Y']='Y';rev['Z']='5';
    rev['1']='1';rev['2']='S';rev['3']='E';rev['5']='Z';
    rev['8']='8';
}

int mirror_string()
{
    int len=str.size(),flag=1;

    for(int i=0,j=len-1;i<len/2;i++,j--)
    {
        if(rev[str[i]]!=str[j])
        {
            flag=0;
            break;
        }
    }

    if(len%2!=0)
    {
        if(rev[str[len/2]]!=str[len/2])
            flag=0;
    }

    if(flag) return 1;
    else return 0;
}

int regular_palindrome()
{
    int len=str.size(),flag=1;

    for(int i=0,j=len-1;i<len/2;i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=0;
            break;
        }
    }

    if(flag) return 1;
    else return 0;
}

int main()
{
    while(cin>>str)
    {
        int ms,mp,rp;

        init();
        ms=mirror_string();
        rp=regular_palindrome();

        mp=ms+rp;

        if(mp==2) cout<<str<<" -- is a mirrored palindrome.";
        else if(ms==1) cout<<str<<" -- is a mirrored string.";
        else if(rp==1) cout<<str<<" -- is a regular palindrome.";
        else cout<<str<<" -- is not a palindrome.";

        cout<<endl<<endl;
    }

    return 0;
}
