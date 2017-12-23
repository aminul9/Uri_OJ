#include <iostream>
#include<iomanip>
#include <fstream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n;
    //freopen("input.txt","r",stdin);
    while(cin>>n && n)
    {
        double x[10005],y[10005];
        for(int i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }

        double ans=INT_MAX;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                double temp=sqrt(((x[i]-x[j])*(x[i]-x[j]) )+((y[i]-y[j])*(y[i]-y[j])));
                if(ans>temp)ans=temp;

            }
        }
        if(ans<10000)
            cout<<fixed<<setprecision(4)<<ans<<endl;
        else
            cout<<"INFINITY"<<endl;

    }


    return 0;
}
