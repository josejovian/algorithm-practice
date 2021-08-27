#include<stdio.h>

int main() {
	int k;
	scanf("%d",&k);
	
	while(k--) {
		int n;
		scanf("%d",&n);
		int x_1 = n/3;
		int x_2 = x_1 + 1;
		
		if(n == 1) {
			printf("1 0\n");
			continue;
		} else if(n == 2) {
			printf("0 1\n");
			continue;
		}
		
		if( (n - x_1) % 2 == 0 ) printf("%d %d\n",x_1, (n - x_1)/2);
		else if( (n - x_2) % 2 == 0 ) printf("%d %d\n",x_2, (n - x_2)/2);

	}
	
	return 0;
}
