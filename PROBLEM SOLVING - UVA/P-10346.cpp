#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int temp = n;

        while(n >= k)
        {
            temp += n/k;
            n = n/k + n%k;
        }

        cout<<temp<<endl;
    }

    return 0;
}
