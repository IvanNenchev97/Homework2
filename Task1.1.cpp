#include<iostream>
#include<cstring>
using namespace std;
int CheckNumber(int number)
{
	int x,sum=0;
	x=number;
	while(number!=0)
	{
		sum=sum+number%10;
		number=number/10;
	}
	if(x%sum==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int number,result;
	cout<<"Enter number:";
	cin>>number;
	result=CheckNumber(number);
	if(result==1)
	{
		cout<<"Number divides sum of its digits"<<endl;
	}
	else
	{
		cout<<"Number does not divide sum of its digits"<<endl;
	}
	
	
}
