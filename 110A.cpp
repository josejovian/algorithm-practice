#include<stdio.h>

int main() {
	char c;
	int sum = 0;
	while(c = getchar()) {
		if(c == '\n') break;
		if(c == '7' || c == '4') sum++;
	}
	
	int bad = 1;
	while(sum >= 1) {
		int digit = sum % 10;
		if(digit != 7 && digit != 4) {
//			printf("> %d <\n",digit);
			bad = 1;
			break;
		} else {
//			printf("-> %d <\n",digit);
			bad = 0;
		}
		sum /= 10;
	}
	
	
//	printf("%d\n",sum);
	if(bad) printf("NO\n");
	else printf("YES\n");
	return 0;
}
