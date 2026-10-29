//while loop syntax check
/*
#include <stdio.h>
int main() {
    int i = 1;
    while(i <= 3)
    {
        printf("hello laasya sree\n");
        i++;
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    int i = 1;
    while(i<=10)
    {
        if(i%2==0)
        printf("%d\n", i);
        i++;
    }
    return 0;
}
*/
// sum of n natural numbers
/*
#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
*/

//22/10/26
//factorial value of n
/*
#include <stdio.h>
int main () {
    int n, i = 1, factorial = 1;
    printf("enter a number: ");
    scanf("%d", &n);
    while(i<=n)
    {
        factorial = factorial*i;
        i++;
    }
    printf("factorial value =  %d\n", factorial);
    return 0;
}
*/

//count no. of digits in a given number
/*
#include <stdio.h>
int main() {
    int n, rem, count=0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n>0)
    {
        rem = n%10;
        n = n/10;
        count++;

    }
    printf("count: %d\n", count);
    return 0;
}
*/

//WAP to find sum of digits
/*
#include <stdio.h>
int main() {
    int a, rem, sum;
    printf("enter number: ");
    scanf("%d", &a);
    while(a!=0)
    {
        rem = a%10;
        sum = sum+rem;
        a = a/10;
    }
    printf("sum: %d", sum);
    return 0;
}
*/

//count even digits in a number
/*
#include <stdio.h>
int main() {
    int num, rem, count =0;
    printf("enter number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        rem = num%10;
        if(num%2==0)
        {
            count++;
        }
        num = num/10;
    }
    printf("sum of even numbers: %d", count);
    return 0;
}
*/

//find the sum of even digits
/*
#include <stdio.h>
int main() {
    int n, rem, sum=0;
    printf("enter n: ");
    scanf("%d", &n);
    while(n!=0)
    {
        rem = n%10;
        if(rem%2==0)
        {
            sum = sum + rem;
        }
        n = n/10;
    }
     printf("sum of even digits: %d", sum);
        return 0;
}
*/

//find the largest digit in the given number
/*
#include <stdio.h>
int main() {
    int n, largest = 0, rem;
    printf("enter number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        rem = n%10;
        if(rem>largest)
        {
            largest = rem;
        }
        n = n/10;
    }
    printf("output: %d", largest);
    return 0;
}
*/

//reverse the given number
/*
#include <stdio.h>
int main() {
    int n, rem, reverse = 0;
    printf("enter number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        rem = n%10;
        reverse = reverse * 10 + rem;
        n = n/10;
    }
    printf("reverse value: %d", reverse);
    return 0;
}
*/

//palindrome or not

/*
#include <stdio.h>
int main() {
    int n, rem, reverse = 0, original_num = 0;
    printf("enter number: ");
    scanf("%d", &n);
    original_num = n;
    while(n!=0)
    {
        rem = n%10;
        reverse = reverse * 10 + rem;
        n = n/10;
    }
    if(reverse == original_num)
    {
        printf("it is a palindrome\n");
    }
    else{
        printf("it is not a palindrome\n");
    }
    return 0;
}
*/

//Armstrong number
/*
#include <stdio.h>
int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);

*/

//Do while loop
/*
#include <stdio.h>
int main() {
    char op, option;
    int a, b;
    do{
        printf("enter operator: ");
        scanf(" %c", &op);
        printf("enter a and b: ");
        scanf("%d %d", &a, &b);
        switch(op)
        {
            case '+': printf("%d\n", a+b);
            break;
            case '-': printf("%d\n", a-b);
            break;
            case '*': printf("%d\n", a*b);
            break;
            case '%': printf("%d\n", a/b);
            break;
            default: printf("Invalid\n");
        }
        printf("Do you want to continue? ");
        scanf(" %c", &option);

    }
    while(option == 'y');
    return 0;
}
*/

//password
/*
#include <stdio.h>
int main() {
    int pin = 1234;
    do
    {
        printf("enter pin: ");
        scanf("%d", &pin);
        if(pin != 1234)
        {
            printf("enter again: ");
            scanf("%d", &pin);
        }
    }
    while(pin != 1234);
    printf("correct pin\n");
    return 0;
}
*/ 
/*
#include <stdio.h>
int main() {
    int i = 1;
    while(i<=5)
    {
        if(i==4)
        break;

        printf("%d", i);
        i++;
    }
    return 0;
}
*/

#include <stdio.h>
int main() {
    int month;
    printf("enter month number: ");
    scanf("%d", &month);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31 days\n");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30 days\n");
        break;
        case 2: printf("28 days\n");
        break;
        default: printf("Invalid month\n");
    }
    return 0;
}