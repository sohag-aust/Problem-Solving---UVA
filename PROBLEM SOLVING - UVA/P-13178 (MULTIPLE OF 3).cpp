#include<bits/stdc++.h>
using namespace std;

typedef long long l;

int main()
{
    l t,n;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);
        l sum = n * (n + 1);
        sum /= 2;

        if(sum % 3 == 0) puts("YES");
        else puts("NO");
    }

    return 0;
}

