#include<iostream>
#include<conio.h>

using namespace std;

// Operation Function Prototypes
double addition(double a, double b);
double subtraction(double c, double d);
double multiplication(double f, double g);
double division(double h, double i);
int mod(int j, int k);


int main()
{
    char choice ;
    do
	{
		double x, t, z, u, v;
		int w;
		// Menu for choosing an operation
		cout << "Choose an operation. Enter number from 1-5." << endl;

		cout << "Menu:" << endl;

		cout << "" << endl;

		cout << "1.Addition" << endl;
		cout << "2.Subtraction" << endl;
		cout << "3.Multiplication" << endl;
		cout << "4.Division" << endl;
		cout << "5.Modulus" << endl;

		cout << "" << endl;

		// Entering of operation
		cout << "Enter your choice: ";
		cin >> w;

		cout << "" << endl;

		// Switch loop for selection of operation
		switch (w)
		{
		case 1:

			cout << "Enter two numbers "; cin >> x >> t;
			z = addition(x, t);
			cout << "Result " << z << endl;
			break;

		case 2:

			cout << "Enter two numbers "; cin >> x >> t;
			z = subtraction(x, t);
			cout << "Result " << z << endl;
			break;

		case 3:

			cout << "Enter two numbers "; cin >> x >> t;
			z = multiplication(x, t);
			cout << "Result " << z << endl;
			break;

		case 4:

			cout << "Enter two numbers "; cin >> x >> t;
			z = division(x, t);
			cout << "Result " << z << endl;
			break;

		case 5:

			cout << "Enter two numbers "; cin >> u >> v;
			w = mod(u, v);
			cout << "Result " << w << endl;

			break;

		default:

			cout << "Invalid!" << endl;
		}
		// Enter 'y' to loop program
		cout << "Continue? If yes, enter y. To quit, press any other letter. ";
		cin >> choice;
		cout << "" << endl;
		
    }
    while(choice == 'y','Y');
    getch(); 
	return 0;
}

//Operation Functions
double addition(double a, double b)
{
	double r;
	r = a + b;
	return r;
}

double subtraction(double c, double d)
{
	double r;
	r = c - d;
	return r;
}


double multiplication(double f, double g)
{
    double r;
	r = f * g;
	return r;
}

double division(double h, double i)
{
	double r;
	r = h / i;
	return r;
}

int mod(int j, int k)
{
	int r;
	r = j % k;
	return r;
}