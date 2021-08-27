#include<bits/stdc++.h>

int main() {
	int a = 0, b = 0;
	char sa[20], sb[20];
	
	scanf("%[^ ]",&sa);
	scanf("%s",&sb);
	
	for(int i = 0; i < strlen(sa); ++i) {
		a *= 10;
		a += sa[i] - '0';
	}
	
	for(int i = strlen(sb) - 1; i >= 0; --i) {
		b *= 10;
		b += sb[i] - '0';
	}

	printf("%d\n",a+b);
}
