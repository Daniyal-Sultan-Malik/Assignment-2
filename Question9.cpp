//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float hours, totalprice;
//	char pkgname;
//	bool correct_pkg = false, correct_time = false;
//	cout << "Enter Package Subscription Model Name (A/B/C): ";
//	while (correct_pkg == false) {
//		cin >> pkgname;
//		if (pkgname == 'A' || pkgname == 'B' || pkgname == 'C') {
//			correct_pkg = true;
//		}
//
//		else {
//			cout << "Error. Enter Correct Package Type: ";
//		}
//	}
//	cout << "Enter Hours Used In the Month: ";
//	while (correct_time == false) {
//		cin >> hours;
//		if (hours > 744) {
//			cout << "Error. Hours should not exceed 744. Try again: ";
//		}
//		else {
//			correct_time = true;
//		}
//	}
//
//	if (pkgname == 'A') {
//		if (hours <= 10) {
//			totalprice = 0.99;
//		}
//		else {
//			totalprice = 0.99 + ((hours - 10)*2);
//		}
//	}
//	else if (pkgname == 'B') {
//		if (hours <= 20) {
//			totalprice = 14.95;
//		}
//		else {
//			totalprice = 14.95 + (hours - 20);
//		}
//	}
//	else {
//		totalprice = 19.95;
//	}
//	cout << "Your total bill comes out to \$" << totalprice;
//	return 0;
//}
