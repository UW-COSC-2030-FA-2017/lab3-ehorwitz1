#include <iostream>
#include <iomanip>
using namespace std;

//Erik Horwitz
//Cosc 2030
//Lab 03

short sumShort(int x)
{
	short int tempSum = 0;
	for (short i = 0; i <= x; i++)
	{
		tempSum = tempSum + i;
	}
	return tempSum;
}


long sumLong(int x)
{
	long int tempSum = 0;
	for (long i = 0; i <= x; i++)
	{
		tempSum = tempSum + i;
	}
	return tempSum;
}


float nFactorialLong(int x)
{

	long int tempSum = 1;
	for (long i = 1; i <= x ; i++)
	{
		tempSum*=i;
	}
	return tempSum;
	
}

float nFactorialFloat(int x)
{

	float tempSum = 1;
	for (long i = 1; i <= x; i++)
	{
		tempSum *= i;
	}
	return tempSum;

}

double nFactorialDouble(int x)
{

	double tempSum = 1;
	for (long i = 1; i <= x; i++)
	{
		tempSum *= i;
	}
	return tempSum;

}

float strangeFloat(float x)
{
	float tempSum = 0;
	for (int i = 1; i <= x; i++)
	{
		tempSum += (1 / x);
	}
	return tempSum-1;
}

double strangeDouble(double x)
{
	double tempSum = 0;
	for (int i = 1; i <= x; i++)
	{
		tempSum += (1 / x);

	}
	return tempSum -1;
}



int main()
{
	//255 was the max value for shorts
	//2^8 because short is 8 bits
	cout<<"Max value for summing shorts: "<<sumShort(255)<<endl;
	cout <<"Overflow for summing shorts: "<< sumShort(256) << endl;



	//65535 is the max value for long
	//2^16 because long is 16 bits
	cout << "Max value for summing longs: " << sumLong(65535) << endl;
	cout << "Overflow value for summing longs: " << sumLong(65536) << endl;

	//Overflow value for long factorial is 16
	cout << "Max value for long factorials: "<< nFactorialLong(16) << endl;
	cout << "Overflow value for long factorials: "<< nFactorialLong(17) << endl;


	cout << "Max value for float factorials: " << nFactorialFloat(34) << endl;
	cout << "Overflow value for float factorials: "<< nFactorialFloat(35) << endl;

	cout << "Max value for double factorials: " << nFactorialDouble(170)<<endl;
	cout << "Overflow value for double factorials: " << nFactorialDouble(171)<<endl;
	cout << endl;

	//The expected value is 0 because adding n number of (1/n) will always equal one, and subtracting 1 will make the answer 0
	for (int i = 0; i < 10; i++)
	{
	cout <<"Strange Float for "<< i<<": "<< strangeFloat(i)<< endl;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "Strange Double for " << i << ": " << strangeDouble(i) << endl;
	}
	//The difference in precision between the floats and doubles could account for the strange behavior of the answer. Doubles might round fractions off at different
	//places than floats causing very small (x10^-7 or x10^-16) errors.

	//As the numbers get larger the fractions get harder to be precise causing errors to happen more frequently 
	for (int i = 50; i < 75; i++)
	{
		cout << "Strange Float for " << i << ": " << strangeFloat(i) << endl;
	}

	for (int i = 50; i < 75; i++)
	{
		cout << "Strange Double for " << i << ": " << strangeDouble(i) << endl;
	}



	cout << "Printing out floats from 3.4 to 4.4" << endl;
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}


	cout << "Printing out floats from 3.4 to 4.4" << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	//The error for floats seems to be it prints out the value of 4.4 when it should stop before it reaches that value. 
	//This could be due to a rounding error
	//The double ends correctly 

	return 0;

}

