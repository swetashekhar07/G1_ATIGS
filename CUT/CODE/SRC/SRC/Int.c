
/************************************************************************************************************
 * * FILENAME : Int.c
 *
 * * DESCRIPTION : This file contains a function to create output file and calls PrintFile function.
 * * REVISION HISTORY:
 * *             NAME                       REFERENCE                    		   REASON
 * * --------------------------------------------------------------------------------------------------------------
 * *           Group-1		                  NEW                        NEW CODE TO PERFORM GIVEN OPERATIONS
 * *
 * * *********************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"

extern int n_out;
extern char* out_file_path;
extern char* Test_Parameter_String;
extern char* Test_Parameter_Name;
extern int Test_Parameter_Int;
void PrintFile();

/*****************************************************************************************
 * * FUNCTION NAME : CompareInt()
 *   
 * * DESCRIPTION : This function will create desired number of output files 
 *                 and will call PrintFile function 
 *                  
 *
 * * RETURNS : Returns nothing as it's return type is void
 * * *************************************************************************************/
void CompareInt() {
FILE *fp;
char* file_extension = ".txt";

    for(int i = 0 ; i < n_out ; i++)
    {
        strcat(out_file_path, file_extension);
        PrintFile(); //function inside file Print.c
    }
}