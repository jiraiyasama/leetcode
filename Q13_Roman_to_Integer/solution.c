#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int romanToInt(char *s);

int main(int argc,char *argv[])
{
	int number=romanToInt("XI");
	printf("%d\n",number);
	exit(0);
}

int romanToInt(char *s)
{
	int i,number=0;
	int val[255];
	val['I']=1;
	val['V']=5;
	val['X']=10;
	val['L']=50;
	val['C']=100;
	val['D']=500;
	val['M']=1000;
	for(i=0;i<strlen(s);i++)
	{
		if(i>0 && val[s[i]] > val[s[i-1]])
			number+=val[s[i]]-2*val[s[i-1]];
		else
			number+=val[s[i]];
	}
	return number;
}
