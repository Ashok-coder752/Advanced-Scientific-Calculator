#ifndef functions_h
#define functions_h

#include <math.h>

// Main function declarations
double Arithmetic_Operation(double a, double b);
double Trigonometric_Function(double a);
double Exponential_and_Logarithmic_Functions(double a);
double Other_mathematical_Functions(double a, double b);
double hyperbolic_functions(double a);
double Advanced_Mathematical_Functions(double a);
void resistance_color_coding(int band1, int band2, int band3);

// Helper function declarations
long long GCD(long long a, long long b);
long long LCM(long long a, long long b);
double factorial(long long n);

// Type definitions
typedef int num;
typedef int Band1, Band2, Band3;
// Mathematical constant
#define M_PI 3.14159265358979323846

#endif