
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num,sum;
    int i,j,flag;
    while(cin>>num)
    {
        flag=0;

        if(num==0)
            break;
        else
        {
            for(i=1; i<100; i++)
            {
                for(j=0; j<=i; j++)
                {
                    sum=(i*i*i) - (j*j*j);
                    if(sum==num)
                    {
                        cout<<i<<" "<<j<<endl;
                        flag=1;
                        break;
                    }
                    else
                        continue;
                }
                if(flag==1)
                    break;
            }
            if(flag!=1)
                cout<<"No solution"<<endl;
        }
    }
    return 0;
}
