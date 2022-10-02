//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int i = 4, c = 2,N,i_1,i_2;
//	bool i_1Prime=false, i_2Prime=false;
//	cout << "Enter number to iterate up to: ";
//	cin >> N;
//	while (i <= N) {
//		i_1 = i;
//		i_2 = i - 2;
//		if (i_1 % i_1 == 0 && i_1 % 1 == 0) {
//			i_1Prime = true;
//		}
//		while (c < i_1/2) {
//			if (i_1== 2 || i_1 == 3 || i_1 == 5 || i_1 == 7) {
//				break;
//			}
//			if (i_1 % c == 0) {
//				i_1Prime = false;
//				break;
//			}
//			c++;
//		}
//		c = 2;
//		if (i_2 % i_2 == 0 && i_2 % 1 == 0) {
//			i_2Prime = true;
//		}
//		while (c < i_2/2) {
//			if (i_2 == 2 || i_2 == 3 || i_2 == 5 || i_2 == 7) {
//				break;
//			}
//			if (i_2 % c == 0) {
//				i_2Prime = false;
//				break;
//			}
//			c++;
//		}
//		if (i_1Prime == true && i_2Prime == true) {
//			cout << "\nDual Primes: \n";
//			cout << "(" << i_2 << " , " << i_1 << ")";
//		}
//		i++;
//	}
//
//	return 0;
//}