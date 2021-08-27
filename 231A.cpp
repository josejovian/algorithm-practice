#include<stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	
	int x = 0;
	for(int i = 0; i < T; i++) {
		int a, b, c;
		scanf("%d %d %d",&a,&b,&c);
		if(a+b+c>=2) x++;
	}
	
	printf("%d\n",x);
	return 0;
}
