// quadratics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"


int main()
{
	double a = 0;
	double b = 0;
	double c = 0;

	cout << "To solve for quadratic equation of form, ax2 + bx +c = 0\nPlease enter a:";
	cin >> a;
	cout << "\nPlease enter b:";
	cin >> b;
	cout << "\nPlease enter c:";
	cin >> c;


	if (a!=0 && c != 0)
	{
		double toRoot = ((b*b) - (4 * a*c));
		if (toRoot < 0)
			cout << "\n\nThere are no real roots for this equation\n";
		else
			if (toRoot == 0)
				cout << "\n\nx = " << ((-b) + sqrt((b*b) - (4 * a*c))) / (2 * a) << '\n';
			else
				cout << "\n\n x=" << ((-b) + sqrt((b*b) - (4 * a*c))) / (2 * a) << " and x=" << ((-b) - sqrt((b*b) - (4 * a*c))) / (2 * a) << '\n';
	}

    return 0;
}

