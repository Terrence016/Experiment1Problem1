#include <iomanip>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{

	double ticketprice;
	cout << "Box cost: ";
	cout << "$250 ";
	cout <<  "     Number of Tickets sold:";
	cin >> ticketprice;
	cout << "Total Sale:" << setprecision(2) << fixed << 250 * ticketprice <<endl;

	double ticketprice1;
	cout << "Sideline cost: ";
	cout << "$100 ";
	cout <<  "     Number of Tickets sold:";
	cin >> ticketprice1;
	cout << "Total Sale:" << setprecision(2) << fixed << 100 * ticketprice1 <<endl;

	double ticketprice2;
	cout << "Premium cost: ";
	cout << "$50 ";
	cout <<  "     Number of Tickets sold:";
	cin >> ticketprice2;
	cout << "Total Sale:" << setprecision(2) << fixed << 50 * ticketprice2 <<endl;

	double ticketprice3;
	cout << "General Admission cost: ";
	cout << "$25 ";
	cout <<  "     Number of Tickets sold:";
	cin >> ticketprice3;
	cout << "Total Sale:" << setprecision(2) << fixed << 25 * ticketprice3 <<endl;

	cout << "Overall Money Accumulated: $"  << ticketprice * ticketprice1 * ticketprice2 * ticketprice3 << endl;
	
	_getch();
	return 0;
}