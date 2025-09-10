#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    scanf("%s",a);
    scanf("%s",b);
    int i;
    int len_a=strlen(a);//library function for findout the string length.
    int len_b=strlen(b);
    for(int i=0;a[i]!='\0'||b[i]!='\0';i++){
        if(a[i]!=b[i]){
            printf("No");
        }
        else 
        printf("Yes");
    }
}
    