#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dd;

int main()
{
    ll n,row,col;

    while(cin>>n,n)
    {
        ll temp = n;
        dd _sqrt = sqrt((dd)n);
        ll _ceil = (ll)ceil(_sqrt);
        ll val = _ceil * _ceil;

        row = 1, col = (ll)sqrt((dd)val);

        if(val&1) swap(row,col);

        if(val == n)
            cout<<col<<" "<<row<<endl;

        else
        {
            if(val%2 == 0)
            {
                while(row < col)
                {
                    row++;
                    val--;
                    if(val == n) break;
                }

                while(col >= 1 && val != n)
                {
                    col--;
                    val--;
                    if(val == n) break;
                }
            }

            else
            {
                while(col < row)
                {
                    col++;
                    val--;
                    if(val == n) break;
                }

                while(row >= 1 && val != n)
                {
                    row--;
                    val--;
                    if(val == n) break;
                }
            }

            cout<<col<<" "<<row<<endl;
        }
    }

    return 0;
}

