#include <iostream>
using namespace std;
int main()
{
	int a[10],*p;
	cout<<"Enter the values of the array "<<endl;
	for(int i=0;i<10;i++)
		cin>>a[i];
	p=a;
	cout<<"-----"<<endl;
	for(int i=0;i<10;i++)
		cout<<a[i]<<endl;
	cout<<"-----"<<endl;
	for(int i=1;i<=10;i++)
	{	cout<<*p<<endl;
		p++;
	}
	cout<<"-----"<<endl;
	return 0;
}
