
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]="ya";
    char b[100]="yam";
    int ab=strcmp(a,b);//strcmp is a string compare function.
    printf("%d",ab);
    /*
    note:
    (1)If you get the output is o,
    Both string are same.
    (2)IF you get the output is -ve
    the second string is bigger then first string
    (3)If you get the output is +ve 
    the first string is Bigger then second string
    */
}  