#include <iostream>
#include <cstring>
using namespace std;
int main(){
char s[10] = "abcde";
char* cptr;
cptr=s;
int c=0;
while(*(cptr+c)!='\0')
{
c++;
}
for(;c>=0;c--)
{
cout<<*(cptr+c);
}
cout<<endl;
return 0;
}
