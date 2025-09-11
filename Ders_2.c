#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num1;
    float num2;
    printf("Karekokunu almak istediginiz sayiyi secin: \n");
    scanf("%d",&num1);
    num2 = sqrt(num1);
    printf("%f\n",num2);
    return 0;

}
