#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,x1=0,x2=1,x3;
	cout<<" Enter the number of terms you want to display of fibonnaci series \n";
	cin>>x;
	cout<<" The required Fibonnaci series with "<<x<<" terms is : \n";
	for(int i= 0; i<x;i++)
	{
		if(x==1)
		{
			cout<<x1;
		}
	    if (x==2)
		{
			cout<<x1<<" "<<x2;
		}
	    
	    x3 = x1 + x2;
	    x1 = x2;
	    x2 = x3;
	    cout<<x3<<" ";
		
	}
	return 0;
}