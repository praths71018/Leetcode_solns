// Optimal solution I found
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* mergeAlternately(char* word1, char* word2) {
    size_t length1 = strlen(word1);
    size_t length2 = strlen(word2);
    char* a = (char*)malloc(sizeof(char) * (length1 + length2 + 1 )); 
    size_t i, j, k;
    for (i = 0, j = 0, k = 0; i < length1 || j < length2; i++, j++) {
        if (i < length1)
            a[k++] = word1[i];
        if (j < length2)
            a[k++] = word2[j];
    }  
    a[k] = '\0';

    return a;
}

// My Solution
char * mergeAlternately(char * word1, char * word2){
    char * word3=calloc(1000,sizeof(char));
    int track=0;
    int len=0;
    if(strlen(word1)>strlen(word2)){
        for(int i=0;i<strlen(word2);i++){
            word3[len]=word1[i];
            word3[len+1]=word2[i];
            len+=2;
            track++;
        }
        for(int i=track;i<strlen(word1);i++)
        {
            word3[len]=word1[i];
            len++;
        }
    }
    else if(strlen(word2)>strlen(word1)){
        for(int i=0;i<strlen(word1);i++){
            word3[len]=word1[i];
            word3[len+1]=word2[i];
            len+=2;
            track++;
        }
        for(int i=track;i<strlen(word2);i++)
        {
            word3[len]=word2[i];
            len++;
        }
    }
    else{
        for(int i=0;i<strlen(word1);i++){
            word3[len]=word1[i];
            word3[len+1]=word2[i];
            len+=2;
        }
    }
    return word3;
}
