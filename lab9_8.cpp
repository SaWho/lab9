#include <iostream>
using namespace std;

int myStrLen(char* k)
{
int i=0;
while(*(k+i)!='\0')
i++;
return i;
}
int main(){
cout<<myStrLen("Suraj")<<endl;
}
