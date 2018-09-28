#include <iostream>
using namespace std;

//function prototype/declaration
int isEven(int);

int main() 
{

	int n;
	
	cout<<"Enter a number: ";
	cin>>n;

	if(isEven(n))
		cout<<"It is an EVEN Number";
	else
		cout<<"Is is an ODD Number";	

    cout<<endl;
	return 0;
}

//function definition/body
int isEven(int n)
{
	if(n == 0)
		return 1;
	else if(n == 1)
		return 0;
	else if(n<0)
		return isEven(-n);
	else
		return isEven(n-2);		
}