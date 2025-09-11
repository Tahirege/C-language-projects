#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height,base_length,area;
//Variables tanımla.
    printf("What is the height of triangle: \n");
    scanf("%f",&height);
//Üçgenin yüksekliğini kullanıcıdan al.
    printf("What is the base length of the triangle: \n"); 
    scanf("%f",&base_length);
//Üçgenin taban uzunluğunu kullanıcıdan al.
    area = height * base_length / 2.0; 
//Alanı hesapla
    printf("The area of the triangle is %.2f\n",area); 
//Alanı kullanıcıya göster.    
    return 0;
//Programı durdur.    
}