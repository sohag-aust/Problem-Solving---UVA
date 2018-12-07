#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,u,d,f;
    double init,slide,climb,percent;
    int res,cnt,flag;

    while(cin>>h>>u>>d>>f)
    {
        if(!h && !u && !d && !f)
            break;

        flag=1;
        res=cnt=init=0;
        percent=f/100;
        percent=(u*percent);

        while(1)
        {
            res++;
            cnt++;

            if(cnt>1)
            {
                init=slide;

                if(u>0)
                    u-=percent;

                climb=init+u;

                if(climb<0)
                {
                    flag=0;
                    break;
                }


                if(climb>h)
                    break;

                slide=climb-d;

                if(slide<0)
                {
                    flag=0;
                    break;
                }
            }

            else
            {
                climb=init+u;

                if(climb<0)
                {
                    flag=0;
                    break;
                }

                if(climb>h)
                    break;

                slide=climb-d;

                if(slide<0)
                {
                    flag=0;
                    break;
                }
            }
        }

        if(!flag)
            cout<<"failure on day "<<res<<endl;
        else
            cout<<"success on day "<<res<<endl;
    }

    return 0;
}
