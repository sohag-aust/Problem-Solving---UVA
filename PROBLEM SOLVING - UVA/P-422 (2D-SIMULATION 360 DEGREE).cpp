#include<bits/stdc++.h>
using namespace std;

char str[100+2][100+2];
string st;
vector<pair<int,int> >v;
int n;

bool horizontal()
{
    v.clear();
    int in = -1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n;)
        {
            int flag = 0;

            while(str[i][j] == st[++in])
            {
                v.push_back({i,j});

                if(in == st.size()-1)
                {
                    int sz = v.size();
                    cout<<v[0].first<<","<<v[0].second<<" "<<v[sz-1].first<<","<<v[sz-1].second<<endl;
                    return true;
                }

                j++;
                flag = 1;
            }

            v.clear();
            in = -1;

            if(!flag) j++;
        }
    }

    return false;
}

bool horizontal_reverse()
{
    v.clear();
    int in = -1;

    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=1; j--)
        {
            if(str[i][j] == st[++in])
            {
                v.push_back({i,j});
            }

            else
            {
                v.clear();
                in = -1;
            }

            if(in == st.size()-1)
            {
                int sz = v.size();
                cout<<v[0].first<<","<<v[0].second<<" "<<v[sz-1].first<<","<<v[sz-1].second<<endl;
                return true;
            }
        }
    }

    return false;
}

bool vertical()
{
    v.clear();
    int in = -1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(str[j][i] == st[++in])
            {
                v.push_back({j,i});
            }

            else
            {
                v.clear();
                in = -1;
            }

            if(in == st.size()-1)
            {
                int sz = v.size();
                cout<<v[0].first<<","<<v[0].second<<" "<<v[sz-1].first<<","<<v[sz-1].second<<endl;
                return true;
            }
        }
    }

    return false;
}

bool vertical_reverse()
{
    v.clear();
    int in = -1;

    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=1; j--)
        {
            if(str[j][i] == st[++in])
            {
                v.push_back({j,i});
            }

            else
            {
                v.clear();
                in = -1;
            }

            if(in == st.size()-1)
            {
                int sz = v.size();
                cout<<v[0].first<<","<<v[0].second<<" "<<v[sz-1].first<<","<<v[sz-1].second<<endl;
                return true;
            }
        }
    }

    return false;
}

bool diagonal_right_up()
{
    v.clear();
    int in = -1;
    int i,j,k;

    i = n;
    k = 1;

    while(i > 1)
    {
        k = 1;
        j = i;
        v.clear();
        in = -1;

        for(int m=j; m<=n; m++)
        {
            if(k<=n)
            {
                if(str[k][m] == st[++in])
                {
                    v.push_back({k,m});
                }

                else
                {
                    v.clear();
                    in = -1;
                }

                if(in == st.size()-1)
                {
                    int sz = v.size();
                    cout<<v[0].first<<","<<v[0].second<<" "<<v[sz-1].first<<","<<v[sz-1].second<<endl;
                    return true;
                }
            }

            k++;
        }

        i--;
    }

    return false;
}

bool diagonal_right_up_reverse()
{
    v.clear();
    int in = -1;
    int i,j,k,l;

    i = n;
    k = 1;

    while(i > 1)
    {
        l = k;
        i = n;

        v.clear();
        in = -1;

        while(l>=1 && i>=1)
        {
            if(str[l][i] == st[++in])
            {
                v.push_back({l,i});
            }

            else
            {
                v.clear();
                in = -1;
            }

            if(in == st.size()-1)
            {
                int sz = v.size();
                cout<<v[0].first<<","<<v[0].second<<" "<<v[sz-1].first<<","<<v[sz-1].second<<endl;
                return true;
            }

            l--;
            i--;
        }

        k++;
    }

    return false;
}

bool diagonal_right_down()
{
    v.clear();
    int in = -1;
    int i,j,k;

    i = n;
    k = 1;

    while(i >= 1)
    {
        k = 1;
        j = i;

        v.clear();
        in = -1;

        for(int m=j; m<=n; m++)
        {
            if(k<=n)
            {
                if(str[m][k] == st[++in])
                {
                    v.push_back({m,k});
                }

                else
                {
                    v.clear();
                    in = -1;
                }

                if(in == st.size()-1)
                {
                    int sz = v.size();
                    cout<<v[0].first<<","<<v[0].second<<" "<<v[sz-1].first<<","<<v[sz-1].second<<endl;
                    return true;
                }
            }

            k++;
        }

        i--;
    }

    return false;
}

bool diagonal_right_down_reverse()
{
    v.clear();
    int in = -1;
    int i,j,k,l;

    i = n;
    k = 1;

    while(i >= 1)
    {
        l = k;
        i = n;

        v.clear();
        in = -1;

        while(l>=1 && i>=1)
        {
            if(str[i][l] == st[++in])
            {
                v.push_back({i,l});
            }

            else
            {
                v.clear();
                in = -1;
            }

            if(in == st.size()-1)
            {
                int sz = v.size();
                cout<<v[0].first<<","<<v[0].second<<" "<<v[sz-1].first<<","<<v[sz-1].second<<endl;
                return true;
            }

            l--;
            i--;
        }

        k++;
    }

    return false;
}

bool diagonal_left_down()
{
    v.clear();
    int in = -1;
    int i,j;

    i = n;

    while(i >= 1)
    {
        j = n;
        v.clear();
        in = -1;

        for(int k=i; k<=n; k++)
        {
            if(str[k][j] == st[++in])
            {
                v.push_back({k,j});
            }

            else
            {
                v.clear();
                in = -1;
            }

            if(in == st.size()-1)
            {
                int sz = v.size();
                cout<<v[0].first<<","<<v[0].second<<" "<<v[sz-1].first<<","<<v[sz-1].second<<endl;
                return true;
            }
            j--;
        }

        i--;
    }

    return false;
}

bool diagonal_left_down_reverse()
{
    v.clear();
    int in = -1;
    int i,j;

    i = n;

    while(i >= 1)
    {
        j = n;
        v.clear();
        in = -1;

        for(int k=i; k<=n; k++)
        {
            if(str[j][k] == st[++in])
            {
                v.push_back({j,k});
            }

            else
            {
                v.clear();
                in = -1;
            }

            if(in == st.size()-1)
            {
                int sz = v.size();
                cout<<v[0].first<<","<<v[0].second<<" "<<v[sz-1].first<<","<<v[sz-1].second<<endl;
                return true;
            }
            j--;
        }

        i--;
    }

    return false;
}

bool diagonal_left_up()
{
    v.clear();
    int in = -1;
    int i,j;

    j = 1;

    while(j < n)
    {
        i = 1;
        v.clear();
        in = -1;

        for(int k=j; k>=1; k--)
        {
            if(str[i][k] == st[++in])
            {
                v.push_back({i,k});
            }

            else
            {
                v.clear();
                in = -1;
            }

            if(in == st.size()-1)
            {
                int sz = v.size();
                cout<<v[0].first<<","<<v[0].second<<" "<<v[sz-1].first<<","<<v[sz-1].second<<endl;
                return true;
            }
            i++;
        }

        j++;
    }

    return false;
}

bool diagonal_left_up_reverse()
{
    v.clear();
    int in = -1;
    int i,j;

    j = 1;

    while(j < n)
    {
        i = 1;
        v.clear();
        in = -1;

        for(int k=j; k>=1; k--)
        {
            if(str[k][i] == st[++in])
            {
                v.push_back({k,i});
            }

            else
            {
                v.clear();
                in = -1;
            }

            if(in == st.size()-1)
            {
                int sz = v.size();
                cout<<v[0].first<<","<<v[0].second<<" "<<v[sz-1].first<<","<<v[sz-1].second<<endl;
                return true;
            }
            i++;
        }

        j++;
    }

    return false;
}

int main()
{
    while(cin>>n && n)
    {
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                cin>>str[i][j];

        while(cin>>st)
        {
            if(st == "0") break;

            bool ans;

            ans = horizontal();
            if(ans) continue;
            ans = horizontal_reverse();
            if(ans) continue;

            ans = vertical();
            if(ans) continue;
            //ans = vertical_reverse();
            //if(ans) continue;

            ans = diagonal_right_up();
            if(ans) continue;
            ans = diagonal_right_up_reverse();
            if(ans) continue;

            ans = diagonal_right_down();
            if(ans) continue;
            ans = diagonal_right_down_reverse();
            if(ans) continue;

            ans = diagonal_left_down();
            if(ans) continue;
            ans = diagonal_left_down_reverse();
            if(ans) continue;

            ans = diagonal_left_up();
            if(ans) continue;
            ans = diagonal_left_up_reverse();
            if(ans) continue;

            cout<<"Not found"<<endl;
        }
    }

    return 0;
}

