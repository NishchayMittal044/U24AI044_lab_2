// PROGRAM TO READ THREE NOS. AND PRINT MAX.
#include <stdio.h>
int main()
{
    int num1, num2, num3, max;
    printf("Enter the three numbers\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    max = num1;

    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    printf("The greatest value is %d", max);

    return 0;
}