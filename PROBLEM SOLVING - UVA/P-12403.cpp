#include<bits/stdc++.h>
using namespace std;

string str1,str2;
int test;
long long num,sum;

int main(void)
{
    sum=0;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        cin>>str1;

        if(str1=="donate")
        {
            cin>>num;
            sum+=num;
        }

        if(str1=="report")
            cout<<sum<<endl;

    }
    EXIT_SUCCESS;
}
