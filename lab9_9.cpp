#include <iostream>
using namespace std;
bool contains(char* k, char c)
{
bool x=false;int i=0;
while(*(k+i)!='\0')
{if(*(k+i)==c)
x=true;
i++;
}
return x;

}
int main(){
cout<<contains("suraj",'m')<<endl;

}
