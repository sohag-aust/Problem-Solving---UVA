#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1010],b[1010];
    string sta,stb;

    while(getline(cin,sta))
    {
        getline(cin,stb);

        stringstream ss1(sta);
        stringstream ss2(stb);

        int n,k1=0,k2=0;

        map<int,int>mp1,mp2;
        map<int,bool>mp3,mp4;

        while(ss1>>n)
        {
            mp1[n]++;
            a[k1++] = n;
            mp3[n] = true;
        }

        while(ss2>>n)
        {
            mp2[n]++;
            b[k2++] = n;
            mp4[n] = true;
        }

        sort(a,a+k1);
        sort(b,b+k2);

        for(int i=0; i<k1; i++)
        {
            mp1[b[i]]--;
            mp2[a[i]]--;
        }

        int flag = 1;

        for(int i=0;i<k1;i++)
        {
            if(mp4[a[i]])
            {
                flag = 0;
                break;
            }
        }

        for(int i=0;i<k2;i++)
        {
            if(mp3[b[i]])
            {
                flag = 0;
                break;
            }
        }

        if(flag)
        {
            cout<<"A and B are disjoint"<<endl;
            continue;
        }

        int ok1,ok2;
        ok1 = k1,ok2 = k2;

        for(int i=0; i<k1; i++)
        {
            if(!mp1[b[i]]) ok1--;
            if(!mp2[a[i]]) ok2--;
        }

        if(k1 > k2)
        {
            int i = 0,j = 0;
            int cnt = 0;

            for(; i<k1; i++)
            {
                for(; j<k2; j++)
                {
                    if(a[i] == b[j])
                        cnt++;

                    else
                        break;
                }

                if(cnt  == k2)
                {
                    cout<<"B is a proper subset of A"<<endl;
                    break;
                }
            }

            if(cnt == k2) continue;
        }

        else if(k1 < k2)
        {
            int i = 0,j = 0;
            int cnt = 0;

            for(; i<k2; i++)
            {
                for(; j<k1; j++)
                {
                    if(a[j] == b[i])
                        cnt++;

                    else
                        break;
                }

                if(cnt  == k1)
                {
                    cout<<"A is a proper subset of B"<<endl;
                    break;
                }
            }

            if(cnt == k1) continue;
        }

        else
        {
            if(ok1 == 0 && ok2 == 0) {cout<<"A equals B"<<endl;continue;}

            int i = 0,j = 0;
            int cnt = 0;

            for(; i<k2; i++)
            {
                for(; j<k1; j++)
                {
                    if(a[i] == b[j])
                        cnt++;

                    else
                        break;
                }

                if(cnt  == k1)
                {
                    cout<<"B is a proper subset of A"<<endl;
                    break;
                }
            }

            if(cnt == k1) continue;

            i = 0,j = 0;
            cnt = 0;
            int k = 0;

            for(; i<k2;)
            {
                for(; j<k1;)
                {
                    if(a[i] == b[j])
                        i++,cnt++;

                    else j++;

                    if(cnt == k1)
                    {
                        cout<<"A is a proper subset of B"<<endl;
                        break;
                    }
                }

                k++;
                if(k>k1*k2) break;
            }

            if(cnt == k1) continue;
        }

        cout<<"I'm confused!"<<endl;

        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        mp1.clear(),mp2.clear();
    }

    return 0;
}


