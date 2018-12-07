#include<bits/stdc++.h>
using namespace std;

map<int,int>tarikh;
map<int,string>day;
map<pair<int,int>,int>date;

void init()
{
    tarikh[1] = tarikh[3] = tarikh[5] = tarikh[7] = tarikh[8] = tarikh[10] = tarikh[12] = 31;
    tarikh[4] = tarikh[6] = tarikh[9] = tarikh[11] = 30;
    tarikh[2] = 28;

    day[1] = "Monday";
    day[2] = "Tuesday";
    day[3] = "Wednesday";
    day[4] = "Thursday";
    day[5] = "Friday";
    day[6] = "Saturday";
    day[7] = "Sunday";

    date[ {4,4}] = 1;

    int i,j,k;

    i = 4,j = 4,k = 1;

    while(i >= 1) /// ager dates
    {
        j--,k--;

        if(k == 0) k = 7;
        if(j == 0) i--,j = tarikh[i];

        date[ {i,j}] = k;

        if(i == 1 && j == 1) break;
    }

    i = 4,j = 4,k = 1;

    while(i <= 12) /// porer dates
    {
        j++,k++;

        date[ {i,j}] = k;

        if(k >= 7) k = 0;

        if(j == 30)
        {
            if(tarikh[i] == j)
            {
                i++;
                j = 0;
            }
        }

        else if(j == 31)
        {
            i++;
            j = 0;
        }
    }
}

int main()
{
    init();

    int test;
    cin>>test;

    while(test--)
    {
        int m,d;
        cin>>m>>d;
        cout<<day[date[ {m,d}]]<<endl;
    }

    return 0;
}

