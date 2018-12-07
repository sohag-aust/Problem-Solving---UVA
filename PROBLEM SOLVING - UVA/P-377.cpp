#include<bits/stdc++.h>
using namespace std;

#define result first
#define carry second

map<pair<char,char>,pair<char,char> >mp;

void init()
{
    mp[ {'V','V'}] = {'V','0'}, mp[ {'V','U'}] = {'U','0'}, mp[ {'V','C'}] = {'C','0'}, mp[ {'V','D'}] = {'D','0'};
    mp[ {'U','V'}] = {'U','0'}, mp[ {'U','U'}] = {'C','0'}, mp[ {'U','C'}] = {'D','0'}, mp[ {'U','D'}] = {'V','U'};
    mp[ {'C','V'}] = {'C','0'}, mp[ {'C','U'}] = {'D','0'}, mp[ {'C','C'}] = {'V','U'}, mp[ {'C','D'}] = {'U','U'};
    mp[ {'D','V'}] = {'D','0'}, mp[ {'D','U'}] = {'V','U'}, mp[ {'D','C'}] = {'U','U'}, mp[ {'D','D'}] = {'C','U'};
}

int main()
{
    init();

    int test;
    cin>>test;
    vector<string>v;

    while(test--)
    {
        int query = 3;
        string num1,num2;
        cin>>num1>>num2;

        deque<char>dq;

        while(query--)
        {
            int i = num1.size() - 1;
            int j = num2.size() - 1;
            pair<char,char>p;
            char q;
            cin>>q;

            if(q == 'N') continue;

            switch(q)
            {
            case 'A':
            {
                dq.clear();
                char _carry = '0';
                char _res;

                while(j >= 0)
                {
                    if(i < 0)
                    {
                        if(_carry != '0')
                        {
                            p = make_pair(_carry,num2[j]);
                        }

                        else
                        {
                            dq.push_front(num2[j]);
                            j--;
                            continue;
                        }

                        j--;
                    }

                    else
                    {
                        p = make_pair(num1[i],num2[j]);
                    }

                    p = mp[p];

                    if(_carry == '0')
                    {
                        _res = p.result;
                        _carry = p.carry;
                    }

                    else if(_carry != '0')
                    {
                        _res = p.result;
                        char temp = p.carry;
                        p = {_res,_carry};
                        p = mp[p];

                        if(p.carry == '0') _carry = temp;
                        else _carry = p.carry;

                        _res = p.result;
                    }

                    dq.push_front(_res);
                    i--,j--;
                }

                if(_carry != '0') dq.push_front(_carry);
                int _sz = dq.size();
                string ans = "";
                int cnt = 0;

                while(cnt < _sz)
                {
                    ans += dq.back();
                    dq.pop_back();
                    cnt++;
                }

                reverse(ans.begin(),ans.end());
                num2 = ans;
                break;
            }

            case 'R':
            {
                num2.erase(num2.begin()+num2.size()-1);
                string temp1 = num2;
                num2.clear();
                num2.append("V");
                num2.append(temp1);
                break;
            }

            case 'L':
            {
                num2 += 'V';
                break;
            }
            }

            dq.clear();
            for(int i=0; i<num2.size(); i++) dq.push_back(num2[i]);
        }

        int sz = dq.size();
        while(sz < 8)
        {
            dq.push_front('V');
            sz++;
        }

        string str = "",chk;

        while(!dq.empty())
        {
            str += dq.front();
            dq.pop_front();
        }

        cin>>chk;
        if(str == chk) v.push_back("YES");
        else v.push_back("NO");
    }

    cout<<"COWCULATIONS OUTPUT"<<endl;
    for(auto it : v)
    {
        cout<<it<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;

    return 0;
}

