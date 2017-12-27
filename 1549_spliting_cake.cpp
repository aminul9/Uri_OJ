#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);

    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++)
    {
        double N,L,b,B,h;
        cin>>N>>L>>b>>B>>h;
        double Sr=(B-b)/h;
        double volume=L/N;
        double low=0,high=h,mid=0;
        for(int i=1;i<=200;i++)
        {
            mid=(low+high)/2.0;

            double volume1=acos(-1)*mid *( (b*b) + (b+Sr*mid)*(b+Sr*mid)  + (b* (b+Sr*mid) ))/3.0;
            //cout<<mid<<endl;

           if(volume<volume1)
            {
                high=mid;
            }
            else if(volume>volume1)
            {
                low=mid;
            }
        }
        cout<<fixed<<setprecision(2)<<mid<<endl;




    }
    return 0;
}
