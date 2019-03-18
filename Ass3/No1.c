#include <stdio.h>
#define SIZE 20

float function(float x){
        return (x*x + 1);
}

int main(){
        int i;
        float a, b, n, h, sum = 0, ans;
        printf("Enter the value of a(lower limit): ");
        scanf("%f",&a);
        printf("\nEnter the value of b(upper limit): ");
        scanf("%f",&b);
        printf("\nEnter the value of n(no. of segments): ");
        scanf("%f",&n);

        h = (b-a)/n;
        for(i=1;i<n;i++){
                sum += function(a + (i*h));
        }

        ans = h/2 * (function(a) + function(b) + (2 * sum));
        printf("\nAnswer: %f", ans);

        return 0;
}
