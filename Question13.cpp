//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int num;
//    cout << "Enter number: ";
//    cin >> num;
//
//    int tempNum = num;
//    int sum = 0;
//    while (tempNum != 0)
//    {
//        int digit = tempNum % 10;
//        int factorial = 1;
//        int i = 1;
//
//        while (i <= digit)
//        {
//            factorial *= i;
//            ++i;
//        }
//
//        sum += factorial;
//        tempNum /= 10;
//    }
//
//    if (sum == num)
//    {
//        cout << "Number is a strong number";
//    }
//    else
//    {
//        cout << "Number is not a strong number";
//    }
//
//    cout << "\n";
//    return 0;
//}