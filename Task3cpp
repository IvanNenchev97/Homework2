#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
int main()
{
	const int rows=3,cols=3;
	int i,j,k=0,sum=0;
	int array[rows*cols];
	int matrix[rows][cols];
	int matrix1[rows][cols];
	int matrix2[rows][cols];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout<<"Enter element"<<i<<"."<<j<<":";
			cin>>matrix[i][j];
			array[k]=matrix[i][j];
			k++;
		}
	}
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout<<"Enter element"<<i<<"."<<j<<":";
			cin>>matrix1[i][j];
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			sum=sum+matrix1[i][j];
		}
			
	}
	i=0,k=0;
	while(k<rows*cols)
	{
		while(i<rows)
	{
		j=0;
		while(j<rows)
		{
			matrix2[i][j]=array[k]*sum;
			j++;
			k++;
		}
		i++;
	}
	
	}
		for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
		for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout<<matrix1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"The third array is:"<<endl;
		for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout<<matrix2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	

		
	
		
	

	
	
	
}
