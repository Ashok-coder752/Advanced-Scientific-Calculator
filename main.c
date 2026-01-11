#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "functions.h"
#include "constants.h"

// Resistance color coding structures
struct
{
       int black, brown, red, orange, yellow, green, blue, violet, grey;
} R1 = {0, 1, 2, 3, 4, 5, 6, 7, 8};

struct
{
       int black, brown, red, orange, yellow, green, blue, violet;
} R2 = {0, 1, 2, 3, 4, 5, 6, 7};

struct
{
       double black, brown, red, orange, yellow, green, blue, violet, grey, gold, silver;
} R3 = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 0.1, 0.01};

// Function prototypes
void displayMainMenu();
void displayContinueMenu();
void displayPhysicalConstants();

int main()
{
       double a, b, c;
       num choice;
       int continueChoice = 1;

       printf("\n========================================\n");
       printf("   ADVANCED SCIENTIFIC CALCULATOR\n");
       printf("========================================\n\n");

       while (continueChoice == 1)
       {
              displayMainMenu();
              printf("Select an option (1-8): ");
              scanf("%d", &choice);
              printf("\n");

              switch (choice)
              {
              case 1:
                     printf("--- Arithmetic Operations ---\n");
                     printf("Enter two numbers: ");
                     scanf("%lf %lf", &a, &b);
                     Arithmetic_Operation(a, b);
                     break;
              case 2:
                     printf("--- Trigonometric Functions ---\n");
                     printf("Enter number (in radians): ");
                     scanf("%lf", &a);
                     Trigonometric_Function(a);
                     break;
              case 3:
                     printf("--- Exponential and Logarithmic Functions ---\n");
                     printf("Enter number: ");
                     scanf("%lf", &a);
                     Exponential_and_Logarithmic_Functions(a);
                     break;
              case 4:
                     printf("--- Hyperbolic Functions ---\n");
                     printf("Enter number: ");
                     scanf("%lf", &a);
                     hyperbolic_functions(a);
                     break;
              case 5:
                     printf("--- Other Mathematical Functions ---\n");
                     printf("Enter two numbers: ");
                     scanf("%lf %lf", &a, &b);
                     Other_mathematical_Functions(a, b);
                     break;
              case 6:
                     printf("--- Advanced Mathematical Functions ---\n");
                     printf("Enter number: ");
                     scanf("%lf", &a);
                     Advanced_Mathematical_Functions(a);
                     break;
              case 7:
                     printf("--- Physical Constants ---\n");
                     displayPhysicalConstants();
                     break;
              case 8:
                     printf("---Resistance color coding---\n");
                     int band1, band2, band3;
                     printf("Enter the first band (0-8), second band (0-7), third band (0-10): ");
                     scanf("%d %d %d", &band1, &band2, &band3);
                     resistance_color_coding(band1, band2, band3);
                     break;
              default:
                     printf("Invalid choice. Please select a valid option (1-8).\n");
              }

              printf("\n");
              displayContinueMenu();
              scanf("%d", &continueChoice);
       }

       printf("\n========================================\n");
       printf("  Thank you for using the Calculator!\n");
       printf("========================================\n");
       return 0;
}

void displayMainMenu()
{
       printf("========================================\n");
       printf("1. Arithmetic Operations\n");
       printf("2. Trigonometric Functions\n");
       printf("3. Exponential and Logarithmic Functions\n");
       printf("4. Hyperbolic Functions\n");
       printf("5. Other Mathematical Functions\n");
       printf("6. Advanced Mathematical Functions\n");
       printf("7. View Physical Constants\n");
       printf("8. Resistance Color Coding\n");
       printf("========================================\n");
}

void displayContinueMenu()
{
       printf("Do you want to continue? (1=Yes, 0=No): ");
}

double Arithmetic_Operation(double a, double b)
{
       num choice;
       double result = 0;

       printf("\n--- Select Arithmetic Operation ---\n");
       printf("1. Addition\n");
       printf("2. Subtraction\n");
       printf("3. Multiplication\n");
       printf("4. Division\n");
       printf("5. Modulus (Integer only)\n");
       printf("6. GCD (Greatest Common Divisor)\n");
       printf("7. LCM (Least Common Multiple)\n");
       printf("Enter your choice (1-7): ");
       scanf("%d", &choice);

       switch (choice)
       {
       case 1:
              result = a + b;
              printf("\nAddition: %.10g + %.10g = %.10g\n", a, b, result);
              break;
       case 2:
              result = a - b;
              printf("\nSubtraction: %.10g - %.10g = %.10g\n", a, b, result);
              break;
       case 3:
              result = a * b;
              printf("\nMultiplication: %.10g × %.10g = %.10g\n", a, b, result);
              break;
       case 4:
              if (b != 0)
              {
                     result = a / b;
                     printf("\nDivision: %.10g ÷ %.10g = %.10g\n", a, b, result);
              }
              else
              {
                     printf("\nError: Division by zero!\n");
              }
              break;
       case 5:
              if ((int)b != 0)
              {
                     result = (int)a % (int)b;
                     printf("\nModulus: %d %% %d = %.0f\n", (int)a, (int)b, result);
              }
              else
              {
                     printf("\nError: Division by zero!\n");
              }
              break;
       case 6:
              result = GCD((long long)a, (long long)b);
              printf("\nGCD of %d and %d = %.0f\n", (int)a, (int)b, result);
              break;
       case 7:
              result = LCM((long long)a, (long long)b);
              printf("\nLCM of %d and %d = %.0f\n", (int)a, (int)b, result);
              break;
       default:
              printf("\nSyntax Error: Invalid operation!\n");
       }
       return result;
}

double Trigonometric_Function(double a)
{
       num choice;
       double result = 0;

       printf("\n--- Select Trigonometric Function ---\n");
       printf("1. Sine (sin)\n");
       printf("2. Cosine (cos)\n");
       printf("3. Tangent (tan)\n");
       printf("4. Cosecant (csc)\n");
       printf("5. Secant (sec)\n");
       printf("6. Cotangent (cot)\n");
       printf("7. Inverse Sine (arcsin)\n");
       printf("8. Inverse Cosine (arccos)\n");
       printf("9. Inverse Tangent (arctan)\n");
       printf("10. Convert Degrees to Radians\n");
       printf("11. Convert Radians to Degrees\n");
       printf("Enter your choice (1-11): ");
       scanf("%d", &choice);

       switch (choice)
       {
       case 1:
              result = sin(a);
              printf("\nSine of %.10g rad = %.15f\n", a, result);
              break;
       case 2:
              result = cos(a);
              printf("\nCosine of %.10g rad = %.15f\n", a, result);
              break;
       case 3:
              result = tan(a);
              printf("\nTangent of %.10g rad = %.15f\n", a, result);
              break;
       case 4:
              if (sin(a) != 0)
              {
                     result = 1.0 / sin(a);
                     printf("\nCosecant of %.10g rad = %.15f\n", a, result);
              }
              else
              {
                     printf("\nError: Cosecant undefined!\n");
              }
              break;
       case 5:
              if (cos(a) != 0)
              {
                     result = 1.0 / cos(a);
                     printf("\nSecant of %.10g rad = %.15f\n", a, result);
              }
              else
              {
                     printf("\nError: Secant undefined!\n");
              }
              break;
       case 6:
              if (tan(a) != 0)
              {
                     result = 1.0 / tan(a);
                     printf("\nCotangent of %.10g rad = %.15f\n", a, result);
              }
              else
              {
                     printf("\nError: Cotangent undefined!\n");
              }
              break;
       case 7:
              if (a >= -1 && a <= 1)
              {
                     result = asin(a);
                     printf("\nInverse Sine of %.10g = %.15f rad\n", a, result);
              }
              else
              {
                     printf("\nError: Input must be between -1 and 1!\n");
              }
              break;
       case 8:
              if (a >= -1 && a <= 1)
              {
                     result = acos(a);
                     printf("\nInverse Cosine of %.10g = %.15f rad\n", a, result);
              }
              else
              {
                     printf("\nError: Input must be between -1 and 1!\n");
              }
              break;
       case 9:
              result = atan(a);
              printf("\nInverse Tangent of %.10g = %.15f rad\n", a, result);
              break;
       case 10:
              result = a * (M_PI / 180.0);
              printf("\n%.10g degrees = %.15f radians\n", a, result);
              break;
       case 11:
              result = a * (180.0 / M_PI);
              printf("\n%.10g radians = %.15f degrees\n", a, result);
              break;
       default:
              printf("\nMath Error: Invalid operation!\n");
       }
       return result;
}

double hyperbolic_functions(double a)
{
       num choice;
       double result = 0;

       printf("\n--- Select Hyperbolic Function ---\n");
       printf("1. Hyperbolic Sine (sinh)\n");
       printf("2. Hyperbolic Cosine (cosh)\n");
       printf("3. Hyperbolic Tangent (tanh)\n");
       printf("4. Hyperbolic Cosecant (csch)\n");
       printf("5. Hyperbolic Secant (sech)\n");
       printf("6. Hyperbolic Cotangent (coth)\n");
       printf("7. Inverse Hyperbolic Sine (asinh)\n");
       printf("8. Inverse Hyperbolic Cosine (acosh)\n");
       printf("9. Inverse Hyperbolic Tangent (atanh)\n");
       printf("Enter your choice (1-9): ");
       scanf("%d", &choice);

       switch (choice)
       {
       case 1:
              result = sinh(a);
              printf("\nHyperbolic Sine of %.10g = %.15f\n", a, result);
              break;
       case 2:
              result = cosh(a);
              printf("\nHyperbolic Cosine of %.10g = %.15f\n", a, result);
              break;
       case 3:
              result = tanh(a);
              printf("\nHyperbolic Tangent of %.10g = %.15f\n", a, result);
              break;
       case 4:
              if (sinh(a) != 0)
              {
                     result = 1.0 / sinh(a);
                     printf("\nHyperbolic Cosecant of %.10g = %.15f\n", a, result);
              }
              else
              {
                     printf("\nError: Hyperbolic Cosecant undefined!\n");
              }
              break;
       case 5:
              if (cosh(a) != 0)
              {
                     result = 1.0 / cosh(a);
                     printf("\nHyperbolic Secant of %.10g = %.15f\n", a, result);
              }
              else
              {
                     printf("\nError: Hyperbolic Secant undefined!\n");
              }
              break;
       case 6:
              if (tanh(a) != 0)
              {
                     result = 1.0 / tanh(a);
                     printf("\nHyperbolic Cotangent of %.10g = %.15f\n", a, result);
              }
              else
              {
                     printf("\nError: Hyperbolic Cotangent undefined!\n");
              }
              break;
       case 7:
              result = asinh(a);
              printf("\nInverse Hyperbolic Sine of %.10g = %.15f\n", a, result);
              break;
       case 8:
              if (a >= 1)
              {
                     result = acosh(a);
                     printf("\nInverse Hyperbolic Cosine of %.10g = %.15f\n", a, result);
              }
              else
              {
                     printf("\nError: Input must be >= 1!\n");
              }
              break;
       case 9:
              if (a > -1 && a < 1)
              {
                     result = atanh(a);
                     printf("\nInverse Hyperbolic Tangent of %.10g = %.15f\n", a, result);
              }
              else
              {
                     printf("\nError: Input must be between -1 and 1!\n");
              }
              break;
       default:
              printf("\nMath Error: Invalid operation!\n");
       }
       return result;
}

double Exponential_and_Logarithmic_Functions(double a)
{
       num choice;
       double result = 0;

       printf("\n--- Select Exponential and Logarithmic Function ---\n");
       printf("1. Exponential Function (e^x)\n");
       printf("2. Natural Logarithm (ln x)\n");
       printf("3. Common Logarithm (log10 x)\n");
       printf("4. Binary Logarithm (log2 x)\n");
       printf("5. Logarithm with custom base\n");
       printf("6. 10^x\n");
       printf("7. 2^x\n");
       printf("Enter your choice (1-7): ");
       scanf("%d", &choice);

       switch (choice)
       {
       case 1:
              result = exp(a);
              printf("\nExponential (e^%.10g) = %.15f\n", a, result);
              break;
       case 2:
              if (a > 0)
              {
                     result = log(a);
                     printf("\nNatural Logarithm (ln %.10g) = %.15f\n", a, result);
              }
              else
              {
                     printf("\nError: Logarithm of non-positive number!\n");
              }
              break;
       case 3:
              if (a > 0)
              {
                     result = log10(a);
                     printf("\nCommon Logarithm (log10 %.10g) = %.15f\n", a, result);
              }
              else
              {
                     printf("\nError: Logarithm of non-positive number!\n");
              }
              break;
       case 4:
              if (a > 0)
              {
                     result = log2(a);
                     printf("\nBinary Logarithm (log2 %.10g) = %.15f\n", a, result);
              }
              else
              {
                     printf("\nError: Logarithm of non-positive number!\n");
              }
              break;
       case 5:
       {
              double base;
              printf("Enter the base: ");
              scanf("%lf", &base);
              if (a > 0 && base > 0 && base != 1)
              {
                     result = log(a) / log(base);
                     printf("\nLogarithm of %.10g base %.10g = %.15f\n", a, base, result);
              }
              else
              {
                     printf("\nError: Invalid base or argument!\n");
              }
       }
       break;
       case 6:
              result = pow(10, a);
              printf("\n10^%.10g = %.15f\n", a, result);
              break;
       case 7:
              result = pow(2, a);
              printf("\n2^%.10g = %.15f\n", a, result);
              break;
       default:
              printf("\nMath Error: Invalid operation!\n");
       }
       return result;
}

double Other_mathematical_Functions(double a, double b)
{
       num choice;
       double result = 0;

       printf("\n--- Select Other Mathematical Function ---\n");
       printf("1. Square Root\n");
       printf("2. Cube Root\n");
       printf("3. Power Function (a^b)\n");
       printf("4. Absolute Value\n");
       printf("5. Floor Function\n");
       printf("6. Ceiling Function\n");
       printf("7. Rounding Function\n");
       printf("8. Factorial\n");
       printf("9. Nth Root\n");
       printf("Enter your choice (1-9): ");
       scanf("%d", &choice);

       switch (choice)
       {
       case 1:
              if (a >= 0)
              {
                     result = sqrt(a);
                     printf("\nSquare Root of %.10g = %.15f\n", a, result);
              }
              else
              {
                     printf("\nError: Cannot compute square root of negative number!\n");
              }
              break;
       case 2:
              result = cbrt(a);
              printf("\nCube Root of %.10g = %.15f\n", a, result);
              break;
       case 3:
              result = pow(a, b);
              printf("\n%.10g ^ %.10g = %.15f\n", a, b, result);
              break;
       case 4:
              result = fabs(a);
              printf("\nAbsolute Value of %.10g = %.15f\n", a, result);
              break;
       case 5:
              result = floor(a);
              printf("\nFloor of %.10g = %.0f\n", a, result);
              break;
       case 6:
              result = ceil(a);
              printf("\nCeiling of %.10g = %.0f\n", a, result);
              break;
       case 7:
              result = round(a);
              printf("\nRound of %.10g = %.0f\n", a, result);
              break;
       case 8:
              if (a >= 0 && a == (long long)a)
              {
                     result = factorial((long long)a);
                     printf("\nFactorial of %.0f = %.0f\n", a, result);
              }
              else
              {
                     printf("\nError: Factorial requires non-negative integer!\n");
              }
              break;
       case 9:
              if (b != 0 && a > 0)
              {
                     result = pow(a, 1.0 / b);
                     printf("\n%.0f-th root of %.10g = %.15f\n", b, a, result);
              }
              else
              {
                     printf("\nError: Invalid parameters for nth root!\n");
              }
              break;
       default:
              printf("\nMath Error: Invalid operation!\n");
       }
       return result;
}

double Advanced_Mathematical_Functions(double a)
{
       num choice;
       double result = 0;

       printf("\n--- Select Advanced Mathematical Function ---\n");
       printf("1. Gamma Function\n");
       printf("2. Error Function (erf)\n");
       printf("3. Complementary Error Function (erfc)\n");
       printf("4. Ceiling minus Floor\n");
       printf("5. Fractional Part\n");
       printf("6. Sign Function\n");
       printf("Enter your choice (1-6): ");
       scanf("%d", &choice);

       switch (choice)
       {
       case 1:
              result = tgamma(a);
              printf("\nGamma Function of %.10g = %.15f\n", a, result);
              break;
       case 2:
              result = erf(a);
              printf("\nError Function of %.10g = %.15f\n", a, result);
              break;
       case 3:
              result = erfc(a);
              printf("\nComplementary Error Function of %.10g = %.15f\n", a, result);
              break;
       case 4:
              result = ceil(a) - floor(a);
              printf("\nCeiling(%.10g) - Floor(%.10g) = %.0f\n", a, a, result);
              break;
       case 5:
              result = a - floor(a);
              printf("\nFractional part of %.10g = %.15f\n", a, result);
              break;
       case 6:
              if (a > 0)
                     result = 1;
              else if (a < 0)
                     result = -1;
              else
                     result = 0;
              printf("\nSign of %.10g = %.0f\n", a, result);
              break;
       default:
              printf("\nMath Error: Invalid operation!\n");
       }
       return result;
}

// Helper functions
long long GCD(long long a, long long b)
{
       if (b == 0)
              return a;
       return GCD(b, a % b);
}

long long LCM(long long a, long long b)
{
       return (a / GCD(a, b)) * b;
}

double factorial(long long n)
{
       if (n < 0)
              return -1;
       if (n == 0 || n == 1)
              return 1;
       double result = 1;
       for (long long i = 2; i <= n; i++)
              result *= i;
       return result;
}

void displayPhysicalConstants()
{
       printf("\n========== PHYSICAL CONSTANTS ==========\n\n");

       printf("--- Electromagnetic Constants ---\n");
       printf("Speed of light: %.8e m/s\n", (double)Speed_of_light);
       printf("Planck's constant: %.8e J·s\n", (double)Plancks_constant);
       printf("Reduced Planck's constant: %.8e J·s\n", (double)Reduced_Plancks_constant);
       printf("Gravitational constant: %.5e m³/(kg·s²)\n", (double)Gravitational_constant);
       printf("Vacuum permittivity: %.8e F/m\n", (double)Vaccuum_permittivity);
       printf("Vacuum permeability: %.8e H/m\n", (double)Vaccuum_permeability);
       printf("Characteristic impedance of vacuum: %.6f Ω\n", (double)Characteristic_impedance_of_vacuum);
       printf("Elementary charge: %.8e C\n", (double)Elementary_charge);

       printf("\n--- Quantum & Atomic Constants ---\n");
       printf("Bohr radius: %.8e m\n", (double)Bohr_radius);
       printf("Compton wavelength: %.8e m\n", (double)Compton_wavelength);
       printf("Rydberg constant: %.6f m⁻¹\n", (double)Rydberg_constant);
       printf("Fine structure constant: %.8e\n", (double)Fine_structure_constant);

       printf("\n--- Particle Masses ---\n");
       printf("Electron mass: %.8e kg\n", (double)Electron_mass);
       printf("Proton mass: %.8e kg\n", (double)Proton_mass);
       printf("Neutron mass: %.8e kg\n", (double)Neutron_mass);
       printf("Muon mass: %.8e kg\n", (double)Muon_mass);

       printf("\n--- Planck Scale Constants ---\n");
       printf("Planck length: %.8e m\n", (double)Planck_length);
       printf("Planck time: %.8e s\n", (double)Planck_time);

       printf("\n--- Thermodynamic Constants ---\n");
       printf("Avogadro's constant: %.8e mol⁻¹\n", (double)Avogadro_constant);
       printf("Boltzmann constant: %.8e J/K\n", (double)Boltzmann_constant);
       printf("Molar gas constant: %.6f J/(mol·K)\n", (double)Molar_Gas_constant);
       printf("Faraday constant: %.6f C/mol\n", (double)Faraday_constant);
       printf("Stefan-Boltzmann constant: %.8e W/(m²·K⁴)\n", (double)Stefan_Boltzmann_constant);
       printf("Wien's displacement constant: %.8e m·K\n", (double)Wien_displacement_constant);

       printf("\n========================================\n\n");
}
void resistance_color_coding(int band1, int band2, int band3)
{
       int first_digit, second_digit;
       double multiplier, resistance_value;
       // First Band
       switch (band1)
       {
       case 0:
              first_digit = R1.black;
              break;
       case 1:
              first_digit = R1.brown;
              break;
       case 2:
              first_digit = R1.red;
              break;
       case 3:
              first_digit = R1.orange;
              break;
       case 4:
              first_digit = R1.yellow;
              break;
       case 5:
              first_digit = R1.green;
              break;
       case 6:
              first_digit = R1.blue;
              break;
       case 7:
              first_digit = R1.violet;
              break;
       case 8:
              first_digit = R1.grey;
              break;
       default:
              printf("Invalid first band color\n");
              return;
       }
       // Second Band
       switch (band2)
       {
       case 0:
              second_digit = R2.black;
              break;
       case 1:
              second_digit = R2.brown;
              break;
       case 2:
              second_digit = R2.red;
              break;
       case 3:
              second_digit = R2.orange;
              break;
       case 4:
              second_digit = R2.yellow;
              break;
       case 5:
              second_digit = R2.green;
              break;
       case 6:
              second_digit = R2.blue;
              break;
       case 7:
              second_digit = R2.violet;
              break;
       default:
              printf("Invalid second band color\n");
              return;
       }
       // Third Band
       switch (band3)
       {
       case 0:
              multiplier = R3.black;
              break;
       case 1:
              multiplier = R3.brown;
              break;
       case 2:
              multiplier = R3.red;
              break;
       case 3:
              multiplier = R3.orange;
              break;
       case 4:
              multiplier = R3.yellow;
              break;
       case 5:
              multiplier = R3.green;
              break;
       case 6:
              multiplier = R3.blue;
              break;
       case 7:
              multiplier = R3.violet;
              break;
       case 8:
              multiplier = R3.grey;
              break;
       case 9:
              multiplier = R3.gold;
              break;
       case 10:
              multiplier = R3.silver;
              break;
       default:
              printf("Invalid third band color\n");
              return;
       }
       resistance_value = ((first_digit * 10) + second_digit) * multiplier;
       printf("The resistance value is: %.2f Ohms\n", resistance_value);
}
