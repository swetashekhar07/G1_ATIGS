/************************************************************************************************************
 * * FILENAME : Print.c
 *
 * * DESCRIPTION : This file contain functions to create and write inside output file.
 *
 * * REVISION HISTORY:
 * *             NAME                       REFERENCE                    		   REASON
 * * --------------------------------------------------------------------------------------------------------------
 * *            Group-1		                  NEW                        NEW CODE TO PERFORM GIVEN OPERATIONS
 * *
 * * *********************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"
extern char* out_file_path;
extern char* Parameter_Name;
extern char* Test_Parameter_String;
extern char* Test_Parameter_Name;
extern char* input_file_path;

int flag;

/*****************************************************************************************
 * * FUNCTION NAME : CreateFile()
 *   
 * * DESCRIPTION : This function will open output file.
 *
 * * RETURNS : Returns nothing as it's return type is void
 * * *************************************************************************************/
void CreateFile() {
    FILE *fp;
    fp  = fopen (out_file_path, "w");
    fclose(fp);
}
/*****************************************************************************************
 * * FUNCTION NAME : WriteFile()
 *   
 * * DESCRIPTION : This function will write inside output file.
 *
 * * RETURNS : Returns nothing as it's return type is void
 * * *************************************************************************************/

void WriteFile() {
    FILE* file;
    file = fopen(out_file_path, "w");
 
     fprintf(file, "%s\t%s", Test_Parameter_Name, Test_Parameter_String);

    fclose(file);
}
/*****************************************************************************************
 * * FUNCTION NAME : PrintFile()
 *   
 * * DESCRIPTION : This function will call CreateFile() and WriteFile()
 *
 * * RETURNS : Returns nothing as it's return type is void
 * * *************************************************************************************/
void PrintFile() {
    
    CreateFile();
    WriteFile();
    
}