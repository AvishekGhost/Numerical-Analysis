#include <stdio.h>

float func(float x, float y){
        return (x*x + y);
}

void Euler(float x0, float y, float h, float xn){
        float x = x0;
        printf("\nx\ty");
        while(x < xn){
                y = y + h * func(x,y);
                x += h;
                printf("\n%.5f\t%.5f", x, y);
        }
}

int main(){
        float x0, xn, y0, h;
        printf("Enter the initial value of x(x0): ");
        scanf("%f",&x0);
        printf("\nEnter the initial value of y(y0): ");
        scanf("%f",&y0);
        printf("\nEnter the value of xn: ");
        scanf("%f",&xn);
        printf("\nEnter the value of step size(h): ");
        scanf("%f",&h);

        Euler(x0, y0, h, xn);

        return 0;
}
