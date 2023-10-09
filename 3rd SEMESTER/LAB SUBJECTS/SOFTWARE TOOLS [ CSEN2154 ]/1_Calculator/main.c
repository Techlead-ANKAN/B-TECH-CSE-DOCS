#include <stdio.h>
#include <stdlib.h>
#include "myHeader.h"

int main()
{
    int x,y,op;
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);

    printf("Enter operation code: ");
    scanf("%d", &op);

    if (op == 1)
        add(x,y);
    else if (op == 2)
        sub(x,y);
    else if (op == 3)
        multiply(x,y);
    else
        printf("Invalid Operation code");
}
