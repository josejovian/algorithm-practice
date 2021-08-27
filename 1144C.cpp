#include<bits/stdc++.h>

int main() {
	int T;
	scanf("%d",&T);
	
	int arr[T];
	int triple = 0;
	int occ[2*(int)(1e5)+1] = {0};
	
	for(int i = 0; i < T; i++) {
		scanf("%d",&arr[i]);
		occ[arr[i]]++;
		if(occ[arr[i]]>2) triple++;
	}
	
	if(triple) printf("NO\n");
	else {
		printf("YES\n");
		std::stable_sort(arr, arr + T);
		int a[T], b[T];
		int l = 0, r = 0;
		int i = 0;
		while(i < T) {
			if(occ[arr[i]]>=1) {
				a[l] = arr[i];
				occ[arr[i]]--;
				if(occ[arr[i]]==1) {
					b[r] = arr[i];
					occ[arr[i]]--;
					r++;
				}
				l++;
			}
			i++;
		}
		printf("%d\n",r);
		for(int j = 0; j < r; j++) {
			if(j > 0) printf(" ");
			printf("%d",b[j]);
		}
		printf("\n");
		printf("%d\n",l);
		for(int j = l-1; j >= 0; j--) {
			if(l-1 > j) printf(" ");
			printf("%d",a[j]);
		}
		printf("\n");
	}
	
	return 0;
	
}
