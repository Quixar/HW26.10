#include <iostream>
using namespace std;

int main()
{
	//double num1;
	//double num2;
	//double sum;
	//double* pnum1 = &num1;
	//double* pnum2 = &num2;
	//double* psum = &sum;
	//double** ppnum1 = &pnum1;
	//double** ppnum2 = &pnum2;
	//double** ppsum = &psum;
	//cout << "Enter first number: ";
	//cin >>  **ppnum1;
	//cout << "Enter second number: ";
	//cin >> **ppnum2;
	//cout << "Sum of numbers = " << **ppnum1 + **ppnum2 << "\n";


	int height;
	int* pheight = &height;
	int** ppheight = &pheight;
	int ideal_weight;
	double weight;
	double* pweight = &weight;
	double** ppweight = &pweight;

	cout << "Enter your height: ";
	cin >> **ppheight;
	cout << "Enter your weight:";
	cin >> **ppweight;

	ideal_weight = **ppheight - 110;

	if (**ppweight < ideal_weight)
	{
		cout << "You need to put on " << ideal_weight - **ppweight << " kg";
	}
	else if (**ppweight > ideal_weight)
	{
		cout << "You need to lose " << **ppweight - ideal_weight << " kg";
	}
	else
	{
		cout << "You have ideal weight";
	}
}
