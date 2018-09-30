//Name: Brevin Simon
//Assignment: PA3
//Date: 2/3/2018
//Prof: Fallon

#include "header.h"

int main(void)
{
	FILE *infile = NULL;
	FILE *outfile = NULL;

	//The Mean Variables
	double gpa_sum = 0.0, gpa_mean = 0.0, class_rank_sum = 0.0, class_rank_mean = 0.0, age_sum = 0.0, age_mean = 0.0;

	//The Standard Deviation, Min, Max Variables
	double variance = 0.0, get_standard_deviation = 0.0, get_min = 0.0, get_max = 0.0, minimum = 0.0, maximum = 0.0,
		deviation1 = 0.0, deviation2 = 0.0, deviation3 = 0.0, deviation4 = 0.0, deviation5 = 0.0;

	//Open the Files
	infile = fopen("input.txt", "r");
	outfile = fopen("output.txt", "w");
	
	//Grab all values and assign them a variable ***Space Between Each Student
	int studentID1 = read_integer(infile);
	double GPA1 = read_double(infile);
	int classRanking1 = read_integer(infile);
	double age1 = read_double(infile);

	int studentID2 = read_integer(infile);
	double GPA2 = read_double(infile);
	int classRanking2 = read_integer(infile);
	double age2 = read_double(infile);

	int studentID3 = read_integer(infile);
	double GPA3 = read_double(infile);
	int classRanking3 = read_integer(infile);
	double age3 = read_double(infile);

	int studentID4 = read_integer(infile);
	double GPA4 = read_double(infile);
	int classRanking4 = read_integer(infile);
	double age4 = read_double(infile);

	int studentID5 = read_integer(infile);
	double GPA5 = read_double(infile);
	int classRanking5 = read_integer(infile);
	double age5 = read_double(infile);

	//Calculate the sum of the GPAs
	gpa_sum = calculate_sum(GPA1, GPA2, GPA3, GPA4, GPA5);

	//Calculate the mean of the GPAs using calculate_mean()
	gpa_mean = calculate_mean(gpa_sum, 5);
	print_double(outfile, gpa_mean);
	//Printing Final Value Above


	//Calculate the sum of the Class Rankings
	class_rank_sum = calculate_sum(classRanking1, classRanking2, classRanking3, classRanking4, classRanking5);

	//Calculate the mean of the Class Rankings using calculate_mean()
	class_rank_mean = calculate_mean(class_rank_sum, 5);
	print_double(outfile, class_rank_mean);
	//Printing Final Value Above


	//Calculate the sum of the ages
	age_sum = calculate_sum(age1, age2, age3, age4, age5);

	//Calculate the mean of the ages using calculate_mean()
	age_mean = calculate_mean(age_sum, 5);
	print_double(outfile, age_mean);
	//Printing Final Value Above


	//Calculate the 5 deviations using the five GPA values and calculate_deviation
	deviation1 = calculate_deviation(GPA1, gpa_mean);

	deviation2 = calculate_deviation(GPA2, gpa_mean);

	deviation3 = calculate_deviation(GPA3, gpa_mean);

	deviation4 = calculate_deviation(GPA4, gpa_mean);

	deviation5 = calculate_deviation(GPA5, gpa_mean);

	//Calculate variance using the 5 deviations and the # of students
	variance = calculate_variance(deviation1, deviation2, deviation3, deviation4, deviation5, Numb_Students);

	//Calculate the standard deviation using the variance and the square root variable "calculate_standard_deviation"
	get_standard_deviation = calculate_standard_deviation(variance);
	print_double(outfile, get_standard_deviation);
	//Printing Final Value Above


	//Calculate the minimum using find_min with the given GPAs
	minimum = find_min(GPA1, GPA2, GPA3, GPA4, GPA5);
	print_double(outfile, minimum);
	//Printing Final Value Above


	//Calculate the maximum using the find_max and the given GPAs
	maximum = find_max(GPA1, GPA2, GPA3, GPA4, GPA5);
	print_double(outfile, maximum);
	//Printing Final Value Above

	//Close 
	fclose(infile);
	fclose(outfile);

	return 0;
}