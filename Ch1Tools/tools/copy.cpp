#include "pch.h"
#include <stdio.h>
#include "copy.h"


void copy(FILE* ifp, FILE* ofp)
{
	int c;
	while ((c = getc(ifp)) != EOF)
	{
		putc(c, ofp);
	}
}