/************************************************************************************************************
 * * FILENAME : ReadFile.c
 *
 * * DESCRIPTION : This file contains function to read file and store value.
 *
 * * REVISION HISTORY:
 * *              NAME                       REFERENCE                    		   REASON
 * * --------------------------------------------------------------------------------------------------------------
 * *             Group-1		                   NEW                        NEW CODE TO PERFORM GIVEN OPERATIONS
 * *
 * * *********************************************************************************************************/
#include<stdio.h>

#include<stdlib.h>

#define MAX_LINES 100
#define MAX_LEN 1000
#include"header.h"
extern char * in_file_path;
extern char * Test_Parameter_Name;
extern char* Parameter_Name;
extern char * Test_Parameter_Type;
extern char * Test_Parameter_String;
/*****************************************************************************************
 * * FUNCTION NAME : ReadInputFile()
 *   
 * * DESCRIPTION : This function will open the input file, checks whether it is null or not.
 *                 If it is not null then all content of the file are stored in a variable. 
 *                  
 *
 * * RETURNS : Returns nothing as it's return type is void
 * * *************************************************************************************/
void ReadInputFile() {
  char data[MAX_LINES][MAX_LEN];
  FILE * file;
  file = fopen(in_file_path, "r");
  if (file == NULL) {
    printf("\nError opening file.\n");
    exit(0);
  }
  int line = 0;

  int line_counter = 0;

  while (!feof(file) && !ferror(file)) {
    if (fgets(data[line], MAX_LEN, file) != NULL) {
      line++;
    }
  }
  fclose(file);
  for (int i = 0; i < line; i++) {
    if(data[i][0] != '#') {
    if (line_counter == 0) {
      Test_Parameter_Name = data[i];
    } else if (line_counter == 1) {
      Test_Parameter_Type = data[i];
    } else if (line_counter == 2) {
      Test_Parameter_String = data[i];
    } 
    line_counter++;
    }
  }
  }