#include<stdio.h>

int main() {
	int n, m;
	scanf("%d %d",&n,&m);
	
	int a = 0, b;
	int unique = 0;
	while(a*a <= n) {
		b = n - a*a;
		if(b >= 0 && a + b*b == m) unique++;
		a++;
	}
	printf("%d\n",unique);
	return 0;
}
