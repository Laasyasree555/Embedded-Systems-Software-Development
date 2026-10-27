/*
#include <stdio.h>
int main() {
    int i, n, temp;
    printf("enter n: ");
    scanf("%d", &n);
    for(i = 2; i<=n-1; i++)
    {
        if(n%i==0)
        {
            temp = 1;
            printf("Not a prime number\n");
            break;
        }
    }
    if(temp == 0)
        {
            printf("Prime number\n");
        }
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    int num, digit, rem, i, temp;
    printf("enter number: ");
    scanf("%d", &num);
    printf("enter digit: ");
    scanf("%d", &digit);
    while(num != 0)
    {
        rem = num%10;
        num = num/10;
        if(rem == digit)
        {
            temp = 1;
            printf("yes, its present\n");
            break;
        }
    }
    if(temp == 0)
        {
            printf("No, it is not present\n");
        }
    return 0;
}
*/