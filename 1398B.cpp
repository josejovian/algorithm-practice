#include<stdio.h>

int quick(int a[], int L, int R) {
	int pivot = a[R];
	int i = L - 1;
	for(int j = L; j < R; j++) {
		if(a[j] > pivot) {
			i++;
			int d = a[i];
			a[i] = a[j];
			a[j] = d;
		}
	}
	int d = a[i+1];
	a[i+1] = a[R];
	a[R] = d;
	return i+1;
}

void sort(int a[], int L, int R) {
	if(L < R) {
		int pivot = quick(a, L, R);
		sort(a, L, pivot-1);
		sort(a, pivot+1, R);
	}
}

int main() {
	int T;
	scanf("%d",&T);
	getchar();
	
	for(int i = 0; i < T; i++) {
		char c;
		
		int slot[101];
		int x = 0;
		
		int best = 0;
		int combo = 0;
		int prev = 0;
		while(c = getchar()) {
			if(c == '\n') break;
			if(c == '1') {
				combo++;
			}
			if(c == '0') {
				if(combo > 0) {
					slot[x] = combo;
					x++;
				}
				combo=0;
			}
		}
		if(combo > 0) {
			slot[x] = combo;
			x++;
		}
		
		if(x==0) printf("0\n");
		else {
			sort(slot, 0, x-1);
			int max = 0;
			for(int i = 0; i < x; i+=2)
				max+=slot[i];
			printf("%d\n",max);
		}
	}
	
	return 0;
}
