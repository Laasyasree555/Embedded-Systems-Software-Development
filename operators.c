// to print only the last digit of given number
/*
#include <stdio.h>
int main() 
{
    int num, rem;
    printf("Enter value: ");
    scanf("%d", &num);
    rem = num%10;
    printf("output: %d\n", rem);
    return 0;
}
*/
//square, cube values of a given number
/*
#include <stdio.h>
int main() {
    int num, square, cube;
    printf("enter value: ");
    scanf(" %d", &num);
    square = num * num;
    cube = num *num *num;
    printf("square = %d, cube = %d\n", square, cube);
    return 0;
}
*/

//Relational operators
/*
#include <stdio.h>
int main() {
    printf("%d\n", 10 > 20);
    return 0;
}
*/
/*
//swap 2 numbers
#include <stdio.h>
int main() {
    int n1, n2, temp;
    printf("enter n1, n2: ");
    scanf("%d %d", &n1, &n2);
    temp =n1;
    n1 = n2;
    n2= temp;
    printf("n1 = %d, n2 = %d", n1, n2);
    return 0;
}
*/

//sqaure, cube of a given number using if condition
/*
#include <stdio.h>
int main() {
    int num, square, cube;
    printf("enter value: ");
    scanf("%d", &num);
    if(num >0)
    {
        square = num * num;
        cube = num * num* num;
        printf("square = %d, cube = %d\n", square, cube);
        return 0;
    }
}
    */

//if-else condition
/*
#include <stdio.h>
int main() {
    int num;
    printf("enter value: ");
    scanf("%d", &num);
    if(num>0)
    {
        printf("num is true");
    }
    else
    {
        printf("num is false");
    }
    return 0;
}
*/

//to check if the given number is even or odd
/*
#include <stdio.h>
int main() {
    int num, even;
    printf("enter num: ");
    scanf("%d", &num);
    if(num%2 == 0)
    {
        even= (num%2);
        printf("num is even");
    }
    else
    {
        printf("num is odd");
    }
    return 0;
}
    */

//to print the total amount after discount
/*
#include <stdio.h>
int main() {
    int amount, discount;
    printf("enter amount: ");
    scanf("%d", &amount);
    if (amount > 1000)
    {
        discount = (10*amount)/100;
        amount = amount - discount;
        printf("Total price: %d\n", amount);
        printf("Discounted amount: %d\n", discount);
    }
    else{
        printf("Total amount: %d\n", amount);
    }
    return 0;
}
*/

//avg value using if-else condition
/*
#include <stdio.h>
int main() {
    int n1, n2, n3, avg;
    printf("enter values: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    avg = (n1 + n2 + n3)/3;
    printf("avg value: %d\n", avg);
    if(avg>35)
    {
        printf("pass\n");
    }
    else
    {
        printf("fail\n");
    }
    return 0;
}
*/

//if else-if condition
/*
#include <stdio.h>
int main() {
    int num;
    printf("enter num: ");
    scanf("%d", &num);
    if(num>0)
    {
        printf("positive\n");
    }
    else if(num < 0)
    {
        printf("negative\n");
    }
    else
    {
        printf("zero\n");
    }
    return 0;
}
*/

//ATM Machine using if else-if condition
/*
#include <stdio.h>
int main() {
    int default_amount, withdrawal_amount;
    default_amount = 1000;
    printf("enter withdrawal amount: ");
    scanf("%d", &withdrawal_amount);
    if (withdrawal_amount <= 0)
    {
        printf("Invalid\n");
    }
    else if (withdrawal_amount > 1000)
    {
        printf("Insufficient\n");
    }
    else
    {
        printf("Valid\n");
    }
    return 0;
}
*/

//marks question using if else-if condition
/*
#include <stdio.h>
int main() {
    int marks;
    printf("enter marks: ");
    scanf("%d", &marks);
    if (marks>90 && marks<100)
    {
        printf("A\n");
    }
    else if(marks>80 && marks<89)
    {
        printf("B\n");
    }
    else if(marks>70 && marks<79)
    {
        printf("C\n");
    }
     else if(marks>60 && marks<69)
    {
        printf("D\n");
    }
     else if(marks>50 && marks<59)
    {
        printf("E\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}
*/
