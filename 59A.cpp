#include<stdio.h>

int main() {
	int l = 0;
	char c;
	char s[101];
	int a = 0, b = 0;
	
	while(c = getchar()) {
		if(c == '\n') break;
		if(c >= 'a'&&'z' >= c) a++;
		if(c >= 'A'&&'Z' >= c) b++;
		s[l] = c;
		s[l+1] = '\0';
		l++;
	}
	
	if(a >= b) {
		for(int i = 0; i < l; i++) {
			if(s[i]>='A'&&'Z'>=s[i]) s[i] += 32;
			printf("%c",s[i]);
		}
	} else {
		for(int i = 0; i < l; i++) {
			if(s[i]>='a'&&'z'>=s[i]) s[i] -= 32;
			printf("%c",s[i]);
		}
	}
	printf("\n");

	return 0;
}
