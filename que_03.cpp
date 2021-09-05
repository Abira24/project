#include <iostream>
int main()
{
	int year;
	cout<<"Enter the year ";
	cin>>year;
	
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
				cout<<year<<"leap year"<<endl;
			else
				cout<<year<<"normal year"<<endl;
		}
		else
			cout<<year<<"leap year"<<endl;
	}
    else
		cout<<year<<"normal year"<<endl;
	return 0;
}
	

