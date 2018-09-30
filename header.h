#include <stdio.h>
#include <math.h>
#pragma once
//Defined a constant for the number of students for no apparent reason
#define Numb_Students 5

double read_double(FILE *infile);

int read_integer(FILE *infile);

double calculate_sum(double number1, double number2, double number3, double number4, double number5);

double calculate_mean(double sum, int number);

double calculate_deviation(double number, double mean);

double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number);

double calculate_standard_deviation(double variance);

double find_min(double GPA1, double GPA2, double GPA3, double GPA4, double GPA5);

double find_max(double GPA1, double GPA2, double GPA3, double GPA4, double GPA5);

void print_double(FILE *outfile, double number);
