#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	int i,k,j,p,room,number,result,counter=0;
	cout<<"Enter number:";
	cin>>number;
	cout<<"Enter k:";
	cin>>k;
	if(number%k==0)
	{
		room=number/k;
		for(i=0;i<room;i++)
		{
			cout<<number/room<<" ";
		}
		
	}
	else
	{
		room=number/k+1;
		for(i=number;;i++)
		{
			if(i%k==0)
			{
				result=i-number;
				break;
			}
		}
			
	}
	while(result>room)
	{
		result--;
		counter++;
		if(result%room-1==0)
		{
			break;
		}
	}
	j=result/(room-1);
	cout<<k-counter<<" ";
	for(i=0;i<room-1;i++)
	{
		cout<<k-j<<" ";
	}
	

	
	

}
