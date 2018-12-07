
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int num;
    double sum,sum1;
    cin>>test;
    while(test--)
    {
        sum=0;
        cin>>num;
        for(int i=num; i>=1; i--)
            sum+=log10(i);
       // double sum1=floor(sum);
        cout<<(int)sum+1<<endl;
    }
    return 0;
}

