#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int number;
	cout<<"Enter number of the Sequence to print:";
	cin>>number;
	int a,b,c,i;
	a=0;
	b=1;
	for(i=0;i<=number;i++)
	{
		if(i==1)
		{
			continue;
		}
		if(i==2)
		{
			continue;
		}
		c=a+b;
		a=b;
		b=c;
	
	}
	cout<<c<<endl;
	


}
