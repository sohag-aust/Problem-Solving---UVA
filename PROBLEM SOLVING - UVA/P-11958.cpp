#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,cs=0;
    cin>>test;

    while(test--)
    {
        int mini = 1e9;
        int k,koita_baje1,koita_baje2;

        cin>>k;
        scanf("%d:%d",&koita_baje1,&koita_baje2);

        int mot_somoi = (koita_baje1*60)+koita_baje2;

        while(k--)
        {
            int train_asbe1,train_asbe2;
            int vromon_somoi;

            scanf("%d:%d",&train_asbe1,&train_asbe2);
            cin>>vromon_somoi;

            int kokhon_asbe = (train_asbe1*60)+train_asbe2;

            if(kokhon_asbe<mot_somoi)
                kokhon_asbe += 1440;

            int somoi_lagbe = abs(mot_somoi-kokhon_asbe) + vromon_somoi;

            mini = min(mini,somoi_lagbe);
        }

        cout<<"Case "<<++cs<<": "<<mini<<endl;
    }

    return 0;
}

