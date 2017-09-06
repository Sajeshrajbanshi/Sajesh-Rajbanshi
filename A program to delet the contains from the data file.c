#include<stdio.h>
void main()
{
char name[25],choice[25];
int age;
FILE *fp,*ff;
fp=fopen("student.dat","r");
fp-fopen("new.dat","a");
printf("enter name to delet");
scanf("%s",&choice);
while(fscan(fp,"%s%d",&name,&age)!=EOF)
{
if(strcmp(choice,name)!=0)
fprint(ff,"%s\t%d\n",name,age);

}
remove("student.dat");
rename("new.dat","student.dat");
fclose(fp);
fclose(ff);
getch();

}
