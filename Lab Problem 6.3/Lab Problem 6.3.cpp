#include<iostream>
#include<cmath>

using namespace std;

int main(void) {

	cout << "Enter numbers - Q to quit: ";
	double input;
	double sum = 0;
	double avg;
	double stdDev;
	double square;
	double prev_square = 0;
	double squareSum = 0;
	double numerator;
	double squareAvg;
	double mean_square;
	int count = 0;
	int max = 0;
	int min = 99999;

	while (true) {
		cin >> input;
		if (cin.fail()) { break; }
		else {
			count++;

			sum = sum + input;
			avg = sum / count;

			square = pow(input, 2);
			squareSum = squareSum + square;
			//squareAvg = pow((avg), 2);
			mean_square = pow(sum, 2);
			squareAvg = mean_square / count;

			numerator = squareSum - squareAvg;
			stdDev = sqrt(numerator / (count - 1));


			cout << "Enter numbers - Q to quit: ";
		}

	}

	cout << "n = " << count << ", average = " << avg << ", standard deviation = " << stdDev;
}