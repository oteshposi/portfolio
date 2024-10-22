#include <stdio.h>

int main(){
    float radius, height;

    float pi = 3.14159;

    printf("What is the radius of the cylinder in mm?: ");
    scanf("%f" , &radius);

     printf("What is the height of the Cylinder in mm?: ");
    scanf("%f" , &height);

    float volume = pi * (radius * radius) * height;

    printf("the volume is %.2f", volume);

    return 0;
}