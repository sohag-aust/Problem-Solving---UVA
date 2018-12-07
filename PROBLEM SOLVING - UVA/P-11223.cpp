#include<bits/stdc++.h>
using namespace std;

map<string,char>mp;
map<string,bool>Mp;

void init()
{
    mp[".-"]='A';mp["-..."]='B';mp["-.-."]='C';mp["-.."]='D';mp["."]='E';mp["..-."]='F';mp["--."]='G';
    mp["...."]='H';mp[".."]='I';mp[".---"]='J';mp["-.-"]='K';mp[".-.."]='L';mp["--"]='M';mp["-."]='N';
    mp["---"]='O';mp[".--."]='P';mp["--.-"]='Q';mp[".-."]='R';mp["..."]='S';mp["-"]='T';mp["..-"]='U';
    mp["...-"]='V';mp[".--"]='W';mp["-..-"]='X';mp["-.--"]='Y';mp["--.."]='Z';mp["-----"]='0';mp[".----"]='1';
    mp["..---"]='2';mp["...--"]='3';mp["....-"]='4';mp["....."]='5';mp["-...."]='6';mp["--..."]='7';mp["---.."]='8';
    mp["----."]='9';mp[".-.-.-"]='.';mp["--..--"]=',';mp["..--.."]='?';mp[".----."]='\'';mp["-.-.--"]='!';mp["-..-."]='/';
    mp["-.--."]='(';mp["-.--.-"]=')';mp[".-..."]='&';mp["---..."]=':';mp["-.-.-."]=';';mp["-...-"]='=';mp[".-.-."]='+';
    mp["-....-"]='-';mp["..--.-"]='_';mp[".-..-."]='"';mp[".--.-."]='@';


    Mp[".-"]=true;Mp["-..."]=true;Mp["-.-."]=true;Mp["-.."]=true;Mp["."]=true;Mp["..-."]=true;Mp["--."]=true;
    Mp["...."]=true;Mp[".."]=true;Mp[".---"]=true;Mp["-.-"]=true;Mp[".-.."]=true;Mp["--"]=true;Mp["-."]=true;
    Mp["---"]=true;Mp[".--."]=true;Mp["--.-"]=true;Mp[".-."]=true;Mp["..."]=true;Mp["-"]=true;Mp["..-"]=true;
    Mp["...-"]=true;Mp[".--"]=true;Mp["-..-"]=true;Mp["-.--"]=true;Mp["--.."]=true;Mp["-----"]=true;Mp[".----"]=true;
    Mp["..---"]=true;Mp["...--"]=true;Mp["....-"]=true;Mp["....."]=true;Mp["-...."]=true;Mp["--..."]=true;Mp["---.."]=true;
    Mp["----."]=true;Mp[".-.-.-"]=true;Mp["--..--"]=true;Mp["..--.."]=true;Mp[".----."]=true;Mp["-.-.--"]=true;Mp["-..-."]=true;
    Mp["-.--."]=true;Mp["-.--.-"]=true;Mp[".-..."]=true;Mp["---..."]=true;Mp["-.-.-."]=true;Mp["-...-"]=true;Mp[".-.-."]=true;
    Mp["-....-"]=true;Mp["..--.-"]=true;Mp[".-..-."]=true;Mp[".--.-."]=true;
}

int main()
{
    init();

    int test;
    cin>>test;
    cin.ignore();

    string str,s;

    while(test--)
    {
        static int cs=0;
        getline(cin,str);
        int sp=0;
        s="";

        cout<<"Message #"<<++cs<<endl;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==' ')
            {
                if(Mp[s])
                {
                    cout<<mp[s];
                    s="";
                    sp=0;
                }

                sp++;
                if(sp==2) cout<<" ";
            }

            else
                s+=str[i];
        }

        if(Mp[s]) cout<<mp[s];

        cout<<endl;
        if(test) cout<<endl;
    }

    return 0;
}

