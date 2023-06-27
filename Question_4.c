#include<stdio.h>
int main()
{

    float Radius, area;

    printf("Enter the Radius of circle  R:");

    scanf("%f",&Radius);

area = 3.14*Radius*Radius;

    printf("The area of given circle A is %F and radius is %f\n", area,Radius);
    getch();
    return 0;


}
