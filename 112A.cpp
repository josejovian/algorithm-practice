#include<stdio.h>
#include<string.h>

int main() {
	char c;
	int i = 0;
	
	char s1[101];
	while(c = getchar()) {
		if(c == '\n') break;
		if(c >= 'a' && 'z' >= c) c-=32;
		s1[i] = c;
		s1[i+1] = '\0';
		i++;
	}
	
	i = 0;
	char s2[101];
	while(c = getchar()) {
		if(c == '\n') break;
		if(c >= 'a' && 'z' >= c) c-=32;
		s2[i] = c;
		s2[i+1] = '\0';
		i++;
	}
	
	printf("%d\n",strcmp(s1,s2));
	
	return 0;
}
