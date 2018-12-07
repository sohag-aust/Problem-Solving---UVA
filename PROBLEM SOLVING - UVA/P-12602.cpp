
/**
jodi string akta nirdisto size er hoi then oikhane extra kicu keyword cai,,
and then oitar por jodi kono songkha input dite hoi then scanf er vitor ,,
%s er age oi nirdisto size er songkha mane nirdisto songkha jodi 32 hoi then,,
%s er bodole %3s dibo and then nirdisto keyword dibo jemon ekhane - caice tai,,
%3s er sathe lagano obosthai - cinho dibo then int value jeta cabe seta dibo..
*/

#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char str[100];
    char ch;
    int test,num;
    cin>>test;
    getchar();
    int num1,num2,num3;
    int res,res1;
    while(test--)
    {
        scanf("%3s-%d",&str,&num);
        int len=strlen(str);

        for(int i=0; i<len; i++)
        {
            if(i==0)
                num1=(str[i]-65)*26*26;
            else if(i==1)
                num2=(str[i]-65)*26;
            else if(i==2)
                num3=(str[i]-65)*1;
        }
        res=num1+num2+num3;
        res1=abs(res-num);
        if(res1<=100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice"<<endl;
    }
    return 0;
}
