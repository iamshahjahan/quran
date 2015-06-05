#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	FILE *fp1;

	char line[10000];
	char changed[10012];
	char space[5];
	int i;
	// strcpy(space,'');

	for ( i = 1 ; i < 115 ; i++ )
	{
		char file_name[100];
		char file_name1[100];
		char index[4];
		sprintf(index, "%d", i);
		// strcpy(file_name,"quran_original/");
		strcpy(file_name,"quran_original/");
		strcpy(file_name1,"quran/");
		strcat(file_name,index);
		strcat(file_name1,index);
		fp = fopen(file_name,"r");
		fp1 = fopen(file_name1,"w");
		char *tok;
		int j = 0;
		// int k = 0;

		// while( fgets(line,10000,fp) != NULL )
		// {
		while( fgets(line,10000,fp) != NULL )
		{
			j++;
			if ( strcmp(line,"\n") == 0 )
			{
				continue;
			}
			else if ((tok = strstr(line,"Surah") )&& ( j < 6))
			{
				tok = strstr(tok," ");
				tok = strtok(tok," ");

				strcpy(changed,"<string-array name=\"");
				strcat(changed,index);
				strcat(changed,"\">");
				fputs(changed,fp1);

			}
			else
			{
				strcpy(changed,"<item> ");
				strcat(changed,"\n");
				strcat(line,"</item>");
				strcat(line,"\n");
				strcat(changed,line);
				

				fputs(changed,fp1);
			}
		}
	 fputs("</string-array>",fp1);
	}		
		// fp = fopen("quran_with_item_tag/file_name","w+");

	

	
	return 0;
}
