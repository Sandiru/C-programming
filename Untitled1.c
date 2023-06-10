#include<stdio.h>
#include<string.h>


int main(){
    char name[100];
    printf("Enter name: ");
    gets(name);
    puts(strrev(name)); //Using C function

    /*for(int i=strlen(name)-1;i>=0;i--){
        printf("%s",name[0]);              //Without using C function
    }*/

}






