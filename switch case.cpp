#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a number"<<endl;
	cin>>a>>b;
	char op;
	cout<<" enter operand(+,-,*,/)"<<endl;
	cin>>op;
	switch(op)
	{
	case'+':
    cout<<"the sum of two numbers "<<a+b<<endl;
    break;
    case'-':
    cout<<"the subtraction of two numbers"<<a-b<<endl;
    break;
    case'*':
    cout<<"the multiplication of two numbers"<<a*b<<endl;
    break;
    case'/':
    cout<<"the division of two numbers is"<<a/b<<endl;
    break;
    default :
    	cout<<"wrong operator";
}
    return 0;


	
}

