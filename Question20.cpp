#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int N, i=1, sq_distance;
	int x = 0, y = 0;
	char direction;
	cout << "Enter the number of steps the drunkard took: ";
	cin >> N;
	cout << "Enter direction of the step taken (North = 'N'/ South = 'S'/ East = 'E'/ West ='W'): ";
	cin >> direction;
	if (direction == 'N') {
		y++;
	}
	else if (direction == 'S') {
		y--;
	}
	else if (direction == 'E') {
		x++;
	}
	else {
		x--;
	}
	cout << "(" << x << ", " << y << ")";
	while (i < N) {
		cout << "\nEnter Next Step: ";
		cin >> direction;
		if (direction =='N'){
			y++;
		}
		else if (direction == 'S') {
			y--;
		}
		else if (direction == 'E') {
			x++;
		}
		else {
			x--;
		}
		cout << "(" << x << ", " << y<<")";
		i++;
	}
	sq_distance = pow(x, 2) + pow(y, 2);
	cout << "\nSquared Distance: " << sq_distance;
	return 0;
}