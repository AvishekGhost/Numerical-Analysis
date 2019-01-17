#include<stdio.h>
#include<math.h>
#define dF(x) (4*x*x*x+ 6*x*x-1) 
#define F(x) (x*x*x*x + 2* x*x*x - x- 1)

int main(){
	float Xi, Xn, e;
	printf("Enter the value of X0 : ");
	scanf("%f",&Xi);
	int count = 0;
	int i = 0;
	printf("Iter\tXi\tRoot\tF(Xi)\t\tF(Xi+1)\t\tError\n");
	printf("-------------------------------------------------\n");
	for(i=0;i<10;i++){
		Xn = Xi - (F(Xi)/dF(Xi));
		e = ((Xi-Xn)/Xn)*10;
		if(e < 0) e = e *(-1);
		printf("%d\t%.4f\t%.4f\t%.8f\t%.8f\t%.8f%\n",i+1,Xi,Xn,F(Xi),F(Xn),e);
		if(Xn == 0){
			printf("terminated\n");
			break;
		}
		if(e < 0.01 ){
			printf("terminated\n");
			break;
		}
		Xi = Xn;
	}
	return 0;
}
