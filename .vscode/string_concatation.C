#include<stdio.h>
#include<string.h>
int main()
{
    char a[456] ;
    char b[890] ;
    scanf("%s",a);
    scanf("%s",b);
    int l1, l2 , length;
    int i,j;
    for(int i=0; a[i] != '\0'; i++){
        l1++;
    }
    // int len1=strlen(l1); this is a library fnction if you want you can use it 
    for(int j=0; b[j] != '\0'; j++){
        l2++;
    }

    length = l1 + l2;
    for(int i=l1,j=0;i<length;i++,j++){
        a[i]=b[j];
        //0 1 2 3 4    5 6 7 Note:for J will start in j=0
        //H E L L O    Y A M
    }
    printf("%s",a);
    return 0;
}
