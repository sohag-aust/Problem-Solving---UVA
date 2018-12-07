#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char str[1000];
    while(gets(str))
    {
        int len=strlen(str);
        for(int i=0; i<len; i++)
        {
            if(str[i]==' ')
                cout<<" ";
            else if(str[i]=='\\')
                cout<<"[";
            else if(str[i]==']')
                cout<<"p";
            else if(str[i]=='\'')
                cout<<"l";
            else if(str[i]=='[')
                cout<<"o";
            else if(str[i]=='/')
                cout<<",";
            else if(str[i]==';')
                cout<<"k";
            else if(str[i]=='.')
                cout<<"m";
            else if(str[i]==',')
                cout<<"n";
            else if(str[i]=='p' || str[i]=='p')
                cout<<"i";
            else if(str[i]=='o' || str[i]=='O' )
                cout<<"u";
            else if(str[i]=='l' || str[i]=='L' )
                cout<<"j";
            else if(str[i]=='k' || str[i]=='K' )
                cout<<"h";
            else if(str[i]=='i' || str[i]=='I' )
                cout<<"y";
            else if(str[i]=='m' || str[i]=='M' )
                cout<<"b";
            else if(str[i]=='j' || str[i]=='J' )
                cout<<"g";
            else if(str[i]=='u' || str[i]=='U' )
                cout<<"t";
            else if(str[i]=='n' || str[i]=='N' )
                cout<<"v";
            else if(str[i]=='e' || str[i]=='E' )
                cout<<"q";
            else if(str[i]=='d' || str[i]=='D' )
                cout<<"a";
            else if(str[i]=='c' || str[i]=='C' )
                cout<<"z";
            else if(str[i]=='r' || str[i]=='R' )
                cout<<"w";
            else if(str[i]=='f' || str[i]=='F' )
                cout<<"s";
            else if(str[i]=='v' || str[i]=='V' )
                cout<<"x";
            else if(str[i]=='t' || str[i]=='T' )
                cout<<"e";
            else if(str[i]=='g' || str[i]=='G' )
                cout<<"d";
            else if(str[i]=='b' || str[i]=='B' )
                cout<<"c";
            else if(str[i]=='y' || str[i]=='Y' )
                cout<<"r";
            else if(str[i]=='h' || str[i]=='H' )
                cout<<"f";
        }
        cout<<endl;
    }
    return 0;
}

