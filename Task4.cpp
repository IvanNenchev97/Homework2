#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
int main()
{
	int matrix[100][100];
	int i,j,k,p,n;
	double result;
	cout<<"Enter number of couples:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"Enter element"<<i<<"."<<j<<":";
			cin>>matrix[i][j];
		}
	}
	k=0;
	while(k<n)
	{
		result=0;
		p=0;
		result=(double)matrix[k][p]/(double)matrix[k][p+1];
		result=result*100;
		cout<<matrix[k][p]<<" "<<"/"<<" "<<matrix[k][p+1]<<" "<<"="<<" "<<floor(result)<<"%"<<endl;
		k++;
	}
	
}
