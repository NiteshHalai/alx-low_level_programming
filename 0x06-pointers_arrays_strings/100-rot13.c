#include"main.h"

/**
* rot13 - Rot13 encoder
*
* @n: input function argument
*
* Return: outpuy
*/


char *rot13(char *s)
 
char* result = malloc(strlen(s));
char* current_char = result;
{
    if(s == NULL){
      return NULL;
    }
    
    if(result != NULL){
      strcpy(result, s);
      
      
      while(*current_char != '\0'){
        if((*current_char >= 97 && *current_char <= 122) || (*current_char >= 65 && *current_char <= 90)){
          if(*current_char > 109 || (*current_char > 77 && *current_char < 91)){
            *current_char -= 13;
          }else{
            *current_char += 13;
          }
        }
        current_char++;
      }
    }
    return result;
}
