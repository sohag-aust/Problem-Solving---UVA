#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    int a1,b1,c1;
    int a2,b2,c2;
    cin>>test;
    int k=0;
    while(test--)
    {
        scanf("%d/%d/%d",&a1,&b1,&c1);
        scanf("%d/%d/%d",&a2,&b2,&c2);
        int res=c1-c2;
        if(b2>b1)
            res--;
        if(b2==b1)
        {
            if(a2>a1)
                res--;
        }
        if(res<0)
            cout<<"Case #"<<++k<<": Invalid birth date"<<endl;
        else if(res>130)
            cout<<"Case #"<<++k<<": Check birth date"<<endl;
        else
            cout<<"Case #"<<++k<<": "<<res<<endl;
    }
    return 0;
}

