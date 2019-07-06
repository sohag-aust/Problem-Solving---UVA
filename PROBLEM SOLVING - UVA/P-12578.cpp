#include<bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        double length;
        cin>>length;

        double width = ((length)*6.0)/10.0;
        double radius = length/5.0;

        double circle_area = PI * radius * radius;
        double rectangle_area = (length * width) - circle_area;

        cout<<setprecision(2)<<fixed<<circle_area;
        cout<<" "<<setprecision(2)<<fixed<<rectangle_area<<endl;
    }

    return 0;
}
