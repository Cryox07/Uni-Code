
#include <stdio.h>
int main(){

    const double PI = 3.14159;
    double radius, circumference;
    
    printf("\nEnter radius of the circle:");
    scanf("%lf", &radius);

    circumference = 2*PI*radius;
    printf("\nThe radius is equal to %lf",circumference);
    return 0;

}
