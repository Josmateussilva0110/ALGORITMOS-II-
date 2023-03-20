#include "myString.h"
#include <stdio.h>


void mystrpy(char *a, char *b)
{
	while(*a != '\0')
	{
		*b = *a;
		a++;
		b++;
	}
	*b = '\0';
}

char *mystrncpy(char *a, char *b, size_t n)
{
	char *p = b; 
	while(*a && n--)
	{
		*b = *a;
		a++;
		b++;
	}
	*b = '\0';
	return p;
}

void mystrcat(char *a, char *b)
{
	int i = 0;
	while(a[i] != '\0')
	{
		i++;
	}
	a[i] = ' ';
	int l = i + 1, r = 0;
	while(b[r] != '\0')
	{
		a[l] = b[r];
		l++;
		r++;
	}
	a[l] = '\0';
	printf("%s",a);
}

char *mystrncat(char *a, char *b, size_t n)
{
	int i = 0;
	char *p = a;
	while(a[i] && n--)
	{
		i++;
	}
	a[i] = ' ';
	int l = i + 1, r = 0;
	while(b[r] && n--)
	{
		a[l] = b[r];
		l++;
		r++;
	}
	a[l] = '\0';
	return p;
}

int mystrcmp(char *a, char *b)
{
	int i = 0, r = 0, t = 0;
	
	while(a[t] != '\0')
	{
		t++;
	}
	while(a[i] != '\0')
	{
		if(a[i] == b[i])
			r++;
		i++;
	}
	if(t == r)
		return 0;
	else
		return 1;
}

int mystrncmp(char *a, char *b, size_t n)
{
	int t = 0, i = 0, r = 0;
	while(a[t] && n--)
	{
		t++;
	}
	while(a[i] && n--)
	{
		if(a[i] == b[i])
			r++;
		i++;
	}
	if(t == r)
		return 0;
	else
		return 1;
}



