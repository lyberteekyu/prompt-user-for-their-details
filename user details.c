/*
  name:LYBERNTEE MUTINDA
  regNO:PA106/G/26642/25
  description:prompt user
*/

#include <stdio.h>

int main() {
     //variable declaration
     int height, id, age;
     float balance;

    //prompt user to enter height
     printf("what is your height? ");
     scanf("%d", &height);

     //prompt user to enter their balance
     printf("what is your balance my goodsir?");
     scanf("%f", &balance);

     //prompt user to enter their id number
     printf("what is your ID number? ");
     scanf("%d", &id);

     //prompt user to enter their age
     printf("what is your age? ");
     scanf("%d", &age);

     printf("thank you");

     //display info
     printf("\n user information \n");
     printf("your height is %d \n", height);
     printf("your balance is %f \n", balance);
     printf("your id is %d \n", id);
     printf("your age is %d \n", age);

     return 0;

}
//end of thee program
