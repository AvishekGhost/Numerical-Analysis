#include<stdio.h>
#include<math.h>
#define MAX 3
int main(){
	float e1,e2,e3, o1,o2,o3, n1,n2,n3;
	float temp;
	float gg[MAX];
	float sum[MAX];
	float aL[MAX][MAX] = {{25,5,1},
						{64,8,1},
						{144,12,1}};
	float aR[MAX] = {106.8,177.2,279.2} , x[MAX] = {1,2,5};
	int i = 0,j=0 ,k=0,l=0;
	// printf("Enter The elements For the LEFT SIDE:\n");
	// for(i=0;i<MAX;i++){
	// 	for(j=0;j<MAX;j++){
	// 		scanf("%f",&aL[i][j]);
	// 	}
	// }
	// printf("Enter the elements for RIGHT SIDE\n");
	// for(i=0;i<MAX;i++){
	// 	scanf("%f",&aR[i]);
	// }
	printf("Printing --\n");
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			printf("%.2f ",aL[i][j]);
		}
		if(i == MAX/2 ){
			printf("= %.2f",aR[i]);
		}
		else printf("  %.2f",aR[i]);
		printf("\n");
	}
    // printf("Enter Initial value of X1 X2 and X3 respectively : ");
    // for (i = 0; i < MAX; i++) {
    //     scanf("%f", &x[i]);
    // }
    printf("iter\tX1\t\t\tE1\t\t\tX2\t\t\tE2\t\t\tX3\t\t\tE3\n");
	for (k = 0; k < 2; ++k){
		o1 = sum[0]; o2 = sum[1]; o3 = sum[2];


		for ( i = 0; i < MAX; i++) {
			sum[i] = aR[i];
		}
		for ( l = 0; l < MAX; l++) {
			gg[l] = gg[l] - sum[l];
			for (i = 0; i < MAX; i++) {
				for (j = 0; j < MAX; j++) {
					temp = (aL[i][j+1] * x[i+1]);
					gg[l] = temp;
					// printf("EZ %.2f ", sum[i]);
					// 	printf("\n");
				}
			}
		//	gg[l] = sum[l] - temp;
		}
		for ( l = 0; l < MAX; l++) {
			for (i = 0; i < MAX; i++) {
				for (j = 0; j < MAX; j++) {
					gg[l] = sum[l]/aL[MAX-i][MAX-j];
				}
			}
		}


        // x[0] = (aR[0] - (aL[0][1]*x[1]) - (aL[0][2] * x[2]) )/aL[0][0];
		// x[1] = (aR[1] - (aL[1][0]*x[0]) - (aL[1][2] * x[2]) )/aL[1][1];
		// x[2] = (aR[2] - (aL[2][0]*x[0]) - (aL[2][1] * x[1]) )/aL[2][2];

		n1 = gg[0]; n2 = gg[1]; n3 = gg[2];
		e1 = ((n1-o1)/n1)*100;
		e2 = ((n2-o2)/n2)*100;
		e3 = ((n3-o3)/n3)*100;
        printf("%d\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",k+1,gg[0],e1,gg[1],e2,gg[2],e3);
	}

    return 0;
}
