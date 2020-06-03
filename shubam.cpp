#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    long long int n,i;
    cin>>n;
    std::vector<int> v;
    long long int tot=0;
    for(i=0;i<n;i++){
        long long int ele;
        cin>>ele;
        tot+=ele;
        v.push_back(ele);
    }
    long long int m;
    cin>>m;
    for(long long int j=0;j<m;j++){
        long long int k;
        cin>>k;
        long long int count=1;
        if(k>tot){
            cout<<"-1"<<endl;
        }
        else{
            if(v.front()>=k){
                cout<<count<<endl;
            }
            else{
                for(long long int t=1;t<n;t++){
                    count++;
                    long long int res=0;
                    for(long long h=0;h<=t;h++){
                        res+=v.at(h);                        
                    }
                    if(res>=k){
                        cout<<count<<endl;
                        break;
                    }
                }
            }
        }
    }
    
    return 0;
}

