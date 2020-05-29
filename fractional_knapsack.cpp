#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct item{
	int profit;
	int weight;
	float ratio;
};
bool comp(item a,item b){
	if(a.ratio>b.ratio){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n;
	cout<<"Enter the no of items:";
	cin>>n;
	item arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter profit and weight of the item:";
		cin>>arr[i].profit>>arr[i].weight;
		arr[i].ratio=arr[i].profit/arr[i].weight;
	}
	int capacity;
	cout<<"Enter the knapsack capacity:";
	cin>>capacity;
	int result=0;
	sort(arr,arr+n,comp);
	for(int i=0;i<n;i++){
		if(capacity==0){
			break;
		}
		else{
			if(capacity>=arr[i].weight){
				result+=arr[i].profit;
				capacity-=arr[i].weight;
			}
			else{
				result+=arr[i].ratio*capacity;
				capacity=0;
			}
		}
	}
	cout<<"Maximum profit:"<<result;
	
	return 0;
}
