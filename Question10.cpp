//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float hours, totalprice, PackageAPrice, PackageBPrice, PackageCPrice;
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
//	if (hours <= 10) {
//		if (pkgname == 'A') {
//			cout << "Your total bill comes out \$0.99";
//		}
//		if (pkgname == 'B') {
//			cout << "Your total bill comes out \$14.95";
//		}
//		if (pkgname =='C') {
//			cout << "Your total bill comes out \$19.95";
//		}
//	}
//
//	else {
//		PackageAPrice = (0.99) + (2 * (hours - 10));
//		if (hours > 20) {
//			PackageBPrice = (14.95)+ (hours - 20);
//		}
//		else {
//			PackageBPrice = (14.95 * hours);
//		}
//		PackageCPrice = 19.95;
//		if (pkgname == 'A' && PackageAPrice > PackageBPrice) {
//			cout << "Your bill comes out to \$" << PackageAPrice;
//			cout << "\nIf you purchased Package Subscription B, you wouldve saved \$" << (PackageAPrice - PackageBPrice);
//		}
//		else if (pkgname == 'A' && PackageAPrice < PackageBPrice) {
//			cout << "Your bill comes out to \$" << PackageAPrice;
//		}
//		
//		else if (pkgname == 'B' && PackageBPrice > PackageCPrice) {
//			cout << "Your bill comes out to \$" << PackageBPrice;
//			cout << "\nIf you purchased Package Subscription C, you wouldve saved \$" << (PackageBPrice - PackageCPrice);
//			}
//		else if (pkgname == 'B' && PackageBPrice < PackageCPrice) {
//			cout << "Your bill comes out to \$" << PackageBPrice;
//		}
//		
//		if (pkgname == 'C') {
//			cout << "You total bill comes out to \$" << PackageCPrice;
//		}
//	}
//	return 0;
//}
