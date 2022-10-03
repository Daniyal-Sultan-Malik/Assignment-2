//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int main()
//{
//	int N, FirstPow = 0, SecondPow=1, i = 1, sum = 0, CurrentBase, CurrentPow;
//  const int S = 1;
//	cout << "Enter Terms to be output 'N': ";
//	cin >> N;
//	sum = pow(1, S + 1);
//	cout << "1^(" << S + 1 << ")";
//	while (i <= N-1) {
//		if (i % 2 == 0) {
//			CurrentBase = 3;
//		}
//		else {
//			CurrentBase = 2;
//		}
//		CurrentPow = SecondPow + FirstPow;
//		cout << " + "<< CurrentBase << "^(" << CurrentPow +S << ")";
//		sum = sum + (pow(CurrentBase, CurrentPow + S));
//		FirstPow = SecondPow;
//		SecondPow = CurrentPow;
//		i++;
//	}
//	cout << " = " << sum;
//	return 0;
//}
