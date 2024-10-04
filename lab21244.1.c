
//program should display a menu-driven interface for the user; the code of the menu should be embedded within an infinite loop, whereby three options are proposed:
//1. Order a coffee type
//2. Admin mode for the coffee maker operator
//3. End the application execution.
#include <stdio.h>
#define adminpassword 484012
void orderCoffee();
void adminMode();
void exitProgram();

int main(){
    int select;
    
    while (1) { 
        printf("\Coffee Machine Menu:\n");
        printf("1.Order a coffee type\n");
        printf("2.Admin mode\n");
        printf("3.End the application\n");
        printf("Enter your selection: ");
        scanf("%d", &select);
    if(select==1){
        orderCoffee();
    }
    if(select==2){
        adminMode();
    }
    else if (select==3){
        exitProgram();
        return 0;
    }
      else{
       printf("Invalid selection\n");       
       }
  } 
  return 0;
}
void orderCoffee(){
    printf("you have selected to order coffee\n");
}
void adminMode(){
    printf("you have selected admin Mode\n");
    int password;
    	printf("enter the admin password: ");
	scanf("%d",&password);
if(password==adminpassword){
}
else{
	printf("incorrect password.exit the admin code");
}
}
void exitProgram(){
    printf("you have selected to exit the program\n");
}

  