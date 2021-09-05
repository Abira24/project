#include<iostream>
#include<vector>
vector<int>rotateleft(vector<int>arr,int d){
	for(int i=0;i<d;i++){
		arr.push_back(arr[0]);
		arr.erase(arr.begin());
	}
	return arr;
}
int main(){
	int size,d;
	cin>>size>>d;
	
	vector<int>arr(size);
	
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	vector<int>res=rotateleft(arr,d);
	
	for(int x: res){
		cout<<x<<" ";
	}
	return 0;
}

	

