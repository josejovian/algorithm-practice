#include<stdio.h>

int main() {
	int a = 0, b = 0;
	char sa[101];
	
	char c;
	while(c = getchar()) {
		if(c == '\n') break;
		sa[a] = c;
		sa[a+1] = '\0';
		a++;
	}
	
	while(c = getchar()) {
		if(c == '\n') break;
		if(c != sa[b]) printf("1");
		else printf("0");
		b++;
	}
	printf("\n");
	
	return 0;
}
