#include<iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);
main()
{
	int red,white,tulip;
	cout<<"Red Rose: ";
	cin>>red;
	cout<<"White Rose: ";
	cin>>white;
	cout<<"Tulips: ";
	cin>>tulip;
	flowerShop(red,white,tulip);
}
void flowerShop(int redRose,int whiteRose,int tulip)
{
	float prRed=redRose*2.00;
	float prWhite=whiteRose*4.10;
	float prTulip=tulip*2.50;
	float price=prRed+prWhite+prTulip;
	cout<<"Original Price: $"<<price<<endl;
	if(price>200)
	{
	price=price-(price*0.2);
	cout<<"Price after Discount: $"<<price;
	}
	else
	{
	cout<<"No discount applied.";
	}
} 