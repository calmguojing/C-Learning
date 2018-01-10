#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    char *s = "hello,world!";
    char *s1 = (char *)malloc((strlen(s) + 1) * sizeof(char));
    int i = 0;
    
    printf("sizeof(s):%d,  sizeof(*s): %d, strlen(s): %d\n", sizeof(s), sizeof(*s), strlen(s));
    for(i=0; i<strlen(s); i++){
        s1[i] = toupper(s[i]);
    }
    s1[strlen(s)] = '\0';
    printf("%s\n", s1);
    return 0;
}
