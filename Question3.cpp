//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int AccountMoney, MoneyWithdraw, DailyLimit;
//	int Count500=0, Count1000=0, Count5000=0, x;
//	float CorrectAmount=false;
//	cout << "Enter the Total Amount of Money stored in your account: ";
//	cin >> AccountMoney;
//	cout << "Enter Maximum Daily Spending Limit: ";
//	cin >> DailyLimit;
//	
//	while (CorrectAmount == false)
//	{
//		cout << "Enter the amount you wish to withdraw: ";
//		cin >> MoneyWithdraw;
//		if (MoneyWithdraw % 500 != 0) {
//			cout << "Error! The amount should be a multiple of 500. Please try again. \n";
//		}
//		else if (MoneyWithdraw > AccountMoney) {
//				cout << "Error! The amount should be less or equal to the amount you have in your account. Please try again. \n";
//		}
//		else if (MoneyWithdraw > DailyLimit){
//			cout << "Error! The amount should be less or equal to your daily spending limit. Please try again. \n";
//		}
//		else {
//			CorrectAmount = true;
//		}
//	}
//	if (MoneyWithdraw % 1000 == 500){
//		MoneyWithdraw = MoneyWithdraw - 500;
//		Count500 = 1;
//	}
//	else {
//		MoneyWithdraw = MoneyWithdraw - 1000;
//		Count500 - 2;
//	}
//	if (MoneyWithdraw % 5000 == MoneyWithdraw) {
//		Count1000 = MoneyWithdraw / 1000;
//	}
//	else {
//		x = MoneyWithdraw / 5000;
//		Count5000 = x;
//		MoneyWithdraw = MoneyWithdraw - (x * 5000);
//		Count1000 = MoneyWithdraw / 1000;
//	}
//	cout << "Amount Successfully Withdrawn. \n";
//	cout << "Rs. 5000 Bills:  " << Count5000 << "\nRs. 1000 Bills:  " << Count1000 << "\nRs. 500 Bills: " << Count500;
//
//	return 0;
//}
