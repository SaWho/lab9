#include <iostream>
using namespace std;
int main()
{
int a,b,*p;
p=&a;
b=*p;
cout<<"(a,b,*p)=("<<a<<b<<*p<<")"<<endl;
a=2;
b=3;
cout<<"(a,b,*p)=("<<a<<b<<*p<<")"<<endl;
p=&b;
cout<<"(a,b,*p)=("<<a<<b<<*p<<")"<<endl;
return 0;

}
