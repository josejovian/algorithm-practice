#include<stdio.h>

int arr[11] = {0};

int main() {
	char c;
	int l = 0;
	while(true) {
		c = getchar();
		if(c == '\n') break;
		if(c >= '0' && '9' >= c) arr[c-'0']++;
	}
	
	int i = 0;
	for(int j = 0; j <= 9; j++) {
		while(arr[j]>0) {
			if(i > 0) printf("+");
			printf("%d",j);
			arr[j]--;
			i++;
		}
	}
	printf("\n");
	
	return 0;
}
