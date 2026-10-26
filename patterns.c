/*
#include <stdio.h>
int main() {
    int i;
    for(i = 1; i<=3; i++);
    printf("%d\n", i);
}
//once it comes out of the loop whatever the variable value will be printed. answer: 4
*/
/*
#include <stdio.h>
int main() {
    int i = 3;
    while(i-->1)
    while(i-->0);
    printf("%d", i);
}
*/
/*
#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 4 ; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    int i, j;
    for(i=1; i<=4; i++)
    {
       for(j=1; j<=4; j++)
       {
        printf(" %d ", i * j);
       }
       printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    int i, j, sum;
    for(i=1; i<=4; i++)
    {
       for(j=1; j<=4; j++)
       {
        sum = i + j;
        if(sum%2==0)
        {
            printf(" 1 ");
        }
        else
        {
            printf(" 0 ");
        }
       }
       printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    int i, j;
    for(i=1; i<=4; i++)
    {
       for(j=1; j<=4; j++)
       {
        if((i == 1) || (i == 4) || (j == 1) || (j == 4))
        {
            printf(" 1 ");
        }
        else
        {
            printf(" * ");
        }
    }
    printf("\n");
}
return 0;
}
*/

/*
#include <stdio.h>
int main() {
int i, j, k = 1;
    for(i=1; i<=4; i++)
    {
       for(j=1; j<=4; j++)
       {
        printf(" %d ", k);
        k++;
       }
       printf("\n");
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main() {
    int n = 4, i, j;
    for(i=1; i<=4; i++)
    {
       for(j=1; j<=4; j++)
       {
        if(i==j)
        {
            printf(" %d ", j);
        }
        else if ((i+j == n + 1))
        {
            printf(" %d ", j);
        }
        else
        {
            printf(" - ");
        }
    }
    printf("\n");
}
return 0;
}
*/

#include <stdio.h>
int main() {
    int n = 4, i, j;
    for(i=1; i<=5; i++)
    {
       for(j=1; j<=5; j++)
       {
        if(i==j)
        {
            printf(" %d ", j);
        }
        else if ((i+j == n + 1))
        {
            printf(" %d ", j);
        }
        else
        {
            printf(" - ");
        }
    }
    printf("\n");
}
return 0;
}