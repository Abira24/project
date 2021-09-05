#include <iostream>
int main()
	int n,i;
	cout<<"Enter number of elements in an array\n";
	cin>>n;
	
	int arr[n];
	cout<<"Enter values in array\n";
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int max=Int_Min;
	int second_max=Int_Min;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>max) {
			second_max=max;
			max=arr[i];
	
		}
		if(arr[i]<max && arr[i]>2nd_max) {
			  second_max=arr[i];
		}
}

