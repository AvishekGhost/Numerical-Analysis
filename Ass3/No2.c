#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

float function(float x){
        return (x*x + 1);
}

int main(){
        int i, n;
        float x0, xn, h, Y[SIZE], oddsum = 0, evensum = 0, ans;
        printf("Enter the value of x0(Lower limit): ");
        scanf("%f",&x0);
        printf("\nEnter the value of xn(Upper limit): ");
        scanf("%f",&xn);
        printf("\nEnter the value of h(interval length): ");
        scanf("%f",&h);
        if(h < 0 || h > (xn - x0)){
                printf("Invalid value of h");
                exit(0);
        }

        n = (xn - x0)/h;
        if(n%2 == 1){
                n++;
        }
        h = (xn - x0)/n;
        printf("\nn = %d\nh = %f", n, h);

        for(i=0;i<=n;i++){
                Y[i] = function(x0 + (i*h));
                //printf("\ny[%d] = %f", i, Y[i]);
        }

        for(i=1;i<n;i++){
                if(i%2 == 1)
                        oddsum += Y[i];
                else
                        evensum += Y[i];
        }

        ans = (h/3)*(Y[0] + Y[n] + (4*oddsum) + (2*evensum));
        printf("\nAnswer: %f", ans);

        return 0;
}
