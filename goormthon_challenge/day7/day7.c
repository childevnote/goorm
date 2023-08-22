#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, k=0;
	int pts, res=0;
	scanf("%d %d", &n, &k);
	
	int** arr = (int**)malloc(sizeof(int*) * n);
	
	for(int i=0; i<n; i++){
		arr[i] = (int*)malloc(sizeof(int)*n);
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
				pts=0;
			if(arr[i][j]==0) {
				for(int x=i-1; x<=i+1; x++) {
					for(int y=j-1; y<=j+1; y++) {
						if(x>=0 && x<n && y>=0 && y<n &&arr[x][y]==1)
						{
							pts++;
						}
					}
				}
			}
			if(pts==k)
				res++;
		}
	}
	
	printf("%d", res);
	
	for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
	return 0;
}
