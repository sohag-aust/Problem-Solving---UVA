/// TWO POINTER..

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        cin.ignore();
        int mini=1e7;
        int ara[n+2];
        for(int i=0;i<n;i++)
            cin>>ara[i];

        sort(ara,ara+n);

        int exp;
        cin>>exp;
        int left,right;

        left=0;
        right=n-1;

        int sum=0,res1=0,res2=0;
        while(left<=right)
        {
            sum=ara[left]+ara[right];

            if(sum==exp)
            {
                int diff=abs(ara[left]-ara[right]);

                if(diff<mini)
                {
                    mini=diff;
                    res1=left;
                    res2=right;
                }
                left++;
                right--;
            }

            else if(sum<exp)
                left++;

            else
                right--;
        }

        cout<<"Peter should buy books whose prices are "<<ara[res1]<<" and "<<ara[res2]<<".\n\n";
    }
    return 0;
}
