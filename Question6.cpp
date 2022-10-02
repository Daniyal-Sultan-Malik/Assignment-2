//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int date, month, year;
//	int newdate, newmonth, newyear;
//	bool correctdate=false, leapyear = false;
//	while (correctdate == false) {
//		cout << "Enter date: ";
//		cin >> date;
//		cout << "Enter month: ";
//		cin >> month;
//		cout << "Enter year: ";
//		cin >> year;
//
//		if (year % 4 == 0) {
//			if (year % 100 == 0) {
//				if (year % 400 == 0) {
//					leapyear = true;
//				}
//			}
//			else {
//				leapyear = false;
//			}
//		}
//
//		if (date > 31 || month > 12 || year < 0) {
//			cout << "Invalid date. Try again.\n";
//		}
//		else if (month == 2 && date > 28 && leapyear == false) {
//			cout << "Invalid date. Try again.\n";
//		}
//		else if (month == 2 && date > 29 && leapyear == true) {
//			cout << "Invalid date. Try again.\n";
//		}
//		else if ((month == 4 || month == 6 || month == 9 || month == 11) && date > 30 && leapyear == false) {
//			cout << "Invalid date. Try again.\n";
//		}
//		else {
//			correctdate = true;
//		}
//	}
//	newdate = date;
//	newmonth = month;
//	newyear = year;
//	if (month == 12){
//		if (date == 31) {
//			newmonth = 1;
//			newdate = 1;
//			newyear++;
//		}
//		else {
//			newdate++;
//		}
//	}
//	else if (month == 4 || month == 6 || month == 9 || month == 11) {
//		if (date == 30) {
//			newmonth++;
//			newdate = 1;
//		}
//		else {
//			newdate++;
//		}
//	}
//	else if (month == 2) {
//		if (date == 29 && leapyear==true) {
//			newmonth++;
//			newdate = 1;
//		}
//		else if (date == 28 && leapyear == false) {
//			newmonth++;
//			newdate = 1;
//		}
//		else {
//			newdate++;
//		}
//	}
//	else {
//		if (date == 31) {
//			newmonth++;
//			newdate = 1;
//		}
//		else {
//			newdate++;
//		}
//	}
//	
//	cout << "Next Date: " << newdate << "/" << newmonth << "/" << newyear;
//
//	return 0;
//}