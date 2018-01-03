#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;

struct cordinates{
		int x,y;
};


			
 
int main()
{
	int n,m;
	//freopen("input.txt","r",stdin);


	while ( scanf("%d%d",&n,&m)==2)
	{
			//cout<<n<<" "<<m<<endl;
		cordinates black[105],white[105];

		for(int i=0;i<n;i++)
		{
			cin>>black[i].x>>black[i].y;
		}
		
		for(int i=0;i<m;i++)
			cin>>white[i].x>>white[i].y;
		

		long long ans=0;
		for(int i=0; i<n-2; i++)
			for(int j=i+1; j<n-1; j++)
				for (int k=j+1; k<n; k++)
				{
					int temp=0,a,b,c;
					for(int l=0;l<m;l++)
					{
						a= black[i].x * (black[j].y- white[l].y)+ black[j].x *(white[l].y-black[i].y)+ white[l].x*(black[i].y-black[j].y);	
						b= black[j].x * (black[k].y- white[l].y)+ black[k].x *(white[l].y-black[j].y)+ white[l].x*(black[j].y-black[k].y);
						c= black[k].x* (black[i].y- white[l].y)+ black[i].x *(white[l].y-black[k].y)+ white[l].x*(black[k].y-black[i].y);

						//<<a<<" "<<b<< " "<<c<< " ";
						if((a>0 && b>0 && c>0 ) || (a<0 && b<0 && c<0))
							{temp++;}
					}	
						//cout<< i<< " "<<j<<" "<<k<<" temp  "<<temp <<endl;
						ans+=temp*temp;
					//cout<<temp<<endl;

				}
				cout<<ans<<endl;
	}
			
		return 0;
}
