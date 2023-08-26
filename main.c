
//  main.c
//  MyString.h_Library
//
//
//  Created by Mohamed Nayef on 25/08/2023.
//mohamed

#include <stdio.h>
#include "mystring.h"
#include <string.h>

int main(int argc, const char * argv[]) {
    //MohamedNayefAhmedElRifaayMohamedIbrahimMohamedHassanElSayedGommaaElGammal
    char str[80] = "abcdefghabcdefghabcdefgh";
    const char s[5] = "af";
    char *token;
    
    /* get the first token */
    token = strtok(str, s);
    
    /* walk through other tokens */
    while( token != NULL ) {
       printf( "%s\n", token );
     
       token = strtok(NULL, s);
    }
    
    
    
    return 0;
}
