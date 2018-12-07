#include<bits/stdc++.h>
using namespace std;

struct node
{
    double x1,x2,y1,y2;

    node(double _x1,double _x2,double _y1,double _y2)
    {
        x1 = _x1, x2 = _x2;
        y1 = _y1, y2 = _y2;
    }
};

int main()
{
    char ch;
    vector<node>v;
    double a,b,c,d;

    while(cin>>ch && ch!='*')
    {
        cin>>a>>b>>c>>d;
        v.push_back(node(min(a,c),max(a,c),min(b,d),max(b,d)));
    }

    while(cin>>a>>b)
    {
        static int cnt = 1;
        if(a == 9999.9 && b == 9999.9) break;

        int flag = 0;
        for(int i=0; i<v.size(); i++)
        {
            node n = v[i];
            if((a > n.x1 && a < n.x2) && (b > n.y1 && b < n.y2))
            {
                flag = 1;
                cout<<"Point "<<cnt<<" is contained in figure "<<i+1<<endl;
            }
        }

        if(!flag) cout<<"Point "<<cnt<<" is not contained in any figure"<<endl;
        cnt++;
    }

    return 0;
}
