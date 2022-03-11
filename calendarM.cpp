#include <iostream>
using namespace std;

int main() {
	int day {0}, month{0}, year{0};
	cout << "Enter today's date in format DD MM YYYY:" << endl; 
	cin >> day>> month>>year; 

	if (day > 0 && day < 28);    //this is for the dates 0-27 Feb
	day += 1; 

	if (day == 28) {
		if (month == 2) {  //february
			if ((year % 400 == 0) || (year % 100 != 0 || year % 4 == 0));  //checking the year - leap or not regarding Georgian Calendar
			day = 29;
		}
		else
			day += 1;  //no Feb
	}
	if (day == 29) {  //checking for 29th Feb
		if (month == 2) {
			day = 1;
			month = 3;
		}
		else
			day += 1;
	}
	//have to check now April, June, November, Septmenbr
	if (day == 30) {    
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month || 10 || month == 12);
			day +=1;
		else {
			day = 1;
			month += 1;
		}
	}
	if (day == 31) {
		day = 1;
		if (month == 12) {
			year += 1;
			month = 1;
		}
		else
			month += 1; 
	}
	cout << "Tomorrow's date is:" << endl; 
	if (day < 10) {
		cout << "0" << day << " ";
	}
	else
		cout << day << " "; 
	if (month < 10) {
		cout << "0" << " ";
	}
	else
		cout << month << " ";
	cout << year;

	return 0;
}