#include <stdio.h>
#include <math.h>
#include <ctype.h>

// Functions
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return (b != 0) ? a / b : NAN; }
double power(double a, double b) { return pow(a, b); }
double sine(double a) { return sin(a * M_PI / 180); }   // degrees
double cosine(double a) { return cos(a * M_PI / 180); }
double tangent(double a) { return tan(a * M_PI / 180); }
double logarithm(double a) { return (a > 0) ? log(a) : NAN; }
double log10_custom(double a) { return (a > 0) ? log10(a) : NAN; }
double square_root(double a) { return (a >= 0) ? sqrt(a) : NAN; }
double exponential(double a) { return exp(a); }
long long factorial(int n) {
    if (n < 0) return -1;
    long long result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}

void menu() {
    printf("\n===== Symbol-Based Scientific Calculator =====\n");
    printf(" +  Addition\n");
    printf(" -  Subtraction\n");
    printf(" *  Multiplication\n");
    printf(" /  Division\n");
    printf(" ^  Power (x^y)\n");
    printf(" !  Factorial (n!)\n");
    printf(" s  Sine (deg)\n");
    printf(" c  Cosine (deg)\n");
    printf(" t  Tangent (deg)\n");
    printf(" l  Natural log (ln)\n");
    printf(" g  Log base 10\n");
    printf(" r  Square Root\n");
    printf(" e  Exponential (e^x)\n");
    printf(" q  Quit\n");
    printf("Choose an operator: ");
}

int main() {
    char op;
    double a, b, result;
    long long fact;

    while (1) {
        menu();
        scanf(" %c", &op);  // notice space before %c to ignore whitespace

        switch (op) {
            case '+':
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.4lf\n", add(a, b));
                break;

            case '-':
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.4lf\n", subtract(a, b));
                break;

            case '*':
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.4lf\n", multiply(a, b));
                break;

            case '/':
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = divide(a, b);
                if (isnan(result)) printf("Error: Division by zero!\n");
                else printf("Result = %.4lf\n", result);
                break;

            case '^':
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("%.2lf ^ %.2lf = %.4lf\n", a, b, power(a, b));
                break;

            case '!':
                printf("Enter an integer: ");
                scanf("%lf", &a);
                fact = factorial((int)a);
                if (fact < 0) printf("Error: Factorial of negative number!\n");
                else printf("%d! = %lld\n", (int)a, fact);
                break;

            case 's':
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("sin(%.2lf°) = %.4lf\n", a, sine(a));
                break;

            case 'c':
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("cos(%.2lf°) = %.4lf\n", a, cosine(a));
                break;

            case 't':
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("tan(%.2lf°) = %.4lf\n", a, tangent(a));
                break;

            case 'l':
                printf("Enter number: ");
                scanf("%lf", &a);
                result = logarithm(a);
                if (isnan(result)) printf("Error: ln undefined!\n");
                else printf("ln(%.2lf) = %.4lf\n", a, result);
                break;

            case 'g':
                printf("Enter number: ");
                scanf("%lf", &a);
                result = log10_custom(a);
                if (isnan(result)) printf("Error: log10 undefined!\n");
                else printf("log10(%.2lf) = %.4lf\n", a, result);
                break;

            case 'r':
                printf("Enter number: ");
                scanf("%lf", &a);
                result = square_root(a);
                if (isnan(result)) printf("Error: sqrt undefined!\n");
                else printf("sqrt(%.2lf) = %.4lf\n", a, result);
                break;

            case 'e':
                printf("Enter number: ");
                scanf("%lf", &a);
                printf("e^(%.2lf) = %.4lf\n", a, exponential(a));
                break;

            case 'q':
                printf("Exiting... Goodbye!\n");
                return 0;

            default:
                printf("Invalid operator! Try again.\n");
        }
    }
}
