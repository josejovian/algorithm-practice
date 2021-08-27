#include<stdio.h>

int main() {
	int i = 0, j = 0;
	
	char s[101];
	char c;
	while(c = getchar()) {
		if(c == '\n') break;
		s[i] = c;
		s[i+1] = '\0';
		i++;
	}
	
	int bad = 0;
	j = i-1;
	while(c = getchar()) {
		if(c == '\n') break;
		if(c != s[j]) {
			bad = 1;
			break;	
		}
		j--;
	}
	
	if(bad) printf("NO\n");
	else printf("YES\n");
	
	return 0;
}
