#include<stdio.h>

int gcd(int a, int b) {
	return (b == 0) ? a : gcd(b,a%b);
}

int main() {
	int a, b, n;
	scanf("%d %d %d",&a,&b,&n);
	
	int turns = 1;
	while(true) {
		if(turns % 2 == 1) {
			n -= gcd(a, n);
			if(n < 0) break;
		} else if(turns % 2 == 0) {
			n -= gcd(b, n);
			if(n < 0) break;
		}
		turns++;
	}
	
	printf("%d\n",turns%2);
	
	return 0;
}
