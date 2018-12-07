#include<bits/stdc++.h>
using namespace std;
int ncr1(int a,int b)
{
    double digit;
    digit=0;
    for(int i=b+1; i<=a; i++)
    {
        digit+=log10(i)-log10((a-i)+1);
    }
    return digit;
}

int ncr2(int a,int b,int c)
{
    double digit;
    digit=0;

    for(int i=c+1; i<=a; i++)
    {
        digit+=log10(i)-log10((a-i)+1);
    }


    return digit;
}

int main()
{
    int n,k,res;
    double sum;
    while(cin>>n>>k)
    {
        sum=0;
        res=n-k;
        if(k>res)
        {
            sum=ncr1(n,k);
        }
        else
        {
            sum=ncr2(n,k,res);
        }
        cout<<sum+1<<endl;
    }
    return 0;
}

