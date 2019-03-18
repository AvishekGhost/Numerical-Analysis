#include <stdio.h>

float func(float x, float y){
        return (x*x + y);
}

void RungeKutta(float x0, float y0, float xn, float h){
        float k1, k2, k3, k4, k5, x = x0, y = y0;

        printf("\nx\ty");
        printf("\n%.5f\t%.5f",x,y);
        while(x < xn){
                k1 = h * func(x, y);
                k2 = h * func(x + h/2, y + k1/2);
                k3 = h * func(x + h/2, y + k2/2);
                k4 = h * func(x + h, y + k3);

                y = y + (k1/6 + k2/3 + k3/3 + k4/6);
                x += h;
                printf("\n%.5f\t%.5f",x,y);
        }
}

int main(){
        float x0, xn, y0, h;
        printf("Enter the initial value of x0: ");
        scanf("%f",&x0);
        printf("\nEnter the value of y0: ");
        scanf("%f",&y0);
        printf("\nEnter the value of xn: ");
        scanf("%f",&xn);
        printf("\nEnter the value of step size(h): ");
        scanf("%f",&h);

        RungeKutta(x0,y0,xn,h);
        return 0;
}
