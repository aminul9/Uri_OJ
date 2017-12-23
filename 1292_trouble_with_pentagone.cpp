
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double input;
    while(cin>>input){

    cout<<fixed<<setprecision(10)<< input*sin(108*acos(-1)/180)/sin(63*acos(-1)/180)<<endl;
    }

    return 0;
}
