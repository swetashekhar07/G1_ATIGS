/************************************************************************************************************
 * * FILENAME : String.c
 *
 * * DESCRIPTION : This file contains a function to create output file and calls PrintFile function.
 * * REVISION HISTORY:
 * * DATE              NAME                       REFERENCE                    		   REASON
 * * --------------------------------------------------------------------------------------------------------------
 * * 21 Nov 2022     Group-1		              NEW                        NEW CODE TO PERFORM GIVEN OPERATIONS
 * *
 * * *********************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"

extern int n_out;
extern char* out_file_path;
extern int flag;
extern char* Test_Parameter_String;
extern char* Test_Parameter_Name;
void PrintFile();

/*****************************************************************************************
 * * FUNCTION NAME : CompareString()
 *   
 * * DESCRIPTION : This function will create desired number of output files 
 *                 and will call PrintFile function 
 *                  
 *
 * * RETURNS : Returns nothing as it's return type is void
 * * *************************************************************************************/
void CompareString() {
    flag = 0;
FILE *fp;
char* file_extension = ".txt";

    for(int i = 0 ; i < n_out ; i++)        //n_out is number of output file
    {
        strcat(out_file_path, file_extension);
        PrintFile();                        //function inside file Print.c
    }
}