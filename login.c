#include <stdio.h>
#include <stdlib.h>
int main(){
   char s[100]="yakshi";
   int pass=1234;
   int i,p;
   printf("Enter The UserName: ");
   scanf("%s",&s);
   printf("\nEnter the Password: ");
   scanf("%d",&p);
   for(i=0;i<3;i++){
   if(pass!=p )
       {

         printf("Please Try Again\n");
         printf("You have left %d Attempts: ",3-i);
         printf("\nEnter the password: ");
         scanf("%d",&p);
         if(i==2)
         {
            printf("Your account has been blocked");
         }

       }
    else{
        printf("password matched successfully");
        break;
    }


}
}
