#include<stdio.h>

int main() {
	int i = 0;
	char c;
	while(c = getchar()) {
		if(c == '\n') break;
		if(i == 0 && (c >= 'a' && 'z' >= c)) c -= 32;
		printf("%c",c);
		i++;
	}
	printf("\n");
	return 0;
}
