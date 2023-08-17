#include<stdio.h>
int main(){
   int year, a;
   printf("Enter: ");
   scanf("%d", &year);
   
   switch(a%100==0){
      case 1: switch(a%400){
                  case 0: printf("Leap year"); break;
                  case 1: printf("Non leap year"); break;
               } break;
        
      case 0: switch(a%4){
            case 0: printf("Leap Year"); break;
            case 1: printf("Not a leap year"); break;
      }
        
   }
}
