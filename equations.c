#include "header.h"

//Declare read_double in order to return value
double read_double(FILE *infile)
{
	double value = 0.0;
	fscanf(infile, "%lf", &value);
	return value;
}

//Declare read_integer in order to return value
int read_integer(FILE *infile)
{
	int value = 0;
	fscanf(infile, "%d", &value);
	return value;
}

//Draw up an equation using the given variables, sum is simply adding up all of the values inserted
double calculate_sum(double number1, double number2, double number3, double number4, double number5)
{
	return number1 + number2 + number3 + number4 + number5;
}


//Draw up another equation in order to take the sum and divide it by the number of students
//NOTE: NUMBER OF STUDENTS CAN NOT BE EQUAL TO ZERO THUS THE FUNCTION ONLY RUNS IF (number != 0) 
double calculate_mean(double sum, int number)
{
	double mean;
	mean = sum / number;
	return mean;
}

//Calculate the deviation, we will need to use this five times for the calculate_variance function
double calculate_deviation(double number, double mean)
{
	return number - mean;
}

//An equation using the 5 deviations and calculating the variance with the given number of students 
//Given Equation: ((deviation1)^2 + (deviation2)^2 + (deviation3)^2 + (deviation4)^2 + (deviation5)^2) / number, We can use the calculate mean variable for this
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
{
	double calc, x;
	x = calculate_sum(pow(deviation1, 2), pow(deviation2, 2), pow(deviation3, 2), pow(deviation4, 2), pow(deviation5, 2));
	calc = calculate_mean(x, number);
	return calc;
}

//Simply taking the variance and square rooting it in the function
double calculate_standard_deviation(double variance)
{
	double x = 0.0;
	x = sqrt(variance);
	return x;
}

//Finding the minimum by setting the first GPA equal to the minimum and using "if" statements to check and see if any value is lower, if it IS lower that GPA takes the minimum value
double find_min(double GPA1, double GPA2, double GPA3, double GPA4, double GPA5)
{
	double min = GPA1;

	if (GPA2 < min)
	{
		min = GPA2;
	}
	if (GPA3 < min)
	{
		min = GPA3;
	}
	if (GPA4 < min)
	{
		min = GPA4;
	}
	if (GPA5 < min)
	{
		min = GPA5;
	}
	return min;
}

//Very similar to the minimum function but swapping to greater thans and finding a maximum value
double find_max(double GPA1, double GPA2, double GPA3, double GPA4, double GPA5)
{
	double max = GPA1;

	if (GPA2 > max)
	{
		max = GPA2;
	}
	if (GPA3 > max)
	{
		max = GPA3;
	}
	if (GPA4 > max)
	{
		max = GPA4;
	}
	if (GPA5 > max)
	{
		max = GPA5;
	}
	return max;
}

//Printing doubles to outfile as obviously a floating point value
void print_double(FILE *outfile, double number)
{
	fprintf(outfile, "%.2lf\n", number);
}