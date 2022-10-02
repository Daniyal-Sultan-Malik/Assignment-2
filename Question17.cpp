//#include<iostream>
//using namespace std;
//
//int main(){
//	int years = 0;
//	float GrowthA, GrowthB, PopA, PopB, GrowthThisYearA, GrowthThisYearB;
//	bool CorrectGrowth=false;
//	cout << "Enter Population of Town A: ";
//	cin >> PopA;
//	cout << "Enter Growth Rate, Per Year, of Town A: ";
//	cin >> GrowthA;
//	cout << "Enter Population of Town B: ";
//	cin >> PopB;
//	while (CorrectGrowth == false) {
//		cout << "Enter Growth Rate, Per Year, of Town B: ";
//		cin >> GrowthB;
//		if (GrowthB < GrowthA) {
//			CorrectGrowth = true;
//		}
//		else {
//			cout << "Invalid. Growth Rate of Town B is lower than Town A. Try again...\n";
//		}
//	}
//	while (PopA < PopB) {
//		GrowthThisYearA = PopA * (GrowthA/100);
//		PopA = PopA + GrowthThisYearA;
//		GrowthThisYearB = PopB * GrowthB;
//		PopB = PopB + GrowthThisYearB;
//		years++;
//	}
//	cout << "Town A will be more populated than Town B in " << years << " years.";
//
//	return 0;
//}