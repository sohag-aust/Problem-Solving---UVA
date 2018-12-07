#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m;
    char ch;

    while(cin>>h>>ch>>m)
    {
        if(h == 0) break;

        int ghonta = abs(12-h);
        ghonta *= 30;

        int minit = abs(0-m);
        double minit1 = (double)minit * (double)5.5;

        double res = (double)ghonta + minit1;

        while(true)
        {
            res = fabs((double)360 - res);
            if(res <= (double)180) break;
        }

        printf("%.3lf\n",res);
    }

    return 0;
}

