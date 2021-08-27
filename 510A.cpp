#include<stdio.h>

int main() {
	int n, m;
	scanf("%d %d",&n,&m);
	
	int go = 1;
	for(int r = 1; r <= n; r++) {
		if(r % 2 == 1) {
			for(int c = 1; c <= m; c++) {
				printf("#");
			}
			printf("\n");
		} else {
			for(int c = 1; c <= m; c++) {
				if(go==1 && c == m) {
					printf("#");
				} else if(go==1 && c < m){
					printf(".");
				} else if(go==0 && c == 1) {
					printf("#");
				} else if(go==0 && c > 1) {
					printf(".");
				}
			}
			if(go) go=0;
			else go=1;
			printf("\n");
		}
	}
	
	return 0;
}
