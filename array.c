/*
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\n", arr[3]);
    arr[3] = 20;
    printf("%d\n", arr[3]);
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    int arr[5], i;
    printf("enter n values: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    char arr[11];
    int i;
    printf("Enter name:");
    for(i = 0; i<11; i++)
    {
        scanf("%c", &arr[i]);
    }
    for(i = 0; i<11; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
    return 0;
}
*/


/*
#include <stdio.h>
int main() {
    int size, i;
    printf("Enter your size: ");
    scanf("%d", &size);
    char arr[size];
    printf("Enter name: ");
    for(i = 0; i<size; i++)
    {
        scanf(" %c", &arr[i]);
    }
    for(i = 0; i<size; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, sum = 0, i;
    for(i = 0; i<10; i++)
    {
        sum = sum + arr[i];
    }
        printf("%d", sum);
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    int sum, avg, i, arr[5] = {1, 2, 3, 4, 5};
    for(i = 0; i<5; i++)
    {
        sum = sum + arr[i];
        avg = (sum)/5;
    }
    printf("sum: %d\navg: %d\n", sum, avg);
    return 0;
}
*/

/*
#include <stdio.h>
int main() {
    int arr[5], i, sum = 0, avg;
    printf("enter n values: ");
    for(i = 0; i<5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        avg = (sum)/5;
    }
    printf("sum: %d\navg: %d\n", sum, avg);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int size, i;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        arr[i] = arr[i] * arr[i];
        printf(" %d ", arr[i]);
    }
    printf("\n");
    return 0;
}
*/

#include <stdio.h>
int main() {
    int size, count, even, odd, i;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        even = arr[i]%2 == 0;
        count++;
        odd = arr[i]%2 == 1;
        count++;
    }
    printf("even count: %d ", even);
    printf("odd count: %d ", odd);
    printf("\n");
    return 0;
}