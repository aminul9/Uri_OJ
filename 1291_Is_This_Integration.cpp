#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("/home/aminul/Documents/input.txt","r",stdin);
        double r;
   while(scanf("%lf", &r) != EOF){
    double  ra=(r*r*M_PI/3)-(0.5*r*r*sin(12*M_PI/18));

    double ra1=(r*r)-((M_PI*r*r/2.0)-ra);
    double ans1=ra1*4.0;
    double ans2=4*((r*r)-(M_PI*r*r/4.0)-(2*ra1));
    double ans3=(r*r)-(ans1+ans2);

    printf("%.3lf %.3lf %.3lf\n",ans3,ans2,ans1);
    }



    return 0;
}
