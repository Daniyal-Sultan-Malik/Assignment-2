//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int main()
//{
//	float value, unit, SoundPressure=0;
//	const float p0 = 20 * pow(10,-6);
//	cout << "Enter Value/Magnitude: ";
//	cin >> value;
//	cout << "Enter unit (dB = 1; Pa = 2): ";
//	cin >> unit;
//	if (unit == 1) {
//		SoundPressure = value;
//	}
//	else {
//		SoundPressure = log10(value / p0);
//		SoundPressure = 20 * SoundPressure;
//	}
//
//	if (SoundPressure > 140) {
//		cout << "Sound Pressure is higher than Threshold of Pain";
//	}
//	else if (SoundPressure > 125) {
//		cout << "Sound Pressure closest to: Threshold of Pain";
//	}
//	else if (SoundPressure > 110) {
//		cout << "Sound Pressure closest to: Possible Hearing Damage";
//	}
//	else if (SoundPressure > 95) {
//		cout << "Sound Pressure closest to: Jack Hammer at 1 m";
//	}
//	else if (SoundPressure > 75) {
//		cout << "Sound Pressure closest to: Traffic on Busy Roadway at 10 m";
//	}
//	else if (SoundPressure > 45) {
//		cout << "Sound Pressure closest to: Normal Conversation";
//	}
//	else if (SoundPressure > 15) {
//		cout << "Sound Pressure closest to: Calm Library";
//	}
//	else if (SoundPressure < -10) {
//		cout << "Sound Pressure closest to: Light Leaf Rustling";
//	}
//	else {
//		cout << "Sound Pressure is lower than Light Leaf Rustling";
//	}
//	return 0;
//}