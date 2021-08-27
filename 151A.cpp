#include<stdio.h>

int min(int a, int b, int c) {
	if(a <= b && a <= c) return a;
	if(b <= a && b <= c) return b;
	if(c <= a && c <= b) return c;
}

int main() {
	int n, k, l, c, d, p, nl, np;
	scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
	
	printf("%d\n",min( (k*l)/nl  , c*d  , p/np )/n);
	return 0;
}
