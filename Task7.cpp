#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i,x,y,k,sum,counter;
	for(i=1;;i++)
	{
		sum=0;
		counter=0;
		x=i*18;
		y=x;
		while(x!=0)
		{
			x=x/10;
			counter++;
		}
		k=y%10;
		while(y!=0)
		{
			if(y%10==k)
			{
				sum++;
			}
			y=y/10;
		}
		if(sum==counter)
		{
			cout<<i<<endl;
			break;
		}
		
	
	}
		
	
		
		
		


	
}
