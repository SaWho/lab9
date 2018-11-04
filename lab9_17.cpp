//to make own functions that can replace strcpy,strcat,strcmp,strlen,strchr,strstr
#include <iostream>
#include <cstring>
using namespace std;
char* stringcpy(char* c,const char* s)
{
	//copying each element individually
	for(int i=0;*(s+i)!='\0';i++)
	{
		*(c+i)=*(s+i);
	}
	*(c+i)=*(s+i);

	return c;
} 
char* stringcat(char*c, char* s)
{

	int k=0;
	//calculate the length and then append the second string after that length has been reached
	for(int i=0;true;i++)
	{

	 if(*(c+i)!='\0')
		k++;
	}
	for(int i=0;*(s+i)!='\0';i++)
	{
		*(c+i+k)=*(s+i);
	}
	return c;
}
int stringcmp(char*c,char*s)
{
	//comparing individually
	for(int i=0;(*(s+i)!='\0')||(*(c+i)!='\0');i++)
	{
		if(*(c+i)!=*(s+i))
			return 1;
	}
	return 0;
}

int stringlen(char* c)
{	
	//calculate length
	int k=0;
	for(int i=0;true;i++)
	{
		if(*(c+i)!='\0')
			k++;
	}
	return k;

}

char* stringchr(char* c,char s)
{
	//checking every character
	for(int i=0;*(c+i)!='\0';i++)
	{
		if(*(c+i)==s)
			return c+i;
	}
	return NULL;
}

char* stringstr(char* c,char* s)
{
	if(*s='\0')
		return c;
	int j=0;
	for(int i=0;true;i++)
	{
		if(*(s+i)!='\0')
			j++;
	}
	for(int i=0;*(c+i)!='\0';i++)
	{
	//if the first character of the substring matches the string it checks the entire substring other wise carries on
		if(*(c+i)==*(s))
			for(int k=0;(*(s+k)!='\0')||(*(c+i+k)!='\0');k++)
				if(*(c+i+k)!=*(s+k))
					break;
		if(k==j)
			return c+i+k;
	}
	return NULL;
}

