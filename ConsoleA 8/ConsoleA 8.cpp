// ConsoleA 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
//#include <iomanip>

int main()
{
	//1)
	double x;
	std::cout << "Enter the x value: ";
	std::cin >> x;

	int N;
	double sum = 0, summand = 1, denominator = 1;

	std::cout << "Enter the number of terms: ";
	std::cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		sum += summand; //sum of terms
		summand *= -1 * x * (2*i - 3) / (2*i); //summand
	}
	std::cout << "The sum of N terms = " << sum << '\n';


	//2)
	double E;
	std::cout << "Enter the accuracy of the calculations: ";
	std::cin >> E;


	for (int i = 1; i <= 2; i++)
	{
		int count = 0;

		while (abs(summand) >= E)
		{
			sum += summand;
			summand *= -1 * x * (2*i - 3) / (2*i);
			
			count++; //number of terms
		}
		std::cout << "Number of terms = " << count << '\n';
		std::cout << "Approximate value = " << sum << '\n';
		E /= 10; //since it is still necessary to check with E an order of magnitude less
	}

	std::cout <<"square root of x + 1 is "<<" "<< sqrt(x + 1);
}