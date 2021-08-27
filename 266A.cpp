#include<stdio.h>

int main() {
	int P;
	scanf("%d",&P);
	getchar();
	
	int l = 0;
	char c;
	char prev = 0;
	int j = 0;
	while(c = getchar()) {
		if(c == '\n') break;
		if(j > 0 && c == prev) {
			l++;
		}
		j++;
		prev = c;
	}
	
	printf("%d\n",l);
	return 0;
}
