#include "Data.h"
#include <iostream>
using namespace std;

Data::Data() {
	day = 0;
	month = 0;
	year = 0;
}

Data::Data(int d, int m, int y) {   
	day = d; 
	month = m;
	year = y;
}

Data& Data::operator++() {
	++day;
	return *this;
}

Data& Data::operator--() {
	--day;
	return *this;
}

Data Data::operator++(int) {
	Data temp = *this;
	++day;
	return temp;
}

Data Data::operator--(int) {
	Data temp = *this;
	--day;
	return temp;
}

Data Data::operator+(int num)  {
	cout << "Enter amount: ";
	cin >> num;

	Data temp = *this;
	day += num;

	if (day > 31) {
		month++;
		day -= 31;
	}

	return temp;
}

Data Data::operator-(int num) {
	cout << "Enter amount: ";
	cin >> num;

	Data temp = *this;
	day -= num;

	if (day < 0) {
		month--;
		day += 31;
	}

	return temp;
}

Data Data::operator-() {
	int d_day;
	int m_month;
	int y_year;
	cout << "Enter new data: ";
	cin >> d_day >> m_month >> y_year;

	Data temp = *this;
	day -= d_day;
	month -= m_month;
	year -= y_year;
	
	return temp;
}

Data Data::operator+=(int num) {
	cout << "Enter amount: ";
	cin >> num;

	Data temp = *this;
	day =+ num;

	return temp;
}

Data Data::operator-=(int num) {
	cout << "Enter amount: ";
	cin >> num;

	Data temp = *this;
	day -= num;

	return temp;
}

Data Data::operator<(int) {
	int d_day;
	int m_month;
	int y_year;
	cout << "Enter new data: ";
	cin >> d_day >> m_month >> y_year;

	Data temp = *this;

	if (year < y_year) {
		cout << day << "." << month << "." << year << " < "
		<< d_day << "." << m_month << "." << y_year << endl;
	}
	else if (year == y_year && month < m_month) {
		cout << day << "." << month << "." << year << " < "
		<< d_day << "." << m_month << "." << y_year << endl;
	}
	else if (year == y_year && month == m_month && day < d_day) {
		cout << day << "." << month << "." << year << " < "
		<< d_day << "." << m_month << "." << y_year << endl;
	}
	else {
		cout << day << "." << month << "." << year << " > "
		<< d_day << "." << m_month << "." << y_year << endl;
	}

	return temp;
}

Data Data::operator>(int) {
	int d_day;
	int m_month;
	int y_year;
	cout << "Enter new data: ";
	cin >> d_day >> m_month >> y_year;

	Data temp = *this;

	if (year > y_year) {
		cout << day << "." << month << "." << year << " > "
		<< d_day << "." << m_month << "." << y_year << endl;
	}
	else if (year == y_year && month > m_month) {
		cout << day << "." << month << "." << year << " > "
		<< d_day << "." << m_month << "." << y_year << endl;
	}
	else if (year == y_year && month == m_month && day > d_day) {
		cout << day << "." << month << "." << year << " > "
		<< d_day << "." << m_month << "." << y_year << endl;
	}
	else {
		cout << day << "." << month << "." << year << " < "
		<< d_day << "." << m_month << "." << y_year << endl;
	}

	return temp;
}

Data Data::operator<=(int) {
	int d_day;
	int m_month;
	int y_year;
	cout << "Enter new data: ";
	cin >> d_day >> m_month >> y_year;

	Data temp = *this;

	if (year <= y_year) {
		cout << day << "." << month << "." << year << " <= "
			<< d_day << "." << m_month << "." << y_year << endl;
	}
	else if (year == y_year && month <= m_month) {
		cout << day << "." << month << "." << year << " <= "
			<< d_day << "." << m_month << "." << y_year << endl;
	}
	else if (year == y_year && month == m_month && day <= d_day) {
		cout << day << "." << month << "." << year << " <= "
			<< d_day << "." << m_month << "." << y_year << endl;
	}
	else {
		cout << day << "." << month << "." << year << " >= "
			<< d_day << "." << m_month << "." << y_year << endl;
	}

	return temp;
}

Data Data::operator>=(int) {
	int d_day;
	int m_month;
	int y_year;
	cout << "Enter new data: ";
	cin >> d_day >> m_month >> y_year;

	Data temp = *this;

	if (year >= y_year) {
		cout << day << "." << month << "." << year << " >= "
			<< d_day << "." << m_month << "." << y_year << endl;
	}
	else if (year == y_year && month >= m_month) {
		cout << day << "." << month << "." << year << " >= "
			<< d_day << "." << m_month << "." << y_year << endl;
	}
	else if (year == y_year && month == m_month && day >= d_day) {
		cout << day << "." << month << "." << year << " >= "
			<< d_day << "." << m_month << "." << y_year << endl;
	}
	else {
		cout << day << "." << month << "." << year << " <= "
			<< d_day << "." << m_month << "." << y_year << endl;
	}

	return temp;
}

Data Data::operator==(int) {
	int d_day;
	int m_month;
	int y_year;
	cout << "Enter new data: ";
	cin >> d_day >> m_month >> y_year;

	Data temp = *this;

	if (year == y_year && month == m_month && day == d_day) {
		cout << day << "." << month << "." << year << " == "
		<< d_day << "." << m_month << "." << y_year << endl;
	}
	else {
		cout << day << "." << month << "." << year << " != "
		<< d_day << "." << m_month << "." << y_year << endl;
	}

	return temp;
}

Data Data::operator!=(int) {
	int d_day;
	int m_month;
	int y_year;
	cout << "Enter new data: ";
	cin >> d_day >> m_month >> y_year;

	Data temp = *this;

	if (year != y_year || month != m_month || day != d_day) {
		cout << day << "." << month << "." << year << " != "
			<< d_day << "." << m_month << "." << y_year << endl;
	}
	else {
		cout << day << "." << month << "." << year << " == "
			<< d_day << "." << m_month << "." << y_year << endl;
	}

	return temp;
}


void Data::SetData(int a) {  
	day = a;
}

int Data::GetData() {
	return day;
}

void Data::Input() {
	cout << "Enter date: ";
	cin >> day >> month >> year;
}

void Data::Print() {
	cout << day << "." << month << "." << year << endl;
}


