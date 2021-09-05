#include<iostream>
int main()
{
	int n1,first=0,second=1,next;

	cout<<"Enter the number of terms to be printed in the fibonacci series"<<endl;
	cin>>n1;
	
	cout<<"fibonacci series:"<<endl;
	
	for(int i=0;i<n1;i++)
	{
		cout<<first<<endl;
		next=first=second;
		first=second;
		second=next;
	}
	return 0
}
	

