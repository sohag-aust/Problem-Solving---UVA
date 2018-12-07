#include<bits/stdc++.h>
using namespace std;

int mat[100+3][100+3];
int temp[100+3][100+3];

int main()
{
    int test;
    string s1,s2;

    cin>>test;

    while(test--)
    {
        vector<string>v;

        int n;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>s1;
            v.push_back(s1);
        }

        for(int i=0; i<n; i++)
        {
            s2 = v[i];

            for(int j=0; j<n; j++)
            {
                mat[i][j] = s2[j]-'0';
            }
        }

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                temp[i][j] = mat[i][j];


        int ins;
        cin>>ins;

        cin.ignore();

        string str,s;

        int a,b;

        while(ins--)
        {
            getline(cin,str);

            s = "";

            for(int i=0; i<3; i++)
                s+=str[i];

            if(s=="row")
            {
                a = str[4]-'0';
                b = str[6]-'0';

                a--,b--;

                for(int j=0; j<n; j++)
                {
                    int c = mat[a][j];
                    int d = mat[b][j];

                    temp[a][j] = d;
                    temp[b][j] = c;
                }
            }

            else if(s=="col")
            {
                a = str[4]-'0';
                b = str[6]-'0';

                a--,b--;

                for(int j=0; j<n; j++)
                {
                    int c = mat[j][a];
                    int d = mat[j][b];

                    temp[j][a] = d;
                    temp[j][b] = c;
                }
            }

            else if(s == "inc")
            {
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(temp[i][j]+1 == 10)
                            temp[i][j] = 0;

                        else
                            temp[i][j] = temp[i][j]+1;
                    }
                }
            }

            else if(s == "dec")
            {
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(temp[i][j]-1 == -1)
                            temp[i][j] = 9;

                        else
                            temp[i][j] = temp[i][j]-1;
                    }
                }
            }

            else if(s == "tra")
            {
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        temp[i][j] = mat[j][i];
                    }
                }
            }

            for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                    mat[i][j] = temp[i][j];
        }

        static int cs = 0;

        cout<<"Case #"<<++cs<<endl;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<mat[i][j];
            cout<<endl;
        }

        cout<<endl;
    }

    return 0;
}

