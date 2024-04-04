// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   char ConStatus[3];
   float first_number;
   float second_number;
   char actions[1];

printf("*******************************\n\n");
printf("Hi,Welcome to my app!");
printf("\n\n*******************************\n\n");
printf("Do you want to cointe?(yes or no) :\t");
scanf("%s", &ConStatus);
if(ConStatus[0]=='y'){
printf("\n\n*******************************\n\n");
printf("Okay then,let's start practicing 👌\n\n");
printf("Transactions :('+','-','/','*') \n\n");
printf("first enter your number :\t");
scanf("%f",&first_number);
printf("\nsecond enter your number :\t");
scanf("%f",&second_number);
printf("What action you want to take :\t");
scanf("%s",&actions);
 float result;
if(actions[0]=='+'){
   result=first_number+second_number;
 
   
}else if(actions[0]=='-'){
   result=first_number-second_number;
  
}else if(actions[0]=='/'){
    result=first_number/second_number;
   
}else if(actions[0]=='*'){
  result=first_number*second_number;
  
}
  printf("\n Result : %0.2f",result);
printf("\nFinish app,thak you 👌\n");

    
    
  
}else{
printf("Successful implementation,thank you 🙃");
}
return 0;
}