#include <stdio.h>
#include <stdlib.h>
#include "myHeader.h"

int main()
{
    int dist, fuel;
    printf("Enter the distance travelled: ");
    scanf("%d Kms", &dist);
    printf("Enter fuel consumed: ");
    scanf("%d L", &fuel);

    cal_mileage(dist, fuel);
}
