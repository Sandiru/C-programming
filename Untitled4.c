#include<stdio.h>
#include<string.h>


int main(){
    char name[100],str;
    int i,j,flag;

    printf("Enter the string:");
    gets(name);
    for(int i=0;i<strlen(name)-1;i++){
        for(int j=0;j<strlen(name)-1;j++){
             if(name[i]==name[j] && i!=j){
                    flag=1;
             }
        }
        printf("%c",name[i]);
         if(flag!=1){
           printf("%c",name[i]);
           break;
         }
    }

}
