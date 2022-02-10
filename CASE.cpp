#include <iostream>
using namespace std;
int main()
{
char grade;
cout<<"Enter your grade"<<endl;
cin>>grade;
switch (grade)
{
case 'A':case'a':
cout<<"Your average must be between 90 – 100"<<endl;
break;
case 'B':case'b':
cout<<"Your average must be between 80 - 89"<<endl;
break;
case 'C':case'c':
cout<<"Your average must be between 70 - 79"<<endl;
break;
case 'D':case'd':
cout<<"Your average must be between 60 - 69"
<<endl;
break;
default:
cout<<"Your average must be below 60";
}
return 0;
}
