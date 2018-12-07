#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    int test;
    cin>>test;

    while(test--)
    {
        int b,sg,sb;

        priority_queue<int>pqg;
        priority_queue<int>pqb;

        cin>>b>>sg>>sb;

        for(int i=0; i<sg; i++)
        {
            int in;
            cin>>in;
            pqg.push(in);
        }

        for(int i=0; i<sb; i++)
        {
            int in;
            cin>>in;
            pqb.push(in);
        }

        string ans = "";

        while(!pqg.empty() && !pqb.empty())
        {
            int green_size = pqg.size();
            int blue_size = pqb.size();

            int min_size = min(b,min(green_size,blue_size));

            vector<int>vg,vb;

            while(min_size--)
            {
                int green = pqg.top();
                int blue = pqb.top();

                pqg.pop();
                pqb.pop();

                if(green > blue)
                {
                    vg.push_back(green-blue);
                }

                else if(blue > green)
                {
                    vb.push_back(blue-green);
                }

                if(pqg.empty() || pqb.empty())
                    break;
            }

            if(vg.size()>0)
            {
                for(int i=0; i<vg.size(); i++)
                    pqg.push(vg[i]);
            }

            if(vb.size()>0)
            {
                for(int i=0; i<vb.size(); i++)
                    pqb.push(vb[i]);
            }

            if(pqg.empty() && pqb.empty())
            {
                ans = "NAI";
                break;
            }

            if(pqg.empty())
            {
                ans = "blue";
                break;
            }

            if(pqb.empty())
            {
                ans = "green";
                break;
            }
        }

        if(ans == "NAI")
            cout<<"green and blue died"<<endl;

        else if(ans == "green")
        {
            cout<<"green wins"<<endl;

            while(!pqg.empty())
            {
                cout<<pqg.top()<<endl;
                pqg.pop();
            }
        }

        else
        {
            cout<<"blue wins"<<endl;

            while(!pqb.empty())
            {
                cout<<pqb.top()<<endl;
                pqb.pop();
            }
        }

        if(test)
            cout<<endl;
    }

    return 0;
}


