#include<iostream>
using namespace std;

int main() {
	int CurrentYear = 1, CurrentMonth = 1, years, TotalMonths;
	float rainfall, sum = 0, average;
	bool CorrectOption = false;
	while (CorrectOption == false) {
		cout << "Enter Number of Years Whose Average Rainfall is Required: ";
		cin >> years;
		if (years >= 1) {
			CorrectOption = true;
		}
		else {
			cout << "Invalid. Years entered cannot be less than 1. Try again\n";
		}
	}
	CorrectOption = false;
	while (CurrentYear <= years) {
		while (CurrentMonth <= 12) {
			while (CorrectOption == false) {
				cout << "Enter Rainfall, in inches, of Year " << CurrentYear << ", Month " << CurrentMonth << ": ";
				cin >> rainfall;
				if (rainfall >= 0) {
					CorrectOption = true;
				}
				else {
					cout << "Invalid. Rainfall entered cannot be negative. Try again\n";
				}
			}
			sum = sum + rainfall;
			CorrectOption = false;
			CurrentMonth++;
		}
		CurrentMonth = 1;
		CurrentYear++;
	}
	TotalMonths = years * 12;
	average = sum / TotalMonths;
	cout << "...\n...\nTotal Months: " << TotalMonths << "\nTotal Rainfall in the given Time Period: " << sum << "\nAverage Rainfall in the given Time Period: " << average;

	return 0;
}