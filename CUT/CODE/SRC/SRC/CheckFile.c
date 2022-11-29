/************************************************************************************************************
 * * FILENAME : CheckFile.c
 *
 * * DESCRIPTION : This file contains a function which validates an input file.
 *
 * * REVISION HISTORY:
 * *               NAME                       REFERENCE                    		   REASON
 * * --------------------------------------------------------------------------------------------------------------
 * *               Group-1		                  NEW                        NEW CODE TO PERFORM GIVEN OPERATIONS
 * *
 * * *********************************************************************************************************/
#include<stdio.h>

#include<stdlib.h>

#include<string.h>
#include"header.h"
extern char * Test_Parameter_Name;
extern char * Test_Parameter_Type;
extern char * Test_Parameter_String;

char * dummyInt = "int";
char * dummyString = "string";
char * dummyFloat = "float";
char * dummyBoolean = "boolean";
/*****************************************************************************************
 * * FUNCTION NAME : CheckFileForValidity()
 *   
 * * DESCRIPTION : This function validates the input file and displays error if any, 
 *                 with offending line number.
 *
 * * RETURNS : Returns 0 if no error, Returns 1 if there is any error.
 * * *************************************************************************************/
int CheckFileForValidity() {
  if(Test_Parameter_Name == NULL) {
    printf("\nERROR IN INPUT FILE LINE 1. PARAMETER NAME IS REQUIRED");
    return 1;
  }
  else if(Test_Parameter_Type == NULL) {
    printf("\nERROR IN INPUT FILE LINE 2. PARAMETER TYPE IS REQUIRED");
    return 1;
  }
  else if(Test_Parameter_String == NULL) {
    printf("\nERROR IN INPUT FILE LINE 3. PARAMETER VALUE IS REQUIRED");
    return 1;
  }
  /*else if(strcmp(Test_Parameter_Type, dummyInt) != 0 || strcmp(Test_Parameter_Type, dummyFloat) != 0 || strcmp(Test_Parameter_Type, dummyString) != 0 || strcmp(Test_Parameter_Type, dummyBoolean) != 0) {
    printf("\nERROR IN INPUT FILE LINE 2. THIS DATATYPE IS NOT ACCEPTED");
    return 1;
  }*/
  else {
    return 0;
  }
}