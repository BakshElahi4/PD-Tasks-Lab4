#include<iostream>
using namespace std;
void discount(float amount,string country);
main()
{
	string country;
	float amount;
	cout<<"Enter the country's name: ";
	cin>>country;
	cout<<"Enter the ticket price in dollars: $";
	cin>>amount;
	discount(amount,country);
}
void discount(float amount,string country)
{
	float discoun;
	if(country == "Pakistan")
	{
	discoun=(amount)*0.05;
	amount=amount-discoun;
	cout<<"Final ticket price after discount: $"<<amount;
	}
	if(country == "Ireland")
	{
	discoun=(amount)*0.10;
	amount=amount-discoun;
	cout<<"Final ticket price after discount: $"<<amount;
	}
	if(country == "India")
	{
	discoun=(amount)*0.20;
	amount=amount-discoun;
	cout<<"Final ticket price after discount: $"<<amount;
	}
	if(country == "England")
	{
	discoun=(amount)*0.30;
	amount=amount-discoun;
	cout<<"Final ticket price after discount: $"<<amount;
	}
	if(country == "Canada")
	{
	discoun=(amount)*0.45;
	amount=amount-discoun;
	cout<<"Final ticket price after discount: $"<<amount;
	}
}