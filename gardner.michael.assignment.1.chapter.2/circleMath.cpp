// Program Name:	Circle Math - Assignment 1 - Chapter 2
// Chapter:			Chapter 2 - C++ Fundimentals
// Pg. / Ex.:		N/A
// Programmer:		Michael A Gardner
// Date:			28/Jan2016
// Description:		This program uses cout statments to display information about circles to the user
//					This program calculates the diameter, circumference, and area of a circle by useing the radius imputed my the user.


#include <iostream>  // This adds the abilty to send output and input.
#include <iomanip> // This is the manipulatior to allow for setting decimal precision.
using namespace std;

int main()
{
	double			
		radius = 0.0;  // Variable for Radius.

	cout << "**********  Circle Math Program   **********\n\n\n\n";  // Title for the program.
	cout << "Please enter the radius of the circle (in inches): ";  // Prompts the user to enter a radius.
	cin >> radius; // imputs a value for radius.
	
	
	
	const double
		pi = 3.14159,						 // Variable for Pi.
		diameter = 2.0 * radius,			 // Calculates the Diameter.
		circumference = 2.0 * pi * radius,	 // Calculates the Circumference.
		area = pi * radius * radius;		// Calculates the Area.
	

	cout << setprecision(2) << fixed  // Using one cout statment allows the use of only one set precision.  This sets the decimal places to 2.
		<< "\n\nThe diameter of a circle with a radius of " << radius << " inches is " << diameter << " inches.\n"  // displays the radius and diameter.
		<< "The circumference of a circle with a radius of " << radius << " inches is " << circumference << " inches.\n" // displays the radius and circumference.
		<< "The area of a circle with a radius of " << radius << " inches is " << area << " inches.\n\n"; // displays the radus and area.
		

	return 0;
}
