#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,sx,sy;
    cin>>x>>y;

    char init;
    map<char,char>lmp,rmp;
    map<pair<int,int>,int>path;
    string str = "NESW";

    for(int i=0; i<str.size()-1; i++)
        rmp[str[i]] = str[i+1];
    rmp[str[str.size()-1]] = str[0];

    for(int i=str.size()-1; i>0; i--)
        lmp[str[i]] = str[i-1];
    lmp[str[0]] = str[str.size()-1];

    while(cin>>sx>>sy>>init)
    {
        string dir;
        cin>>dir;
        char pos = init;
        int flag = 0;

        pair<int,int>prev;

        for(auto it:dir)
        {
            prev = make_pair(sx,sy);

            if(it == 'R') pos = rmp[pos];
            else if(it == 'L') pos = lmp[pos];
            else
            {
                if(pos == 'E') sx++;
                else if(pos == 'W') sx--;
                else if(pos == 'N') sy++;
                else sy--;

                if(sx > x || sy > y || sx < 0 || sy < 0)
                {
                    if(path[prev])
                    {
                        sx = prev.first;
                        sy = prev.second;
                        continue;
                    }

                    flag = 1;
                    path[prev] = 1;
                    break;
                }
            }
        }

        if(!flag) cout<<sx<<" "<<sy<<" "<<pos<<endl;
        else cout<<prev.first<<" "<<prev.second<<" "<<pos<<" LOST"<<endl;
    }

    return 0;
}

