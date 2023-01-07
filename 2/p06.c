#include <stdio.h> 
#include <math.h>

int main() 
{

char k;
float tot = 0, seq =0 ;

while(scanf ("%c", &k) == 1 )
 {
	if (k == 'C'|| k  == 'G' || k == 'c' || k == 'g' )
	{
		tot++;
	}

	seq++;
 }

	printf("The GC persentage is: %f%%\n",100*(tot/seq));


}
