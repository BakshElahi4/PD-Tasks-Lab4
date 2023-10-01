#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}
void pet(int holidays)
{
	int workingDays=365-holidays;
	int timeForGames=(workingDays*63)+(holidays*127);
	int difference=30000-timeForGames;
	int hours=(difference/60);
	int minutes=difference-(hours*60);
	if(difference>0)
	{
	cout<<"Tom sleeps well"<<endl;
	cout<<hours<<" hours and "<<minutes<<" minutes less for play";
	}
	else
	{
	hours=(-1)*(hours);
	minutes=(-1)*(minutes);
	cout<<"Tom will run away"<<endl;
	cout<<hours<<" hours and "<<minutes<<" minutes for play";
	}
}
	
	
	
	