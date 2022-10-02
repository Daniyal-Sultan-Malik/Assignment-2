//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int PagesNeeded, PagesLeft, Thousands, FiveHundreds, Hundreds;
//	cout << "Enter the amount of pages you want: ";
//	cin >> PagesNeeded;
//	cout << "You can get " << PagesNeeded << " pages for \$" << PagesNeeded * 0.1 << " Or \n";
//	if (PagesNeeded % 1000 != PagesNeeded) {
//		Thousands = PagesNeeded / 1000;
//		FiveHundreds = PagesNeeded / 500;
//		if (PagesNeeded % 1000 == 0) {
//			cout << "1. It will be cost effective to buy " << Thousands << "000 pages for \$" << Thousands * 1000 * 0.03;
//		}
//		else {
//			cout << "1. It will be cost effective to buy " << Thousands + 1 << "000 pages for \$" << (Thousands + 1) * 1000 * 0.03;
//		}
//		if (PagesNeeded % 500 == 0) {
//			cout << "\n2. It will be cost effective to buy " << FiveHundreds * 500 << " pages for \$" << FiveHundreds * 500 * 0.04;
//		}
//		else {
//			cout << "\n2. It will be cost effective to buy " << (FiveHundreds + 1) * 500 << " pages for \$" << (FiveHundreds + 1) * 500 * 0.04;
//		}
//	}
//	else if (PagesNeeded > 500) {
//		cout << "1. It will be cost effective to buy 1000 pages for \$" << 1000 * 0.03;
//		Hundreds = PagesNeeded / 100;
//		if (PagesNeeded % 100== 0) {
//			cout << "\n2. It will be cost effective to buy " << Hundreds * 100 << " pages for \$" << Hundreds * 100 * 0.055;
//		}
//		else {
//			cout << "\n2. It will be cost effective to buy " << (Hundreds + 1) * 100 << " pages for \$" << (Hundreds + 1) * 100 * 0.055;
//		}
//	}
//	else if (PagesNeeded > 100) {
//		cout << "1. It will be cost effective to buy 500 pages for \$" << 500 * 0.04;
//		Hundreds = PagesNeeded / 100;
//		if (PagesNeeded % 100 == 0) {
//			cout << "\n2. It will be cost effective to buy " << Hundreds * 100 << " pages for \$" << Hundreds * 100 * 0.055;
//		}
//		else {
//			cout << "\n2. It will be cost effective to buy " << (Hundreds + 1) * 100 << " pages for \$" << (Hundreds + 1) * 100 * 0.055;
//		}
//	}
//	else {
//		cout << "1. It will be cost effective to buy 100 pages for \$" << 100 * 0.055;
//	}
//	return 0;
//}