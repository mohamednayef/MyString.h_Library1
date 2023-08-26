//*********************************************************************
//  mystring.h
//  MyString.h_Library
//
//  Created by Mohamed Nayef on 25/08/2023.
//
//  Brief "An implement of ("mystring.h") library"
//*********************************************************************

#ifndef mystring_h
#define mystring_h

/******************************************** Include Section Start ********************************************/
#include <stdio.h>
/******************************************** Include Section End  ********************************************/


/******************************************** Declare Functoins Section Start ********************************************/

///1 this function take string and value and size, the function search about value if exist return pointer point to this value else return NULL
void *my_memchr(const void *str, int c, size_t n);  ///**Done**

///2 this function take two string and return 0 if (two equal other) positive number if(str1 > str2) negative number if(str1 < str1)
int my_memcmp(const void *str1, const void *str2, size_t n);  ///**Done**

///3 this function copy value from source to destination
void *my_memcpy(void *start, const unsigned char *src, unsigned int length);   ///**Done**

///4
void *my_memmove(void *str1, const void *str2, size_t n);  ///**Done**

///5 this function set value in address in memory
void *my_memset(void *start, unsigned char value, unsigned int  length); ///**Done**

///6 there is an arror don't understand *************************************************************************************************************************
//char *my_strcat(char *dest, const char *src);

///7
char *my_strncat(char *dest, const char *src, size_t n);  ///**Done**

///8 this function take string and value, the function search about value if exist return pointer point to this value else return NULL
char *my_strchr(const char *str, int c);  ///**Done**


///9 this function take two string and return (positive number if str1 > str2), (negative number if str1 < str2), (0 if the two is equal others)
int my_strcmp(const char *str1, const char *str2);  ///**Done**

///10
int my_strncmp(const char *str1, const char *str2, size_t n);  ///**Done**

///11 what it do??don't understand *************************************************************************************************************************
int my_strcoll(const char *str1, const char *str2);

///12 this function copy string from src to dest
char *my_strcpy(char *dest, const char *src);  ///**Done**

///13 this function copy n chars from src to des
char *my_strncpy(char *dest, const char *src, size_t n);  ///**Done**

///14 this function take two string and calculate what number of char in first not exist in the second
size_t my_strcspn(const char *str1, const char *str2);  ///**Done**

///15 don't understand ******************************************************************************************************************************************************
char *strerror(int errnum);

///16 this function take string and return the length of this function
size_t my_strlen(const char *str);  ///**Done**

///17 this function take two string and return pointer points to firs charcater in str1 exist in str2
char *my_strpbrk(const char *str1, const char *str2);  ///**Done**

///18 this funciton take string and value, return pointer points to last char in string equal to this value
char *my_strrchr(const char *str, int c);  ///**Done**

///19 this function take two string and return the first number of char equal two other
size_t my_strspn(const char *str1, const char *str2);  ///**Done**

///20 this function take two string, return pointer points to first substring in haystack is equal to needle
char *my_strstr(const char *haystack, const char *needle);  ///**Done**

///21 don't understand ******************************************************************************************************************************************************
char *my_strtok(char *str, const char *delim);

///22 don't understand ******************************************************************************************************************************************************
size_t my_strxfrm(char *dest, const char *src, size_t n);
/******************************************** Declare Functoins Section End  ********************************************/






#endif /* mystring_h */
