#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double R1, R2, x, y;

	cout << "R2 = "; cin >> R2;
	cout << "R1 = "; cin >> R1;
	cout << "x = "; cin >> x;

	
	if (x <= -6)
		y = R2 / 2;
	else
		if (-6 < x && x <= -2 * R2)
			y = 2 * x + (9 * R2 / 2);
		else
			if (-2 * R2 < x && x <= 0) 
				y = sqrt(R2 - x * x);
			else
				if ( x<0 && x<=2 * R1)
					y = sqrt(R1 * R1 - (x - R1) * (x - R1));
				else
					y = -R1 * (x - 2 * R1);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}