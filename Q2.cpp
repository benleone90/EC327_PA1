#include <iostream>
#include <math.h>
using namespace std;

// Function to determine if the squares intersect
bool intersect (double left_x1, double left_y1, double right_x1, double right_y1, 
				double left_x2, double left_y2, double right_x2, double right_y2){
	if (left_x1 > right_x2 || left_x2 >right_x1){
		return false;
	}
	if (right_y1 > left_y2 || right_y2 > left_y1){
		return false;
	}
	return true;
}

int main()
{
	double sq1x; //First sqare x-coordinate
	double sq1y; //First square y-coordinate
	double area1; //First square area
	double sq2x; //Second square x-coordinate
	double sq2y; //Second square y-coordinate
	double area2; //Second square area

	//This is a PRIME LOCATION for a function but I could not get it working -BL
	while(1){
		cout << "Enter Square 1 x-coordinate: ";
		cin >> sq1x;
		if(cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please input only numbers" << endl;
		} else {
			break;
		}
	}
	
	while(1){
		cout << "Enter Square 1 y-coordinate: ";
		cin >> sq1y;
		if(cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please input only numbers" << endl;
		} else {
			break;
		}
	}

	while(1){
		cout << "Enter Sqaure 1 area: ";
		cin >> area1;
		if(cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please input only numbers" << endl;
		} else {
			break;
		}
	}

	while(1){
		cout << "Enter Square 2 x-coordinate: ";
		cin >> sq2x;
		if(cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please input only numbers" << endl;
		} else {
			break;
		}
	}

	while(1){
		cout << "Enter Square 2 y-coordinate: ";
		cin >> sq2y;
		if(cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please input only numbers" << endl;
		} else {
			break;
		}
	}

	while(1){
		cout << "Enter Square 2 area: ";
		cin >> area2;
		if(cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please input only numbers" << endl;
		} else {
			break;
		}
	}

	double sq1side = sqrt (area1); //Finding side lenght of square 1
	double sq2side = sqrt (area2); //Finding side lenght of square 2

	double sq1x2 = (sq1x + sq1side); //Finding first square lower right x-coordinate
	double sq1y2 = (sq1y - sq1side); //Find first square lower right y-coordinate
	double sq2x2 = (sq2x + sq2side); //Finding second square lower right x-coordinate
	double sq2y2 = (sq2y - sq2side); //Finding second square lower right y-coordinate

	// Passing values to intersect function and outputting based on return
	if (intersect(sq1x, sq1y, sq1x2, sq1y2, sq2x, sq2y, sq2x2, sq2y2)){
		cout << "THE SQUARES INTERSECT!!!" << endl;
	}
	else {
		cout << "THE SQUARES DO NOT INTERSECT :(" << endl;
	}

	return 0;
}