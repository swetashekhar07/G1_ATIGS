/************************************************************************************************************
 * * FILENAME : ReadSettings.c
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
#include"header.h"
#define MAX_LINES 100
#define MAX_LEN 1000

extern char* out_file_path;

/*****************************************************************************************
 * * FUNCTION NAME : ReadSettingsFile()
 *   
 * * DESCRIPTION : This function will open the configuration file, checks whether it is null or not.
 *                 If it is not null then value is stored in a variable. 
 *                  
 *
 * * RETURNS : Returns nothing as it's return type is void
 * * *************************************************************************************/
void ReadSettingsFile() {
    char data[MAX_LINES][MAX_LEN];
    FILE* file = fopen("Settings.config", "r");
  if (file == NULL) {
    printf("\nError opening file.\n");
    exit(0);
  }

  int line = 0;
  while (!feof(file) && !ferror(file)) {
    if (fgets(data[line], MAX_LEN, file) != NULL) {
      line++;
    }
  }
  fclose(file);
  for (int i = 0; i < line; i++) {
    if (i == 0) {
      out_file_path = data[i];
    } else {
      printf("Error In Input File Format");
      exit(0);
    }
  }  
}