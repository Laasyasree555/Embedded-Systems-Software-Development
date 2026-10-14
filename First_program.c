// Hello World program in C
/* 
#include <stdio.h> //header line
int main() {
    printf(" Hello, World!\n");
    return 0;
}
*/


// Question 1
/*
#include <stdio.h>
int main() {
    printf(" My name is Laasya.\n I am learning C programming.\n This is my first program.\n"); 
    return 0;
}
*/

//Question 2
/*
#include <stdio.h>
int main() {
    printf(" *\n * *\n * * *\n * * * *\n * * * * *\n"); 
    return 0;
}
*/

//Question 3
/*
#include <stdio.h>
int main() {
    printf(" ****\n *  *\n *  *\n ****\n"); 
    return 0;
}
*/

//Question 4
/*
#include <stdio.h>
int main() {
    int a, b, Sum;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    Sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, Sum);
    return 0;
}
*/

//Question 5
/*
#include <stdio.h>
int main() {
    int a, b, sum, difference, product, quotient;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    return 0;
}
*/

// Question 6
#include <stdio.h>
int main() {
int a, b, length, breadth, area;
printf("Enter the length: ");
scanf("%d", &length);
printf("Enter the breadth: ");
scanf("%d", &breadth);
area = length * breadth;
printf("The area of the rectangle is: %d\n", area);
return 0;
}