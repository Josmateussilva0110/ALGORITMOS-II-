#include <stdio.h>
int main()
{
	int h1, h2, m1, m2, mh, meh, mm, me, s, p;
	scanf("%d%d%d%d",&h1,&h2,&m1,&m2);
	if (h1 > h2)
	{
		mh = h1;
		meh = h2;
	}
	else 
	{
		mh = h2;
		meh = h1;
	}	
	if (m1 < m2)
	{
		mm = m1;
		me = m2;
	}
	else 
	{
		mm = m2;
		me = m1;
	}
	s = mh + mm;
	p = meh * me;
	printf("%d %d",s,p);
}