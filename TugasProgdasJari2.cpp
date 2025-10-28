#include <iostream>
#include <cmath>
using namespace std;

const double phi = 3.1416;

double jari2 (double a, double b, double c, double d) {
	double rad, deltaX, deltaY;
	
	deltaX = pow((b - a), 2);
	deltaY = pow((d - c), 2);
	rad = sqrt(deltaX+deltaY);
	
	return rad;
}

int main () {
	double x1, x2, y1, y2;
	cout << "Titik pusat lingkaran: ";
	cin >> x1 >> y1;
	cout << "Titik di lingkaran: ";
	cin >> x2 >> y2;
	
	double radius, diameter, keliling, luas;
	
	radius = jari2 (x1, x2, y1, y2);
	diameter = radius * 2;
	keliling = 2 * phi * radius;
	luas = phi * pow(radius, 2);
	
	cout << "Radius: " << radius << endl;
	cout << "Diameter: " << diameter << endl;
	cout << "Keliling: " << keliling << endl;
	cout << "Luas: " << luas << endl;
		
	return 0;	
}
