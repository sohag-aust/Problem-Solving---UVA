#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    vector<int>vec;
    map<int,int>mp;

    while(cin>>num)
    {
        if(mp[num]==0)
            vec.push_back(num);

        mp[num]++;

    }


    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<" "<<mp[vec[i]]<<endl;

    return 0;
}

