#include <iostream>
using namespace std;

double* maximum(double* a,int size)
{
double* h=a;
for(int i=0;i<size;i++)
{
if(*(a+i)>=*h)
h=a+i;
}
if(size==0)
return NULL;
else return h;
}
int main(){
double a[]={1,2,5,3,8};
cout<<*maximum(a,5)<<endl;
return 0;


}
