/*
  name:LYBERNTEE MUTINDA
  regNO:PA106/G/26642/25
  description:prompt user
*/

#include <stdio.h>

int main() {
 int height;
 float balance;
 int id;
 char sex;

 printf("what is your height? ");
 scanf("%d", &height);

 printf("what is your balance my goodsir?");
 scanf("%f", &balance);

 printf("what is your ID number? ");
 scanf("%d", &id);

 printf("what is your sex? ");
 scanf("%c", &sex);

 printf("thank you");

 printf("\n user information \n");
 printf("your height is %d \n", height);
 printf("your balance is %f \n", balance);
 printf("your id is %d \n", id);
 printf("your sex is %c \n", sex);

 return 0;

}
//end of thee program
