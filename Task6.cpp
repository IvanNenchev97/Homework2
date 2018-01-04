#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	int i,m,n,counter=0;
	bool result;
	for(i=1;;i++)
	{
		m=2,n=1;
		result=true;
		while(m<=9 && n<=8)
		{
			if(i%m!=n)
			{
				result=false;
				
			}
			m++;
			n++;
		}
		if(result==true)
		{
			cout<<i<<" ";
			counter++;
		}
		if(counter==4)
		{
			break;
		}
		
	}

	
	


}
