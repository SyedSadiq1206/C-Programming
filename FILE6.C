# include <stdio.h>
void main( )
{
	int ch ;
	FILE *fp;
	clrscr();
	fp = fopen("C:\\file\\ascii.txt", "w+");
	for ( ch = 0 ; ch <= 255 ; ch++ )
	{	
		printf ( "%d %c\n", ch, ch ) ;
		fprintf(fp,"%d=%c\n",ch,ch);
	}
	fclose(fp);
}