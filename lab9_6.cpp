#include <iostream>
using namespace std;
int countEven(int* a ,int b)
{
int c=0;
for(int i=0;i<b;i++)
{
if((*(a+i))%2==0)
c++;
}
return c;
}

int main(){
int a[]={1,3,4,3,5};
cout<<countEven(a,5)<<endl;

}
