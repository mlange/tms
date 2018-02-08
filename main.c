#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    long ii = 0;

    char byte;

    FILE *infile;

    infile = fopen(argv[1], "r");

    while (fread(&byte, 1, 1, infile))
    {
	ii++;

	if (byte == 10)
	    printf("Byte %06ld: Found <lf>\n", ii);

	if (byte == 13)
	    printf("Byte %06ld: Found <cr>\n", ii);
    }

    fclose(infile);

    printf("\nBYTES: %d\n", ii); 

    exit(0);
}
