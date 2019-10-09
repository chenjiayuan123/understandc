#include <stdio.h>
int main(void)
{
	int i = 0;
	int linenum = 1;
	char ch[128];
	while (ch[i] = getchar())
	{
		if (ch[i] == EOF)
			break;
		if (ch[i] == '\n')
			linenum++;
		i++;
	}
	printf("\nlinenum =%d\n",linenum);
	return 0;
}