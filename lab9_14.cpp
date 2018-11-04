#include <iostream>
using namespace std;
int main()
{
	char c[]="Suraj";
	char *p=c;
	for(int i=0;i<5;i++)
		cout<<c[i]<<endl;
	cout<<"-----"<<endl;
	for(int i=1;i<=5;i++)
		cout<<*(p++)<<endl;

	cout<<"-----"<<endl;
	return 0;

}
