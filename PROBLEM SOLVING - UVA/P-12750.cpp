#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char ch[100000];
    int cnt,res;
    int test;
    int num,k=0;
    int l,d,w;
    cin>>test;
    getchar();

    while(test--)
    {
        l=w=d=cnt=res=0;
        cin>>num;

        for(int i=0; i<num; i++)
        {
            getchar();
            scanf("%c",&ch[i]);
        }

        for(int i=0; i<num; i++)
        {
            if(ch[i]=='L')
            {
                l++;
                cnt++;
                res++;
                if(cnt==3)
                    break;
            }
            else if(ch[i]=='W')
            {
                w++;
                cnt=0;
                res++;
            }
            else if(ch[i]=='D')
            {
                d++;
                cnt++;
                res++;
                if(cnt==3)
                    break;
            }
        }
        if(cnt<3)
            cout<<"Case "<<++k<<": Yay! Mighty Rafa persists!"<<endl;
        else
            cout<<"Case "<<++k<<": "<<res<<endl;
    }
    return 0;
}

