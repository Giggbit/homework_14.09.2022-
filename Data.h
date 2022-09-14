#pragma once
class Data {
	int day;
	int month;
	int year;

public:
	Data();
	Data(int d, int m, int y); 
	Data& operator++();
	Data& operator--();
	Data operator++(int);
	Data operator--(int);
	Data operator+(int num); 
	Data operator-(int num);
	Data operator-();
	Data operator+=(int num);
	Data operator-=(int num);
	Data operator<(int);
	Data operator>(int); 
	Data operator<=(int);  
	Data operator>=(int); 
	Data operator==(int);  
	Data operator!=(int);
	

	void SetData(int a); 
	int GetData();
	
	void Input();
	void Print();

};

