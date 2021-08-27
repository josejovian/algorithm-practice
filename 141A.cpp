#include<stdio.h>

char letters[26];
char remnant[26];

int main() {
	
	char c;
	while(c = getchar()) {
		if(c == '\n') break;
		letters[c-'A']++;
	}

	while(c = getchar()) {
		if(c == '\n') break;
		letters[c-'A']++;
	}

	while(c = getchar()) {
		if(c == '\n') break;
		remnant[c-'A']++;
	}
	
	int valid = 1;
	for(int i = 0; i < 26; i++) {
		if(remnant[i]!=letters[i]) {
			valid = 0;
			break;
		}
	}
	
	if(valid) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}
