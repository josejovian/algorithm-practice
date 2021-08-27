#include<stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	
	int w = 0;
	int p = 0;
	while(T--) {
		int X;
		scanf("%d",&X);
		
		if(X > 0) {
			p+=X;
			continue;
		} else {
			if(p==0) w++;
			else p--;
			continue;
		}
		
	}
	printf("%d\n",w);
	
	return 0;
}
