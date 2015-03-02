#include<conio.h>
 #include<stdio.h>
 #include<string.h>

int main(int argc, char *argv[])
 {
     FILE *target;
 char site_name[30];

  target=fopen("C:\\windows\\system32\\drivers\\etc\\hosts","a+");

char ip,ans;
 fseek(target,0,SEEK_END);
do
{
    printf("enter the site to block :");
    scanf("%s[^\n]",site_name);
 fprintf(target,"%s\t%s\n",ip,site_name);
printf("\n%s,%s",ip,site_name);
printf("\nblock another site y\n");
ans=getch();

}while(ans=='y');
 fclose(target);


return 0;
 }
