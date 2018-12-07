#include<bits/stdc++.h>
using namespace std;

string str1[1000];
int test,maxi,num,k;
map<string,int>mp;

int main()
{
    cin>>test;
    getchar();

    while(test--)
    {
        static int cnt=1;
        maxi=0;
        k=0;

        for(int i=1; i<=10; i++)
        {
            cin>>str1[k]>>num;
            mp[str1[k]]=num;
            k++;

            if(num>=maxi)
            {
                maxi=num;
            }
        }
        cout<<"Case #"<<cnt<<":"<<endl;

        for(int j=0; j<k; j++)
        {
            if(mp[str1[j]]==maxi)
            {
                cout << str1[j] << endl;
            }
        }

        cnt++;
    }

    EXIT_SUCCESS;
}


/** MAP

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int a , b , in , hi , low;
    cin >> a;

    map<string , int>maping;
    string ar[1000];

    while(a--){

        maping.clear();

        cin >> b;

        int loop_counter = 0;
        hi = 0 , low = 1e9;

        while(b--){

            cin >> ar[loop_counter] >> in ;
            maping[ar[loop_counter]] = in ;
            loop_counter++;

            if(in>hi)hi = in;
            if(low>in)low = in;
        }

        for(int i=0;i<loop_counter;i++){

            if(maping[ar[i]]==hi){cout << ar[i] << " ";break;}
        }

        for(int i=0;i<loop_counter;i++){

            if(maping[ar[i]]==low){cout << ar[i] <<endl;break;}
        }
    }

    return 0;
}
*/

