//to print the size of all kinds of variables of predefined datatypes as well as their respective pointers
#include <iostream>
using namespace std;
int main()
{
int a,*a1;
long b,*b1;
float c,*c1;
double d,*d1;
char e,*e1;
bool f,*f1;

cout<<"The size of int variable and corresponding pointer is "<<sizeof(a)<<"  "<<sizeof(a1)<<endl;
cout<<"The size of long variable and corresponding pointer is "<<sizeof(b)<<"  "<<sizeof(b1)<<endl;
cout<<"The size of float variable and corresponding pointer is "<<sizeof(c)<<"  "<<sizeof(c1)<<endl;
cout<<"The size of double variable and corresponding pointer is "<<sizeof(d)<<"  "<<sizeof(d1)<<endl;
cout<<"The size of char variable and corresponding pointer is "<<sizeof(e)<<"  "<<sizeof(e1)<<endl;
cout<<"The size of bool variable and corresponding pointer is "<<sizeof(f)<<"  "<<sizeof(f1)<<endl;

return 0;
}
