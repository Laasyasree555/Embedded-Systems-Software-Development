//simple calculator
/*
#include <stdio.h>
int main () {
    double a, b;
    printf("enter values of a, b: ");
    scanf("%lf %lf", &a, &b);
    char op;
    printf("enter operator: ");
    scanf(" %c", &op);
    switch(op)
    {
        case '+': printf("a+b = %lf\n", a+b);
        break;
        case '-': printf("a-b = %lf\n", a-b);
        break;
        case '*': printf("a*b = %lf\n", a*b);
        break;
        case '%': printf("a/b = %lf\n", a/b);
        break;
        default: printf("Invalid");
        break;
    }
    return 0;
}
*/

//check whether the given year is leap year or not
/*
#include <stdio.h>
int main () {
    int year;
    printf("enter year: ");
    scanf("%d", &year);
    if(year%4 == 0 && year%100 != 0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n",year);
    }
    return 0;
}
*/

//right angle triangle with 3 integers
/*
#include <stdio.h>
int main () {
    int a, b, c;
    printf("enter values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    if((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b))
    {
        printf("It is a right angle triangle\n");
    }
    else
    {
        printf("It is not a right angle triangle\n");
    }
    return 0;
}
*/

//Uppercase/lower case/special character along with ASCII Value
/*
#include <stdio.h>
int main () {
    char a;
    printf("enter the character: ");
    scanf("%c", &a);
    printf("ASCII Value: %d\n", a);
    if(a >='A' && a <= 'Z')
    {
        printf("UPPER CASE\n");
    }
    else if(a >= 'a' && a <= 'z')
    {
        printf("lower case\n");
    }
    else if(a >= '0' && a <= '9')
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
    return 0;
}
*/