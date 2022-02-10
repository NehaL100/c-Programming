#include<iostream>
using namespace std;
int main ()
{
	int a,b;
	cout<<"Enter any two number"<<endl;
	cin>>a>>b;
	char op;
	cout<<"enter operation(+,-,*,/,)";
	cin>>op;	
	if(op=='+')					
		cout<<"addition of two numbers is="<<a+b<<endl;
	else if (op=='-')
		cout<<"subt of two numbers is="<<a-b<<endl;
	else if (op=='*')
		cout<<"multiplication of two numbers is ="<<a*b<<endl;
	else if (op=='/')
		cout<<"div of two numbers is="<<a/b<<endl;
	else	
		cout<<"wrong operator";
	return 0;
}
