#include <stdio.h>

int abs(int x) { 
	return x>=0?x:-x;
}

double pow(double base,double exp) {
	if(exp==0){
		return 1; // proof:1=a^n/a^n=a^n-n=a^0
	}
	double s=base;
	for(int i=1; i<abs(exp); s*=base, i++);
	return (exp<0)? 1/s : s;
}

int main() {
	printf("%f\n",pow(-2,-8)); //(-2)^(-8) = 0.003906..
	printf("%f\n",-pow(2,-8)); //-(2^(-8)) = -0.003906..
}