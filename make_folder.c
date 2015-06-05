#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int i;

	for ( i = 1 ; i < 115 ; i++ )
	{
		char file_name[100];
		char index[4];
		sprintf(index, "%d", i);
		// strcpy(file_name,"quran_original/");
		strcpy(file_name,"quran_with_item_tag/");
		strcat(file_name,index);
		fp = fopen(file_name,"w+");
		
		// fp = fopen("quran_with_item_tag/file_name","w+");

	}
	
	return 0;
}
