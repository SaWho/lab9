#include <stdio.h>
#include <iostream>
using namespace std;
int main(void)
{
	char str[20], *p;
	//user prompt
	cout << "Input about 10 characters of string\n";
	cin >> str;
	p=str;
	//output

	for(int i=0;i<10;i++)
	{
		p=&str[i];
		cout<<p<<endl;
	}

	return (0);
}
