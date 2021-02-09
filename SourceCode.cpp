#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,num1=0,num2=1,num3;
	cout<<" Enter the number of terms you want to display of fibonnaci series \n";
	cin>>x;
	cout<<" The required Fibonnaci series with "<<x<<" terms is : \n";
	for(int i= 0; i<x;i++)
	{
		if(x==1)
		{
			cout<<num1;
		}
	    if (x==2)
		{
			cout<<num1<<" "<<num2;
		}
	    
	    num3 = num1 + num2;
	    num1 = num2;
	    num2 = num3;
	    cout<<num3<<" ";
		
	}
	return 0;
}