#include<stdio.h>
#include<string.h>
int main()
{
    char a[67]="UIU";
    int i,j,temp;
    int length=strlen(a);
    for(i=0,j=length-1;i<=j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }
    printf("%s",a);
    return 0;
}