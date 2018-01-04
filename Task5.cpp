#include<iostream>
#include<cstring>
using namespace std;
int CheckZeros(int number,int k)
{
	int remainder,i=1,result=0,counter=0,counter1=0;
	while(number!=0)
	{
		remainder=number%2;
		number=number/2;
		result=result+remainder*i;
		i=i*10;
		counter++;
	}
	while(counter>=0)
	{
		if(result%10==0)
		{
			counter1++;
			if(counter1==k)
			{
				break;
			}
			
		}
		else
		{
			counter1=0;
		}
		result=result/10;
		counter--;
	}
	return counter1;

	

}
int main()
{
	int number,k,result;
	cout<<"Enter number:";
	cin>>number;
	cout<<"Enter k:";
	cin>>k;
	result=CheckZeros(number,k);
	if(result>=k)
	{
		cout<<"Number of consecutive zeros is more or equal to k :"<<" "<<result<<endl;
	}
	else
	{
		cout<<"Number of consecutive zeros is less than k"<<endl;
	}
	
	
}
