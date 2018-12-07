/// EFFICIENT DIVISOR PROBLEM....

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        static int cs = 0;

        int n;
        cin>>n;
        vector<int>div;

        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i == 0)
            {
                div.push_back(i);

                if(i != sqrt(n))
                {
                    div.push_back(n/i);
                    if(div.size() == 4) break;
                }
            }
        }

        sort(div.begin(),div.end());
        int i=0,j=div.size()-1;

        cout<<"Case #"<<++cs<<": "<<n<<" = "<<div[i]<<" * "<<div[j]<<" = ";
        i++,j--;
        cout<<div[i]<<" * "<<div[j];

        cout<<endl;
    }

    return 0;
}

