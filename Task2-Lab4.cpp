#include<iostream>
using namespace std;
void Reverse(string x);
main()
{
	string x;
	cout<<"Enter 'true' or 'false': ";
	cin>>x;
	Reverse(x);
}
void Reverse(string x)
{
	if(x=="true")
	{
	cout<<"false";
	}
	else
	{
	cout<<"true";
	}
}