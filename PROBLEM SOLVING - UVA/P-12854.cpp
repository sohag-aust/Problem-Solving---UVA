
/**
while er moddhe array jodi nite hoi tahole,
while er moddhe age jekono akta array er first index mane ara[0] dibo.
then nicer moto kaj korbo
*/
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int ara1[10];
    int ara2[10],flag;
    int i,j;
    while(cin>>ara1[0])
    {
        flag=1;
        for(i=1;i<5;i++)
            cin>>ara1[i];
        for(j=0;j<5;j++)
            cin>>ara2[j];

        for(i=0,j=0;i<5;i++,j++)
        {
            if(ara1[i]!=ara2[j])
                flag=1;
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            cout<<"N"<<endl;
        else
            cout<<"Y"<<endl;
    }
    return 0;
}
