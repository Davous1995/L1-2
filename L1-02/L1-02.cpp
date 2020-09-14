//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name	: Ch02_L1-2	* 
//*	* 
//* Written by	: David De Alva	* 
//*	* 
//* Purpose	:	 program that reads the original price of the items sold, the percentage of the marked up price, and the sales tax rate and outputs final price* 
//*	* 
//*---------------------------------------------------------------------* 
//* Change Log:	* 
//*	Revision	* 
//*	Date		Changed  Rel Ver Mod Purpose	* 
//* 09/05/20	DDealva 000.000.001 Initial release of program	* 
//*	* 
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 

#include <iostream>
#include <string>

using namespace std;

int main()
{

	cout << "David De Alva\t" << "L1-2\t" << "L1-2.exe" << endl;
	double OrigPrice;
	double MrkUp;
	double SaleTaxR;
	double SaletaxD;
	double SalePrc;
	double FinalPrice;

	cout << "Enter the original price of the item: ";
	cin >> OrigPrice;
	cout << endl;

	cout << "Enter the mark up percentage: ";
	cin >> MrkUp;
	cout << endl;
	
	cout << "Enter Sales tax rate: ";
	cin >> SaleTaxR;
	cout << endl;

	MrkUp = MrkUp / 100;
	SaleTaxR = SaleTaxR / 100;

	SalePrc = (OrigPrice * MrkUp) + OrigPrice;
	SaletaxD = SalePrc * SaleTaxR;
	FinalPrice = SaletaxD + SalePrc;

	MrkUp = MrkUp * 100;
	SaleTaxR = SaleTaxR * 100;

	cout << "The original price = $" << OrigPrice << endl;
	cout << "The price is marked up by " << MrkUp << "%" << endl;
	cout << "The selling price = $" << SalePrc << endl;
	cout << "The sales rate = " << SaleTaxR << "%" << endl;
	cout << "the sales tax = $" << SaletaxD << endl;
	cout << "The final price = $" << FinalPrice << endl;









	char q;
	cout << "\nPress any key to Exit.";
	cin.ignore(2, '\n');
	cin.get(q);

	return 0;


}
