#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(){
  int h=0,m=0,s=0;
   system("clear");
   printf("\n\tEnter 00 00 00 to start timer :");
   scanf("%d %d %d",&h,&m,&s);
   printf("\n\n");
   
   start:
   for(h=h;h<24;h++){
   
        for(m=m;m<60;m++){
        
               for(s=s;s<60;s++){
               system("clear");
               printf("\n\n\t\t\%d:%d:%d ",h,m,s);
                  if(h<12)
                  printf(" AM");
                  else
                  printf(" PM");
                  sleep(1);
                  
        }s=0;
        }
        m=0;
   }
   h=0;
   goto start;
   getch();
   

}
