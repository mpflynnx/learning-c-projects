#include <stdio.h>

double getDouble()
{
    double d = 0;
    printf("Enter a double value: ");
    scanf_s("%lf", &d);
    return d;
}

char getOperator()
{
    char e = 'q'; // Used to clear the scanf buffer
    scanf_s("%c", &e, 1); // Used to clear the scanf buffer

    printf("Enter +, -, *, or /: ");
    char c;
    scanf_s("%c", &c, 1);
    return c;
}

void printResult(double num1, char c, double num2)
{
    switch (c)
    {
    case '+':
        printf("\n %lf + %lf is %lf", num1, num2, (num1 +  num2));
        break;
    case '-':
        printf("\n %lf - %lf is %lf", num1, num2, (num1 - num2));
        break;
    case '/':
        printf("\n %lf / %lf is %lf", num1, num2, (num1 / num2));
        break;
    case '*':
        printf("\n %lf * %lf is %lf", num1, num2, (num1 * num2));
        break;
    }

}


int main(void)
{
    double num1 = getDouble();
    double num2 = getDouble();
    char c = getOperator();
    printResult(num1, c, num2);
    return 0;
}
