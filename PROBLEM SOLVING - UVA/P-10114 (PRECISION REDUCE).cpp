#include<bits/stdc++.h>
using namespace std;

#define mul 1000000

int main()
{
    int month,test;
    double down,loan;

    while(cin>>month>>down>>loan>>test)
    {
        if(month < 0) break;
        double price = down + loan;
        map<int,double>mp;

        while(test--)
        {
            int m;
            double percent;
            cin>>m>>percent;
            mp[m] = percent;
        }

        double init_percent = mp[0];
        double owes,car_price;
        int i = 0;

        owes = loan;
        car_price = price - (price * init_percent);
        down = (loan)/(double)month;

        if((owes * mul) < (car_price * mul)) goto print;

        for(i=1;i<=month;i++)
        {
            if(mp[i]) init_percent = mp[i];
            owes -= down;
            car_price -= car_price * init_percent;

            if((owes * mul) < (car_price * mul)) goto print;
        }

        print:
        cout<<i<<((i == 1) ? " month":" months")<<endl;
    }

    return 0;
}
