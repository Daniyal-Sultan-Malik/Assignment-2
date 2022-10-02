//#include<iostream>
//using namespace std;
//
//int main() {
//	int N, i = 2, c =2;
//	bool isPrime = false;
//	cout << "Enter Number whose Prime factors you want: ";
//	cin >> N;
//	while (i < N) {
//		if (N % i == 0) {
//			if ((i % i == 0) && (i % 1 == 0)) {
//				isPrime = true;
//				if (i == 2 || i == 3 || i == 5 || i == 7) {
//					isPrime = true;
//				}
//				else {
//					while (c < i) {
//						if (i % c == 0) {
//							isPrime = false;
//							break;
//						}
//						c++;
//					}
//				}
//
//			}
//		}
//		if (isPrime == true) {
//			cout << i<<"	";
//		}
//		isPrime = false;
//		i++;
//	}
//
//	return 0;
//}