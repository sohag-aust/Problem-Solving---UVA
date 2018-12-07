#include<bits/stdc++.h>
using namespace std;

struct node
{
    int id,interval,val;

    node()
    {

    }

    node(int _id,int _interval,int _val)
    {
        id = _id;
        interval = _interval;
        val = _val;
    }
};

bool operator <(const node & a, const node & b)
{
    if(a.val == b.val) return a.id > b.id;
    return a.val > b.val;
}

int main()
{
    priority_queue<node>pq;
    vector<int>ans;

    string str;
    int qnum,period;

    while(cin>>str)
    {
        if(str == "#") break;

        cin>>qnum>>period;
        pq.push(node(qnum,period,period));
    }

    int k;
    cin>>k;

    while(!pq.empty() && ans.size()<k)
    {
        node st;
        st = pq.top();
        pq.pop();

        ans.push_back(st.id);
        st.val += st.interval;
        pq.push(st);
    }

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<endl;

    return 0;
}

