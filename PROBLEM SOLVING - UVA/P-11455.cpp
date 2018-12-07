#include<iostream>
using namespace std;
int main(void)
{
    long long int a,b,c,d,test;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d && d==a)
            cout<<"square"<<endl;
        else if((a==c && b==d) || (a==b && c==d) || (a==d && b==c))
            cout<<"rectangle"<<endl;
        else if((a<b+c+d) && (b<a+c+d) && (c<a+b+d) && (d<a+b+c))
            cout<<"quadrangle"<<endl;
        else
            cout<<"banana"<<endl;
    }
    return 0;
}

