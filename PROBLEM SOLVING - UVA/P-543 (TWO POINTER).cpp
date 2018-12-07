/// USING SEIVE AND TWO POINTER

#include<bits/stdc++.h>
using namespace std;

const int maxi=1000005;
int prime[maxi];
map<int,bool>mp;
int cnt=0;

void seive()
{
    for(int i=2; i*i<=maxi; i++)
    {
        if(!mp[i])
        {
            for(int j=2*i; j<=maxi; j+=i)
                mp[j]=true;
        }
    }

    /**for(int i=2; i<maxi; i++)
    {
        if(!mp[i])
        {
            prime[cnt]=i;
            cnt++;
        }
    }*/
}

int main()
{
    seive();
    int n,left,right;

    while(cin>>n)
    {
        if(!n) break;

        left=3;
        right=n;
        int sum=0;

        ///  TWO POINTER START

        while(left<=right)
        {
            sum=left+right;

            if(!mp[left] && !mp[right])
            {
                sum=left+right;

                if(sum==n)
                {
                    cout<<n<<" = "<<left<<" + "<<right<<endl;
                    break;
                }

                else if(sum<n)
                    left++;
                else
                    right--;
            }

            else if(sum<n) left++;
            else right--;
        }
    }

    return 0;
}
