#include<stdio.h>
#define PI 3.14
float main()
{
    float radius, area;
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    area = PI*radius*radius;
    printf("Area of the circle : %0.4f\n", area);
    return 0;
}