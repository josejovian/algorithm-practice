#include<stdio.h>

int pos(int a) {
	return (a > 0) ? a : -a;
}

int main() {
	int y = 0, x = 0, j, i;
	int solved = 0;
	for(j = 0; j < 5 && !solved; j++) {
		for(i = 0; i < 5 && !solved; i++) {
			int d;
			scanf("%d",&d);
			if(d == 1) {
				solved = 1;
				break;
			}
		}
	}
	j--;
	
	printf("%d\n",pos(j-2)+pos(i-2));
	
	return 0;
}
