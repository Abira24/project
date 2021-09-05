#include<iostream>

void isprime(int x)
{  
	for(int i=2;i<x;i++)
	{	
		if(x%i==0)
		{
			cout<<x<<"Number is not prime";}
			return;
		
	
	cout<<x<<"Number is prime";}
	return;
 int n;
 cin>>n;
 
 for(int i=0;i<n;i++)
 {
 	int k;
	cin>>k;
	isprime(k);
  }
}

