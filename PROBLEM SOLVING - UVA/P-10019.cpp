#include<bits/stdc++.h>
using namespace std;

int decimal(int num);
int hexadecimal(int num);

int main()
{
    int test,num,val1,val2;

    cin>>test;

    while(test--)
    {
        cin>>num;

        val1=decimal(num);
        val2=hexadecimal(num);

        cout<<val1<<" "<<val2<<endl;
    }

    return 0;
}

int decimal(int num)
{
    int a[1000];
    int k=0,cnt1=0;

    while(num>0)
    {
        a[k++]=num%2;
        num/=2;
    }

    for(int j=k-1; j>=0; j--)
    {
        if(a[j])
            cnt1++;
    }

    return cnt1;
}

int hexadecimal(int num)
{
    int b[1000];
    int k1=0,i,cnt2=0;

    while(num>0)
    {
        b[k1++]=num%10;
        num/=10;
    }

    i=k1-1;

    while(i>=0)
    {
        switch(b[i])
        {
        case 1:
            cnt2+=1;
            break;

        case 2:
            cnt2+=1;
            break;

        case 3:
            cnt2+=2;
            break;

        case 4:
            cnt2+=1;
            break;

        case 5:
            cnt2+=2;
            break;

        case 6:
            cnt2+=2;
            break;

        case 7:
            cnt2+=3;
            break;

        case 8:
            cnt2+=1;
            break;

        case 9:
            cnt2+=2;
            break;
        }

        i--;
    }

    return cnt2;
}

