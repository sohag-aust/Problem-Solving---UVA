#include<bits/stdc++.h>
using namespace std;

struct node
{
    double left;
    double right;
};

bool cmp(node a,node b)
{
    return a.left < b.left;
}

int main()
{
    size_t n,l,w;

    while(cin>>n>>l>>w)
    {
        vector<node>v(1);

        while(n--)
        {
            double pos,rad;

            cin>>pos>>rad;

            if(w/2.0 >= rad) continue;

            double range = sqrt( (rad * rad) - (((double)w/2.0) * ((double)w/2.0)) );

            v[0].left = pos - range;
            v[0].right = pos + range;
            v.push_back(v[0]);
        }

        sort(v.begin()+1,v.end(),cmp);

        double init,reach;
        size_t cnt,i = 1;

        init = reach = cnt = 0;

        while(reach < l)
        {
            double temp = init;
            size_t flag = 0;

            while(i < v.size())
            {
                if(v[i].left > init)
                    break;

                if(v[i].right >= temp)
                {
                    temp = v[i].right;
                    flag = i;
                }

                i++;
            }

            if(!flag) break;

            reach = init = temp;
            cnt++;
        }

        if(reach < l) cout<<-1;
        else cout<<cnt;
        cout<<endl;
    }

    return 0;
}

