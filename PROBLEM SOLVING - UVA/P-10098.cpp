#include<bits/stdc++.h>
using namespace std;

string str;
int test;

int main()
{
    cin>>test;
    cin.ignore();

    while(test--)
    {
        cin>>str;

        sort(str.begin(),str.begin()+str.size());

        do
        {
            cout<<str<<endl;
        }
        while(next_permutation(str.begin(),str.begin()+str.size()));

        cout<<endl;
    }

    EXIT_SUCCESS;
}
