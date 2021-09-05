#include <iostream>
int main() 
{
int a=3,b=6;
cout<<"before a="<<a<<"b="<<b<<endl;
a=a*b;
b=a/b;
a=a/b;
cout<<"after a="<<a<<"b="<<b<<endl;
return 0;
}