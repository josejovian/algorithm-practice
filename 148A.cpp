#include<stdio.h>

int main() {
	int k, l, m, n, d;
	scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
	
	int x = 0;
	for(int i = 1; i <= d; i++) {
		if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
			x++;
	}
	
	printf("%d\n",x);
	
	return 0;
}
