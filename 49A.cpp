#include<stdio.h>

int main() {
	char c;
	char read = 'A';
	while(true) {
		c = getchar();
		if(c == '\n' || c == '?') break;
		if(c >= 'A' && c <= 'Z') c += 32;
		if(c >= 'a' && c <= 'z') read = c;
	
	}
	
	if(read=='a'||read=='i'||read=='u'||read=='e'||read=='o'||read=='y')
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}
