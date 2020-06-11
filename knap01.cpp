#include <stdio.h> 

int max(int a, int b) 
{ 
	return (a > b) ? a : b; 
}  

int knapSack(int W, int wt[], int val[], int n) 
{ 
	int i, w; 
	int KNAP[n + 1][W + 1]; 
	for (i = 0; i <= n; i++) { 
		for (w = 0; w <= W; w++) { 
			if (i == 0 || w == 0) {
				KNAP[i][w] = 0;
			} 
			else if (wt[i - 1] <= w) {
				KNAP[i][w] = max(val[i - 1] + KNAP[i - 1][w - wt[i - 1]],KNAP[i - 1][w]); 
			}
			else{
				KNAP[i][w] = KNAP[i - 1][w];
			}
		} 
	} 
	return KNAP[n][W]; 
} 
int main() 
{  
	int n,i;
	printf("Enter the size:");
	scanf("%d",&n);
	int val[n],weight[n];
	for(int i=0;i<n;i++){
		scanf("%d %d",&val[i],&weight[i]);
	}
	int capacity;
	scanf("%d",&capacity);
	printf("%d", knapSack(capacity, weight, val, n)); 
	return 0; 
} 

