#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num;
    int i,j,k,l;
    for(num=6;num<=200;num++)
    {
        int cnt=0;
        int res=num*num*num;

        for(i=2; i<=200; i++)
        {
            for(j=2; j<=200; j++)
            {
                for(k=2; k<=200; k++)
                {
                    int res1=(i*i*i)+(j*j*j)+(k*k*k);
                    if(res1==res)
                    {
                        if(i<j && i<k && j<k)
                        {
                            cout<<"Cube = "<<num<<", ";
                            cout<<"Triple = ("<<i<<","<<j<<","<<k<<")"<<endl;
                            break;
                        }
                    }
                }
            }
        }
    }

    return 0;
}

