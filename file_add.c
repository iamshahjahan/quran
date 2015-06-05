#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	FILE *fp2=fopen("trans.txt","w+");

	char line[10000];
	char changed[10012];
	char space[5];
	// strcpy(space,'');

	fp = fopen("quran.txt","rw");

	while( fgets(line,10000,fp) != NULL )
	{
		if ( strcmp(line,"\n") == 0)
		{
			continue;
		}
		strcpy(changed,"<item> ");
		strcat(changed,"\n");
		strcat(line,"</item>");
		strcat(line,"\n");
		strcat(changed,line);
		

		fputs(changed,fp2);
	}
	return 0;
}
