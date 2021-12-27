#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,i,age[100];
	double amt[100],sum=0,sum2=0;
	cout<<"\n\t---------------------------------------------------------\n";
	cout<<"\t        T I C K E T    B OO K I N G    S Y S T E M\n";
	cout<<"\t---------------------------------------------------------\n";
	cout<<"\nHow many Members in your family?\n";
	cin>>a;
	cout<<"Enter the Age of Your "<<a<<" Family Members:\n";
	for(i=0;i<a;i++)
	{
		cin>>age[i];
	}
	cout<<"\n=====================================\n";
	cout<<"\nThe rates for flight tickets for an individual .\n";
	for(i=0;i<a;i++)
	{
		if(age[i]>=10 && age[i]<15)
		{
			cout<<"\n\n10-15(age) wins 10% discount.";
			amt[i]=100-(100*10/100);
			cout<<"\nRates for flight  for "<<age[i]<<" years member is: Rs "<<amt[i];
		}
		else if(age[i]>=15 && age[i]<=20)
		{
			cout<<"\n\n15-20(age) wins 5% discount.";
			amt[i]=100-(100*5/100);
			cout<<"\nRates for flight for "<<age[i]<<" years member is: Rs "<<amt[i];
		}
		else if(age[i]>20)
		{
			cout<<"\n\nAbove 20 Rates is fix.";
			amt[i]=100;
			cout<<"\nRates for flight for "<<age[i]<<" years member is: Rs "<<amt[i];
		}
		else
		{
			cout<<"\n\n"<<age[i]<<" years are allowed because Below 10 Children are allowed to sit on flight with  free cost \n";
			amt[i]=0;
		}
		sum+=amt[i];
	}
	cout<<"\n\n=====================================\n";
	cout<<"\nTotal Price of Ticket is: "<<sum;
	return 0;
}
