#include<bits/stdc++.h> 
using namespace std; 
int lis( int arr[], int n ) 
{ 
	int lis[n]; 
	lis[0] = 1; 
	for (int i = 1; i < n; i++ ) 
	{ 
		lis[i] = 1; 
		for (int j = 0; j < i; j++ ) 
			if ( arr[i] > arr[j] && lis[i] < lis[j] + 1) 
				lis[i] = lis[j] + 1; 
	} 

	return *max_element(lis, lis+n); 
} 
	
int main() 
{ 
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("%d",lis( arr,n)); 
	return 0; 
}

