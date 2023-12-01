#include <stdlib.h> 
#include <string.h>
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    i = 0; 
    char *reslt = malloc((strlen(s)+1) *sizeof(char)); 
    if(reslt == NULL || s == NULL )
    return 0; 
    while(i< strlen(s))
    {
        reslt[i] = f(i,s[i]) ; 
        printf("this %c \n",s[i]);
        i++; 
    } 
    reslt[i] = '\0' ; 
    return  reslt ;
}