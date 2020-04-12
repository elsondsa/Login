#include<stdio.h>

#include<string.h>

void main()

{

 int c=0,t=0,k=0,a=0;

long long int pn,p;

 FILE *fp1,*fp2;
 
char s[20],name[20];
 
printf("Welcome to Softcore company\n");

fp1=fopen("person_name.txt","r");

fp2=fopen("person_pn.txt","r");
 
printf("Enter your name\n");

 scanf("%s",s);

while(!feof(fp1))

{

 c++;
 
fscanf(fp1,"%s\n",name);

 if(strcmp(s,name)==0)
 
 {

   printf("Access granted\n");
   
t=1;
   
break;
 
  }

 }

if(t==0)

{

 printf("Access denied\n");

}

else

{

 printf("Enter the password\n");

 scanf("%d",&p);

while(!feof(fp2))

{
 
k++;

 fscanf(fp2,"%d\n",&pn);

 if(k==c)

 {

   if(pn==p)

    {

     printf("Welcome\n");

     a=1;
    
 break;

    }

 }

}

if(a==0)

{

 printf("Access denied\n");

}

else

{

 printf("Here is today's news\n");

 printf("Welcome to pro-pack edition of Softcore Entertainments\n");

 printf("

}

}

fclose(fp1);

fclose(fp2);

}





















