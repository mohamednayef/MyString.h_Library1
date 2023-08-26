//
//  mystring.c
//  MyString.h_Library
//
//  Created by Mohamed Nayef on 25/08/2023.
//

#include "mystring.h"


//1
void *my_memchr(const void *str, int c, size_t n){
    if(str == NULL){
//        printf("Invalid Pointer!!\n");
    }
    else{
        for(size_t i=0; i<n; i++){
            if(*(unsigned char *)(str + i) == (unsigned char)(c))
                return (unsigned char *)(str + i);
        }
    }
    
    return NULL;
}

//2
int my_memcmp(const void *str1, const void *str2, size_t n){
    unsigned char *first  = (unsigned char *)str1;
    unsigned char *second = (unsigned char *)str2;
    if((first == NULL) || (second == NULL)){
        printf("Invalid Pointer!!\n");
        return 0;
    }
    else{
        while(n--){
            if(*first != *second){
                return (*first - *second);
            }
            first++;
            second++;
        }
    }
    return 0;
}

//3
void *my_memcpy(void *start, const unsigned char *src, unsigned int length){
    unsigned char *TmpPtr = start;
    
    if(TmpPtr == NULL){
        printf("Invalid Pointer!!\n");
    }
    else{
        while(length--){
            *TmpPtr++ = *src++;
        }
    }
    
    return start;
}

//4
void *my_memmove(void *str1, const void *str2, size_t n){
    unsigned char *dest = (unsigned char *)str1;
    unsigned char *src  = (unsigned char *)str2;
    
    if((dest == NULL) || (src == NULL)){
        return NULL;
    }
    else{
        while(n--){
            *dest++ = *src++;
        }
    }
    
    return str1;
}

//5
void *my_memset(void *start, unsigned char value, unsigned int  length){
    unsigned char *TempPtr = start;
    
    if(start == NULL){
        printf("my_memset function faild due to a NULL pointer!\n");
    }
    else{
        while(length--){
            *TempPtr++ = value;
            }
    }
    
    return start;
}


//6  
/* char *my_strcat(char *dest, const char *src){
    char *start = dest;
    while(*start != '\0'){
        start++;
    }
    while(*src != '\0'){
        *start++ = *src++;
    }
    *start = *src++;
    
    return dest;
} */

//7
char *my_strncat(char *dest, const char *src, size_t n){
    char *start = dest;
    
    while(*start != '\0')
        start++;
    
    while(n--){
        *start++ = *src++;
    }
    
    return dest;
}

//8
char *my_strchr(const char *str, int c){
    char *Ptr = (char *)str;
    if(Ptr == NULL){
        printf("Invalid Pointer !!\n");
    }
    else{
        while(*Ptr++ != '\0'){
            if(*Ptr == c)
                return Ptr;
        }
    }
    
    return NULL;
}

//9
int my_strcmp(const char *str1, const char *str2){
    if((str1 == NULL) || (str2 == NULL)){
        printf("Invalid Pointer !!\n");
    }
    else{
        do{   
            if(*str1 != *str2){
                return (*str1 - *str2);
            }
            str1++;
            str2++;
        }while((*str1 != '\0') || (*str2 != '\0'));
    }
    
    
    return 0;
}

//10
int my_strncmp(const char *str1, const char *str2, size_t n){
    if((str1 == NULL) || (str2 == NULL)){
        printf("Invalid Pointer !!\n");
    }
    else{
        for(size_t i=0; i<n; i++){
            if(str1[i] != str2[i]){
                return (str1[i] - str2[i]);
            }
            if((str1[i] == '\0') || (str2[i] == '\0')){
                return (str1[i] - str2[i]);
            }
        }
//        while(n--){
//            printf("%c\t%c\n",*str1,*str2);
//            if(*str1++ != *str2++){
//                printf("%d\n",*str1 - *str2);
//                printf("%c\t%c\n",*str1,*str2);
//                return (*str1 - *str2);
//
//            }
//        }
    }
    return 0;
}

//11
int my_strcoll(const char *str1, const char *str2);

//12
char *my_strcpy(char *dest, const char *src){
    char *first = dest;
    char *second= (char *)src;
    if((first == NULL) || (second == NULL)){
        printf("Invalid Pointer !!\n");
    }
    else{
        while(*second!='\0'){
            *(first) = *(second);
            first++;
            second++;
        }
        *first = '\0';
    }
    return dest;
}

//13
char *my_strncpy(char *dest, const char *src, size_t n){
    char *dest1 = dest;
    
    if((dest == NULL) || (src == NULL)){
        printf("Invalid Pointer !!\n");
    }
    else{
        while((n>0) && (*src !='\0')){
            *dest1++ = *src++;
            n--;
        }
        while(n-->0){
            *dest1 = '\0';
            dest1++;
        }
        *dest1 = '\0';
    }
    
    
    return dest;
}

//14 
size_t my_strcspn(const char *str1, const char *str2){
    size_t i=0;
    
    if((str1 == NULL) || (str2 == NULL)){
        printf("Invalid Pointer !!\n");
    }
    else{
        for(i=0; str1[i] != '\0'; i++){
            for(size_t j=0; str2[j] != '\0'; j++){
                if(str2[j] == str1[i]){
                    return i;
                }
            }
        }
    }
    return i;
}

//15

//16
size_t my_strlen(const char *str){
    unsigned long len = 0;
    if(str == NULL){
        printf("Invalid Pointer !!\n");
    }
    else{
        while(*str++ != '\0')
            len++;
    }
    
    return len;
}

//17
char *my_strpbrk(const char *str1, const char *str2){
    if((str1 == NULL) || (str2 == NULL)){
        printf("Invalid Pointer !!\n");
    }
    else{
        for(size_t i=0; str1[i] != '\0'; i++){
            for(size_t j=0; str2[j] != '\0'; j++){
                if(str2[j] == str1[i]){
                    return (char *)(str1+i);
                }
            }
        }
    }
    
    return NULL;
}

//18
char *my_strrchr(const char *str, int c){
    char *ptr = NULL;
    while(*str++ != '\0'){
        if(*str == c){
            ptr = (char *)str;
        }
    }
    
    return ptr;
}

//19
size_t my_strspn(const char *str1, const char *str2){
    size_t len = 0;
    
    if((str1 == NULL) || (str2 == NULL)){
        printf("Ivalid Pointer\n");
    }
    else{
        while((*str1 == *str2) && (*str1 != '\0') && (*str2 != '\0')){
            len++;
            str1++;
            str2++;
        }
    }
    
    return len;
}

//20
char *my_strstr(const char *haystack, const char *needle){
    char *p = (char *)needle;
    
    if((haystack == NULL) || (needle == NULL)){
        printf("Invalid Pointer !!\n");
    }
    else{
        while(*haystack != '\0'){
            for(size_t i=0; 1; i++){
                if(p[i] == '\0'){
                    return (char *)haystack;
                }
                if(p[i] != haystack[i]){
                    break;
                }
            }
            haystack++;
        }
    }
    
    return NULL;
}

//21
char *my_strtok(char *str, const char *delim);

//22
size_t my_strxfrm(char *dest, const char *src, size_t n);
