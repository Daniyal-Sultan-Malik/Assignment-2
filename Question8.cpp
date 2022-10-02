//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int option;
//	float speed, time, distance;
//	bool correct_option = false;
//	cout << "1.Carbon Dioxide\n2.Air\n3.Helium\n4.Hydrogen\n...\nPlease select one of these gases (1/2/3/4): ";
//	while (correct_option == false) {
//		cin >> option;
//		if (option == 1) {
//			speed = 258.0;
//			correct_option = true;
//		}
//		else if (option == 2) {
//			speed = 331.5;
//			correct_option = true;
//		}
//		else if (option == 3) {
//			speed = 972.0;
//			correct_option = true;
//		}
//		else if (option==4){
//			speed = 1270.0;
//			correct_option = true;
//		}
//		else {
//			cout << "Error! Select one of the 4 gases: ";
//		}
//	}
//	cout << "Enter the time, in seconds, that it took for the sound to reach the destination for the source: ";
//	correct_option = false;
//	while (correct_option == false) {
//		cin >> time;
//		if (time < 0 || time >30) {
//			cout << "Error. Time should be between 0 seconds and 30 seconds: ";
//		}
//		else {
//			distance = time * speed;
//			correct_option = true;
//		}
//	}
//	cout << "Distance between source and destination: " << distance << " meters.";
//	return 0;
//}