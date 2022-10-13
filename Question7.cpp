#include<iostream>
using namespace std;

int main()
{
	int mealoption, currency;
	float quantity, meal_price, sales_tax, total;
	cout << "Code	Meal			Price Per KG in Pakistani Rupees\n";
	cout << "1.	Fire Hot Steak		1800\n";
	cout << "2.	Solo Meuniere		2000\n";
	cout << "3.	Texas Barbecue		2200\n";
	cout << "4.	Mexican Corn Salad	500\n";
	cout << "5.	Creamy Mushroom		2500\n";
	cout << "Enter Meal Option by Code Number: ";
	cin >> mealoption;
	if (mealoption >= 1 || mealoption<=5){
		cout << "----\nEnter Quantity of the Meal You Want [in KGs]: ";
		cin >> quantity;
		if (quantity >= 0) {
			cout << "----\nEnter the Currency in which you want to pay by Code Number:- \n";
			cout << "Code	Currency\n";
			cout << "1.	Pakistani Rupees\n";
			cout << "2.	Euros\n";
			cout << "3.	US Dollars\n";
			cin >> currency;
			if (mealoption == 1) {
				meal_price = 1800 * quantity;
			}
			else if (mealoption == 2) {
				meal_price = 2000 * quantity;
			}
			else if (mealoption == 3) {
				meal_price = 2200 * quantity;
			}
			else if (mealoption == 4) {
				meal_price = 500 * quantity;
			}
			else {
				meal_price = 2500 * quantity;
			}

			if (meal_price <= 1000) {
				sales_tax=0.0;
			}
			else if (meal_price > 1000 && meal_price < 3000) {
				sales_tax = 0.02 * meal_price;
			}
			else {
				sales_tax = 0.05 * meal_price;
			}
			total = sales_tax + meal_price;
			if (currency == 1) {
				cout << "----\nIn PKR\nMeal Price:	" << meal_price << "\nSales Tax:	" << sales_tax << "\nTotal Price:	" << total;
			}
			else if (currency == 2) {
				cout << "----\nIn Euro\nMeal Price:	" << meal_price/222.0 << "\nSales Tax:	" << sales_tax/222.0 << "\nTotal Price:	" << total/222;
			}
			else {
				cout << "----\nIn USD\nMeal Price:	" << meal_price/200.0 << "\nSales Tax:	" << sales_tax/200.0 << "\nTotal Price:	" << total/200;
			}
		}
		else {
			cout << "Error! Invalid Quantity Selected. Process will now terminate---\n";
		}
	}
	else {
		cout << "Error! Invalid Option Entered. Process will now terminate---\n";
	}

	return 0;
}
