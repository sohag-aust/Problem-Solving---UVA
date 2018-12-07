#include<bits/stdc++.h>
using namespace std;

int digit[100000];
int k;

int main()
{
    int a,b;
    int num,val,cnt,res;
    while(cin>>a>>b)
    {
        cnt=0;
        for(int i=a; i<=b; i++)
        {
            num=i;
            k=0;
            while(num!=0)
            {
                val=num%10;
                digit[k++]=val;
                num/=10;
            }

            if(k>3)
            {
                if((digit[0]!=digit[1]) && (digit[0]!=digit[2]) && (digit[0]!=digit[3]) && (digit[1]!=digit[2]) && (digit[1]!=digit[3]) && (digit[2]!=digit[3]))
                    cnt++;
            }
            else if(k>2)
            {
                if((digit[0]!=digit[1]) && (digit[0]!=digit[2]) && digit[1]!=digit[2])
                    cnt++;
            }
            else if(k>1)
            {
                if(digit[0]!=digit[1])
                    cnt++;
            }
            else
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

