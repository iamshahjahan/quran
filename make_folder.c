#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *fp,*fp1;
	int i;

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
		fp = fopen(file_name,"r");
		fp1 = fopen(file_name1,"w+");

		while( fgets(line,10000,fp) != NULL )
		{
			if ( strcmp(line,"\n") == 0 || strcmp(line,"Surah Index | NobleQuran.com | Dar-us-Salam.com | Khutba.org | SahihMuslim.org") || strcmp(line,"") )
			{
				continue;
			}
			
			fputs(changed,fp2);
		}		
		// fp = fopen("quran_with_item_tag/file_name","w+");

	}
	
	return 0;
}
