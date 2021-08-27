#include<stdio.h>

int main() {
	int n, m;
	scanf("%d %d",&n,&m);
	
	int i = 1;
	while(m >= i) {
		if(m >= i) m -= i;
		else break;
		i++;
		if(i > n) i = 1;
	}
	
	printf("%d\n",m);
	
	return 0;
}
