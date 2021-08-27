#include<stdio.h>

int min(int a, int b, int c, int d) {
	if(b >= a && c >= a && d >= a) return a;
	if(a >= b && c >= b && d >= b) return b;
	if(a >= c && b >= c && d >= c) return c;
	return d;
}

int main() {
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	
	printf("%d\n",min(2*a+2*c,2*b+2*c,a+b+c,2*a+2*b));
	
	return 0;
}
