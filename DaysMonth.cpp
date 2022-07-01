#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString(double);
int toInt(string);
double toDouble(string);
bool determineDaysInMonth(int month);
bool determineLeapYear(int year);

int main() {
	bool days;
	int month;

	cout << "What is the month, use numerics (1-12)?" << endl;
	cin >> month;
	days = determineDaysInMonth(month);
	system("pause");
	return 0;

}

bool determineDaysInMonth(int month) {
	bool days;
	bool isLeap;

	days = false;
	int anyYear;

	if (month == 1) {
		cout << "There are 31 days in this month." << endl;
	}
	else {
		if (month == 2) {
			cout << "What is the year?" << endl;
			cin >> anyYear;
			isLeap = determineLeapYear(anyYear);
		}
		else {
			if (month == 3) {
				cout << "There are 31 days in this month." << endl;
			}
			else {
				if (month == 4) {
					cout << "There are 30 days in this month." << endl;
				}
				else {
					if (month == 5) {
						cout << "There are 31 days in this month." << endl;
					}
					else {
						if (month == 6) {
							cout << "There are 30 days in this month." << endl;
						}
						else {
							if (month == 7) {
								cout << "There are 31 days in this month." << endl;
							}
							else {
								if (month == 8) {
									cout << "There are 31 days in this month." << endl;
								}
								else {
									if (month == 9) {
										cout << "There are 30 days in this month." << endl;
									}
									else {
										if (month == 10) {
											cout << "There are 31 days in this month." << endl;
										}
										else {
											if (month == 11) {
												cout << "There are 30 days in this month." << endl;
											}
											else {
												if (month == 12) {
													cout << "There are 31 days in this month." << endl;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return days;
}

bool determineLeapYear(int year) {
	bool isLeap;
	bool answer;

	answer = false;
	if (year % 100 == 0) {
		if (year % 400 == 0) {
			cout << "There are 29 days in this month." << endl;
		}
		else {
			cout << "There are 28 days in this month." << endl;
		}
	}
	else {
		if (year % 4 == 0) {
			cout << "There are 29 days in this month." << endl;
		}
		else {
			cout << "There are 28 days in this month." << endl;
		}
	}
	return answer;

}
