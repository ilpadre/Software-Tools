#include <stdio.h>

void  copy(FILE* ifp, FILE* ofp);


int main(int argc, char* argv[])
{
	FILE* fp;
	if (argc == 1)
	{
		copy(stdin, stdout);
	}
	else
	{
		while (--argc > 0)
		{
			if ((fp = fopen(*++argv, "r")) == NULL)
			{
				printf("copy: can't open %s\n", *argv);
				return -1;
			}
			else
			{
				copy(fp, stdout);
				fclose(fp);
			}
		}
	}
	return 0;
}
