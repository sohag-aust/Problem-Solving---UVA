#include<bits/stdc++.h>
using namespace std;

bool visit[5000];

void init(int day)
{
    for(int i=6,j=i+1; i<=day; i+=7,j+=7)
    {
        visit[i]=true;
        visit[j]=true;
    }
}

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        set<int>st;
        int day;
        cin>>day;

        int n;
        cin>>n;
        int ara[n+2];

        for(int i=0; i<n; i++)
            cin>>ara[i];

        init(day);

        for(int i=0; i<n; i++)
        {
            int num;
            num=ara[i];

            for(int j=num; j<=day; j+=num)
            {
                if(!visit[j])
                    st.insert(j);
            }
        }

        cout<<st.size()<<endl;
        st.clear();
    }

    return 0;
}

