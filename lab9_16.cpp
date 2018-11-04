#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{

	char str[20], *p;
	//user prompt
	cout << "Input about 10 characters of string\n";
	cin >> str;

	p=str;
	//printing
	for(int i=9;i>=0;i--)
	{
	p=&str[i];
	cout<<p<<endl;
	}
	return (0);

}
