

/// colourful flowers:

/// link::  http://www.nabla.hr/GE-AppTrigonomB3.htm
/// link:: http://www.questtosolve.com/browse.php?pid=11152

/** principles are given below::

*** To find triangle area::
    1) find perimeter:: s=(a+b+c)/2;
    2) find area:: sqrt(s*(s-a)*(s-b)*(s-c);

*** To find circle area inside of triangle::
    1) firstly find radius:: triangle_area/triangle_perimeter;
    2) then area:: pi*radius*radius;

*** To find circle area outside of triangle::
    1) firstly find radius:: (a*b*c)/4*triangle_area;
    2) secondly find area:: pi*radius*radius;
    3) thirdly its covered area:: area-triangle_area;

*/

#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main()
{
    double a,b,c;
    double s,triangle;
    double red_r,yellow_r;
    double red,blue,sunflower,yellow;

    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2.0;
        triangle=sqrt(s*(s-a)*(s-b)*(s-c));
        red_r=triangle/s;
        yellow_r=(a*b*c)/(4*triangle);

        red=pi*(red_r*red_r); /// red area
        blue=triangle-red;   /// violet area
        sunflower=pi*(yellow_r*yellow_r);
        yellow=sunflower-triangle; /// yellow area

        printf("%.4lf %.4lf %.4lf\n",yellow,blue,red);
    }
    return 0;
}
