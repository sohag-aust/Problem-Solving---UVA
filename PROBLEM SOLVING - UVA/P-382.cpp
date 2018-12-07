
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>num)
    {
        if(num==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        int sum=0;
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
                sum+=i;
        }
        if(sum==num)
        {
            printf("%5d",num);
            cout<<"  PERFECT"<<endl;
        }
        else if(sum<num)
        {
            printf("%5d",num);
            cout<<"  DEFICIENT"<<endl;
        }
        else if(sum>num)
        {
            printf("%5d",num);
            cout<<"  ABUNDANT"<<endl;
        }
    }
    return 0;
}
