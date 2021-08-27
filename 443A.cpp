#include<stdio.h>

int main() {
	int alph[26] = {0};
	int unique = 0;
	char c;
	while(c = getchar()) {
		if(c == '\n') break;
		if(c >= 'a' && 'z' >= c) {
			alph[c-'a']++;
			if(alph[c-'a']==1) unique++;
		}
	}
	printf("%d\n",unique);
	return 0;
}
