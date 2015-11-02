#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strStr(char *haystack,char *needle);

int main(int argc,char *argv[])
{
	//char *haystack="123456789";
	//char *needle="78";
	char *haystack="mississippi";
	char *needle="a";
	int result=strStr(haystack,needle);
	printf("%d\n",result);
	exit(0);
}

int strStr(char *haystack,char *needle)
{
	int i,j;
	for(i=0,j=0;i<strlen(haystack) && j<strlen(needle);)
	{
		if(haystack[i]==needle[j])
		{
			i++;
			j++;
		}
		else
		{
			i-=j-1;
			j=0;
		}
	}
	return j!=strlen(needle)?-1:i-j;
}
