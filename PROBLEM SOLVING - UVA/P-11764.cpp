#include<iostream>
using namespace std;
int main(void)
{
    int test,i,j;
    int num;
    int high,low;
    int ara[10000];
    int k=1;
    cin>>test;
    while(test--)
    {
        high=0;
        low=0;
        cin>>num;
        for(int i=0; i<num; i++)
            cin>>ara[i];

        for(i=0,j=i+1; i<num&&j<num; i++,j++)
        {
            if(ara[j]>ara[i])
                high++;
            else if(ara[j]<ara[i])
                low++;
        }
        cout<<"Case "<<k<<": "<<high<<" "<<low<<endl;
        k++;
    }
    return 0;
}

