#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &A, int B){
	int start = 0;
    int end = A.size();
    
    while(start <= end){
        int mid = start + ((end-start)/2);
        
        if(A[mid]> B){
            end = mid -1;
        }
        else if(A[mid]< B){
            start = mid +1;
        }
        else if(A[mid] == B){
            return mid;
        }

        return end+1;   
    }
}

int main(){
	int n;
	cin>>n;

	vector<int> v1(n);
	for(int i=0; i<n; i++){
		cin>>v1[i];
	}

	int B;
	cin>>B;

	int output = search(v1, B);
	cout<<output;

	return 0;
}
