#include<stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	
	double a = 0;
	for(int i = 0; i < T; i++) {
		double x;
		scanf("%lf",&x);
		a += x;
	}
	a /= (double)T;
	printf("%.12lf\n",a);
}
