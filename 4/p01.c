#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{


char seq[50000];
int i, length, pos, pos2, j, plength;
printf("Type an allele sequence:\n");
scanf("%s", seq);

length = strlen(seq);

for (i=0; i<strlen(seq); i++)
	{
		if (seq[i] != 'A' && seq[i] != 'T' && seq[i] != 'G' && seq[i] != 'C' && seq[i] != 'a' && seq[i] != 't' && seq[i] != 'g' && seq[i] != 'c')
		{
			printf("Invalid sequence: %c use only A,T,G,C or a,t,g,c. \n", seq[i]);
			return 1;
		}
	}

for (i=0; i<length; i++)
	{

		if((seq[i] == 'A'|| seq[i] == 'a') && (seq[i+1] == 'T'|| seq[i+1] == 't') && (seq[i+2] == 'G'|| seq[i+2] == 'g'))
		{

			pos=i; //starting position of ATG
			//printf("pos is %d\n",pos);
			//printf("clearin all before ATG: %s\n",&seq[pos]);
			break;
		}

	}

for (i=pos ;i<length+3; i+=3)
{


		if((seq[i] == 'T' || seq[i] == 't') && (seq[i+1] == 'G'|| seq[i+1] == 'g') && (seq[i+2] == 'A' || seq[i+2] == 'a'))
		{
			pos2=i; //starting position of ending codon
			//printf("TGA found at pos2: %d\n", pos2);
			break;

		}


		else if((seq[i] == 'T' || seq[i] == 't') && (seq[i+1] == 'A' || seq[i+1] == 'a') && (seq[i+2] == 'G'|| seq[i+2] == 'g' || seq[i+2] == 'A' || seq[i+2] == 'a'))
		{
			pos2=i;
			//printf("TAG or TAA found at pos2: %d\n", pos2);
			break;
		}



}

plength = pos2-pos+3;

if  ((plength%3==0) && (plength>3) && (pos>=0))
	{
		//printf("starting position of ATG : %d\n",pos);
		//printf("position of ending codon: %d\n",pos2);
		//printf("lenght of protein: %d\n",plength);

		printf("The prot seq: %.*s\n", plength, seq+pos); //pos is starting point
	}

else
	{
		printf("No protein found\n");
	return 2;
	}

}


