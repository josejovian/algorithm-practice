#include<stdio.h>

int main() {
	int R, C;
	scanf("%d %d",&R,&C);
	
	int x = 0;
	for(int j = 0; j < R; j++) {
		int a, b;
		for(int i = 0; i < C; i++) {
			scanf("%d %d",&a,&b);
			if(a+b) x++;
		}
	}
	printf("%d\n",x);
	return 0;
}
