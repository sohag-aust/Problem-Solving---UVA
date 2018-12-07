#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num;
    while(cin>>num)
    {
        if(num==0)
            break;
        if(num<=100)
            cout<<"f91("<<num<<") = "<<"91"<<endl;
        else if(num>100)
            cout<<"f91("<<num<<") = "<<num-10<<endl;
    }
    return 0;
}

