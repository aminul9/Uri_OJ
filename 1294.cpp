#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int main()
{
	freopen("input.txt","r",stdin);
	double length,width;
	while(cin>>length>>width)
	{
				double small=min(length,width);
				double a=12,x=0;
				double b=-(4*length)-(4*width);
				double c=length*width;

					double numeratorSqrtResult = sqrt( (b*b) - (4*a*c) );
					double denominatorResult = 2 * a;
					double addNegativeTo_b = 0 - b;
					double x1 = (addNegativeTo_b + numeratorSqrtResult)/denominatorResult;
					double x2 = (addNegativeTo_b - numeratorSqrtResult)/denominatorResult;
					if( (length-2*x1)*(width-2*x1)*x1>(length-2*x2)*(width-2*x2)*x2)
						x=x1;
					else x=x2;
				cout<<fixed<<setprecision(3)<<x<<" "<<0.000<<" "<<small/2.0<<endl;
				

	}
	return 0;
}