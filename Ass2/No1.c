#include<stdio.h>
#include<math.h>
#define MAX 3
int main(){
	float aL[MAX][MAX], aR[MAX],x[MAX];
	int i = 0,j=0;
	printf("Enter The elements For the LEFT SIDE:\n");
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			scanf("%f",&aL[i][j]);
		}
	}
	printf("Enter the elements for RIGHT SIDE\n");
	for(i=0;i<MAX;i++){
		scanf("%f",&aR[i]);
	}
	printf("Printing --\n");
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			printf("%f ",aL[i][j]);
		}
		if(i == MAX/2 ){
			printf("= %f",aR[i]);
		}
		else printf("  %f",aR[i]);
		printf("\n");
	}
    printf("Enter Initial value of X1 X2 and X3 respectively : ");
    for (i = 0; i < MAX; i++) {
        scanf("%f", &x[i]);
    }
    printf("iter\tX1\t\t\tX2\t\t\t X3\n");
	for (i = 0; i < 6; ++i){
        x[0] = (aR[0] - (aL[0][1]*x[1]) - (aL[0][2] * x[2]) )/aL[0][0];
		x[1] = (aR[1] - (aL[1][0]*x[0]) - (aL[1][2] * x[2]) )/aL[1][1];
		x[2] = (aR[2] - (aL[2][0]*x[0]) - (aL[2][1] * x[1]) )/aL[2][2];

        printf("%d\t%.4f\t\t%.4f\t\t%.4f\n",i+1,x[0],x[1],x[2]);
	}

    return 0;
}
