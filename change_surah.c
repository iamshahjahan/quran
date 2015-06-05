
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
		strcpy(file_name,"quran.txt");
		strcpy(file_name1,"quran_with_item_tag/");
		// strcat(file_name,index);
		strcat(file_name1,index);
		fp = fopen(file_name1,"r");
		fp1 = fopen(file_name,"w+");
		char *tok;
		int j = 0;
		// int k = 0;

		// while( fgets(line,10000,fp) != NULL )
		// {
		while( fgets(line,10000,fp) != NULL )
		{
			
			 fputs(line,fp1);
		}
		// fputs("\n",fp1);
	}		
		// fp = fopen("quran_with_item_tag/file_name","w+");

	

	
	return 0;
}