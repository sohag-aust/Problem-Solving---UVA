#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int test,sum,temp;
    int zero,one,two,three,four,five,six,seven,eight,nine;
    cin>>test;
    while(test--)
    {
        zero=one=two=three=four=five=six=seven=eight=nine=sum=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            if(i>9)
            {
                temp=i;
                while(temp!=0)
                {
                    sum=temp%10;

                    if(sum==0)
                        zero++;
                    else if(sum==1)
                        one++;
                    else if(sum==2)
                        two++;
                    else if(sum==3)
                        three++;
                    else if(sum==4)
                        four++;
                    else if(sum==5)
                        five++;
                    else if(sum==6)
                        six++;
                    else if(sum==7)
                        seven++;
                    else if(sum==8)
                        eight++;
                    else if(sum==9)
                        nine++;

                    temp/=10;
                }
            }
            else
            {
                if(i==0)
                    zero++;
                else if(i==1)
                    one++;
                else if(i==2)
                    two++;
                else if(i==3)
                    three++;
                else if(i==4)
                    four++;
                else if(i==5)
                    five++;
                else if(i==6)
                    six++;
                else if(i==7)
                    seven++;
                else if(i==8)
                    eight++;
                else if(i==9)
                    nine++;
            }
        }
        cout<<zero<<" "<<one<<" "<<two<<" "<<three<<" "<<four<<" "<<five<<" "<<six<<" "<<seven<<" "<<eight<<" "<<nine<<endl;
    }
    return 0;
}

