#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node,edge;
    bool blank=false;
    while(cin>>node>>edge)
    {
        static int kase=0;
        string str[30];
        vector<int>v;
        string keyword,s,s1,st;
        map<string,bool>visit;
        map<string,int>mp;

        for(int i=0;i<node;i++)
        {
            cin>>keyword;
            visit[keyword]=true;
        }

        cin.ignore();

        for(int i=0;i<edge;i++)
        {
            int cnt=0;
            getline(cin,s);
            str[i]=s;
            s1=s;
            for(int j=0;j<s.size();j++)
            {
                if(isalpha(s[j]))
                    s1[j]=(char)tolower(s[j]);
                else
                    s1[j]=' ';
            }

            stringstream ss(s1);
            while(ss>>st)
            {
                if(visit[st])
                    cnt++;
            }

            mp[s]=cnt;
            v.push_back(cnt);
        }

        cout<<"Excuse Set #"<<++kase<<endl;

        sort(v.begin(),v.end());
        int maxi=v[v.size()-1];

        for(int i=0;i<edge;i++)
        {
            if(mp[str[i]]==maxi)
            cout<<str[i]<<endl;
        }
        cout<<endl;
    }
    return 0;
}


/**

5 3
dog
ate
homework
canary
died
My dog ate my homework.
Can you believe my dog died after eating my canary... AND MY HOMEWORK?
This excuse is so good that it contain 0 keywords.

6 5
superhighway
crazy
thermonuclear
bedroom
war
building
I am having a superhighway built in my bedroom.
I am actually crazy.
1234567890.....,,,,,0987654321?????!!!!!!
There was a thermonuclear war!
I ate my dog, my canary, and my homework ... note outdated keywords?

1 2
dog
dog"dog
dog

5 5
judge
valladolid
acm
online
kontest
the valladolid2002judge is always right!
online contest ate my peanut with acm's kontest9 thinking
acma 9onlinea valladolid judge painful floating kontest errors
acm!acm&acmbacmacm?
a man is not dog but BUBBLESORT is GOD
1 2
dog
dog?dog
dog
1 2
dog
dog0dog
dog
1 2
a
ab
a
1 2
a
aa
a a
1 2
puma
56789pUMa01234
There are no big cat names in this sentence so should it be printed?
5 3
dog
ate
homework
canary
died
My dog ate my homework.
Can you believe my dog died after eating my canary... AND MY HOMEWORK?
This excuse is so good that it contain 0 keywords.
6 5
superhighway
crazy
thermonuclear
bedroom
war
building
I am having a superhighway built in my bedroom.
I am actually crazy.
1234567890.....,,,,,0987654321?????!!!!!!
There was a thermonuclear war!
I ate my dog, my canary, and my homework ... note outdated keywords?
1 2
dog
DoG
This excuse is so good that it contain 0 keywords.
2 2
dog
cat
dog dog dog
dog cat
1 2
dog
DoG
This excuse is so good that it contain 0 keywords.
2 2
dog
cat
dog dog dog
dog cat
2 2
a
a
a a
a a a
1 2
dog
dog"dog
dog
1 3
aa
dfsdf asf sdfs d
sdf sdfsdf sdf
sd fsdfsdfs
5 3
dog
ate
homework
canary
died
My dog ate my homework.
Can you believe my dog died after eating my canary... AND MY HOMEWORK?
This excuse is so good that it contain 0 keywords.
6 5
superhighway
crazy
thermonuclear
bedroom
war
building
I am having a superhighway built in my bedroom.
I am actually crazy.
1234567890.....,,,,,0987654321?????!!!!!!
There was a thermonuclear war!
I ate my dog, my canary, and my homework ... note outdated keywords?


*/

