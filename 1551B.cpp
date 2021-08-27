#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	getchar();
	
	int count[28];

	while(n--) {
		for(int i = 0; i < 26; i++) {
			count[i] = 0;
		}
		char string[51];
		
		int unique = 0;
		int length = 0;
		int mono = 0;
		scanf("%s",string);
		getchar();
		
		for(int i = 0; i < strlen(string); i++) {
			char c = string[i];
			if(!(c >= 'a' && 'z' >= c)) break;
			count[c-'a']++;
			if(count[c-'a'] == 1) unique++;
			length++;
		}
		
		int duped = length - unique;
		
		int red = 0;
		
		for(int i = 0; i < 26; i++) {
			if(count[i] == 1) {
				mono++;
			}
			if(count[i] >= 2) {
				red++;
			}
		}
		
		red += mono/2;
		
		printf("%d\n",red);
	}
	
	return 0;
}
