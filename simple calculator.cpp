#include <iostream>
using namespace std;
int main ()
{
	int num1,num2;
	char op;
	cout<<"enter the first number :"<<endl;
	cin>>num1;
	cout<<"enter the operator";
	cin>>op;
	cout<<"enter the second number :"<<endl;
	cin>>num2;
	int result;
	if(op=='+')
	{
		result=num1+num2;
	}
	else if (op=='*')
	{
		result=num1*num2;
	}
	else if (op=='-')
	{
		result=num1-num2;
	}
	else if(op=='/')
	{
		result=num1/num2;
	}
	else 
	{
		cout<<"invalid";
	}
	cout<<result;
	}
	
