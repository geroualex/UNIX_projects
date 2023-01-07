#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{

char seq[5000];
int i, length;
float tot;
 	scanf("%s", seq);

	length = strlen(seq);
	for (i=0; i<length; i++)
	{
		if(seq[i] == 'G' || seq[i] == 'C' || seq[i] == 'g' || seq[i] == 'c')
		{
			tot++;
		}
	}

	printf("GC content is %f\n", 100*tot/length);


}
