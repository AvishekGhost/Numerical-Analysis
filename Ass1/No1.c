#include<stdio.h>
#include <math.h>
float valOfXm(float, float);
float F(float);

float error(double Xl , double Xm){
	return ((Xm-Xl)/Xl)*100;
}

float get(float Xl,float Xu,int count){
	count++;
	float Xm = 0;
	Xm = valOfXm(Xl, Xu);
	float e = error(Xl,Xm);
	if(e < 0) e = e*(-1);
	printf("\n\t%d\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f",count,Xl,Xu,Xm,F(Xm),e);
	if(F(Xl)*F(Xu) < 0){
		if(count == 10){
		return Xm;
		}
	    else if(F(Xl)*F(Xm) == 0){
			return Xm;
    	}
	    else if( F(Xl)*F(Xm) < 0){
	    	Xu = Xm;
	    	Xm = get(Xl,Xu,count);
	    }
	    else if(F(Xl)*F(Xm) > 0){	
	    	Xl = Xm;
	    	Xm = get(Xl,Xu,count);
	    }
	    
    	else{
    		printf("GG\n");
    	}
    		
	}else{
		return Xm;
	}
	
}
int main(){
    float  root, Xl = 0 , Xu = 1, Xm = 0;
   
   
    printf("Iteration\tXl\tXu\tXm\tF(Xm)\te");
    get(Xl,Xu,0);
	printf("\n");
    
    return 0;
}
float valOfXm(float Xl, float Xu){
	return ((Xl+Xu)/2);
}
float F(float X){
	return (pow(X,4) + 2*pow(X,3) - X - 1);
}

