// PrintArray.cpp : Defines the entry point for the console application.
// Print diamon '*' for test.

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>  // memset

#define DIAMOND_HEIGHT 11

int _tmain(int argc, _TCHAR* argv[])
{
	int dia_h = 0;
	char cSign = '*';

	if( argc == 3 )
	{
		dia_h = atoi( (const char *)argv[1] );
		cSign = argv[2][0];
	}

	if( (dia_h < 5) || (dia_h > 100) )  // invalid argv
		dia_h = DIAMOND_HEIGHT;

	char *array = (char *)malloc(dia_h + 2);
	//char array[DIAMOND_HEIGHT+3]; // the end is '\0'
	array[dia_h] = '\n';
	array[dia_h+1] = '\0';
	int center = dia_h/2;

	for( int row=1; row <= dia_h; row++ )
	{
		memset( array, ' ' , dia_h );
		array[center] = cSign;
		if( row <= center )
		{
			for(int i=1; i<row; i++ )  // from 2rd line
			{
				array[center + i - row] = cSign;
				array[center - i + row] = cSign;
			}
		}
		else
		{
			for(int i=dia_h; i>row; i-- )
			{
				array[center + i - row] = cSign;
				array[center - i + row] = cSign;
			}
		}

	    //printf( "line %3d:%s", row, array );
		printf( array );
	}

	free( array );
	//while(1);
	char cTmp;
	printf( "\n\nPress any key to quit:");
	scanf( "%c", &cTmp );

	return 0;
}

