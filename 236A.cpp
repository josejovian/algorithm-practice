#include<stdio.h>

char list[26];

int main() {
	int number = 0;

	char c;
	while(c = getchar()) {
		if(c == '\n') break;
		list[c-'a']++;
		if(list[c-'a']==1) number++;
	}
	
	if(number % 2 == 0) printf("CHAT WITH HER!\n");
	else printf("IGNORE HIM!\n");
	return 0;
}
