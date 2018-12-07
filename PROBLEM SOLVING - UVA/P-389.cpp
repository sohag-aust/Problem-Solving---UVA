#include<bits/stdc++.h>
using namespace std;

unordered_map<char,string>mp;
unordered_map<int,char>mp1;

void init()
{
    for(int i=0; i<10; i++)
    {
        char ch = i+'0';
        string s = "";
        s += ch;

        mp[ch] = s;
    }

    mp['A'] = "10";
    mp['B'] = "11";
    mp['C'] = "12";
    mp['D'] = "13";
    mp['E'] = "14";
    mp['F'] = "15";

    mp1[10] = 'A';
    mp1[11] = 'B';
    mp1[12] = 'C';
    mp1[13] = 'D';
    mp1[14] = 'E';
    mp1[15] = 'F';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    init();

    string str,s;

    while(getline(cin,str))
    {
        vector<string>v,vs;
        stack<int>st;
        stringstream ss(str);

        while(ss>>s)
        {
            v.push_back(s);
        }

        string number = v[0];

        for(auto i : number)
        {
            string temp = mp[i];
            vs.push_back(temp);
        }

        reverse(v[1].begin(),v[1].end());
        reverse(v[2].begin(),v[2].end());

        int digit,k;

        digit = k = 0;

        for(auto i:v[1])
        {
            double multi = pow(double(10),(double)k++);
            int d = (i-48) * (int)multi;
            digit += d;
        }

        int base_from = digit;

        digit = k = 0;

        for(auto i:v[2])
        {
            double multi = pow(double(10),(double)k++);
            int d = (i-48) * (int)multi;
            digit += d;
        }

        int base_to = digit;

        if(base_from == 10 && base_to == 10)
        {
            int flag = 0;
            string result = "";

            for(auto i : number)
            {
                if(i != '0')
                    flag = 1;

                if(flag)
                    result += i;
            }

            if(result.size() <= 7)
            {
                if(result.size() > 0)
                    cout<<setw(7)<<result;
                else
                    cout<<setw(7)<<"0";
            }

            else
                cout<<setw(7)<<"ERROR";

            cout<<endl;
        }

        else if(base_from == 10)
        {
            digit = k =0;

            reverse(vs.begin(),vs.end());

            for(auto i : vs)
            {
                string temp = i;

                reverse(temp.begin(),temp.end());

                for(auto j : temp)
                {
                    double multi = pow(double(10),(double)k++);
                    int d = (j-48) * (int)multi;
                    digit += d;
                }
            }

            while(digit > 0)
            {
                st.push(digit % base_to);
                digit /= base_to;
            }

            string ans = "";

            while(!st.empty())
            {
                int val = st.top();

                if(val <= 9)
                {
                    char ch = val + '0';
                    ans += ch;
                }

                else
                {
                    char ch = mp1[val];
                    ans += ch;
                }

                st.pop();
            }

            int flag = 0;
            string result = "";

            for(auto i : ans)
            {
                if(i != '0')
                    flag = 1;

                if(flag)
                    result += i;
            }

            if(result.size() <= 7)
            {
                if(result.size() > 0)
                    cout<<setw(7)<<result;
                else
                    cout<<setw(7)<<"0";
            }

            else
                cout<<setw(7)<<"ERROR";

            cout<<endl;
        }

        else
        {
            vector<int>base_number;

            digit = k =0;

            reverse(vs.begin(),vs.end());

            for(auto i : vs)
            {
                string temp = i;
                digit = k = 0;

                reverse(temp.begin(),temp.end());

                for(auto j : temp)
                {
                    double multi = pow(double(10),(double)k++);
                    int d = (j-48) * (int)multi;
                    digit += d;
                }

                base_number.push_back(digit);
            }

            digit = k = 0;

            for(auto i : base_number)
            {
                double multi = pow(double(base_from),(double)k++);
                int d = i * (int) multi;
                digit += d;
            }

            char testing[100];
            sprintf(testing,"%d",digit);
            int length = strlen(testing);

            if(base_to == 10)
            {
                if(length <= 7)
                    cout<<setw(7)<<digit;

                else
                    cout<<setw(7)<<"ERROR";

                cout<<endl;
            }

            else
            {
                string ans = "";

                while(digit > 0)
                {
                    int mod = digit % base_to;
                    st.push(mod);
                    digit /= base_to;
                }

                while(!st.empty())
                {
                    int val = st.top();

                    if(val <= 9)
                    {
                        char ch = val + '0';
                        ans += ch;
                    }

                    else
                    {
                        char ch = mp1[val];
                        ans += ch;
                    }

                    st.pop();
                }

                int flag = 0;
                string result = "";

                for(auto i : ans)
                {
                    if(i != '0')
                        flag = 1;

                    if(flag)
                        result += i;
                }

                if(result.size() <= 7)
                {
                    if(result.size() > 0)
                        cout<<setw(7)<<result;
                    else
                        cout<<setw(7)<<"0";
                }

                else
                    cout<<setw(7)<<"ERROR";

                cout<<endl;
            }
        }
    }

    return 0;
}

