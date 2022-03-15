/*
countyn library management system
by Fidelis Mbugua
MARCH 2021
MIT LICENSED
C89 COMPILER
*/
#include <stdio.h>
#include <stdlib.h>

int menu()
   int action;
   printf("select an action below/n");
   printf("1. Add new patron/n");
   printf("2. view all patrons/n");
   printf("3. view all books/n");
   printf("4. Add new book/n");
   printf("Your action:");
   scanf("%d",&action);
   return action;

{

int main()

{
    printf("County Library\n");
    printf("Welcome Miss Fidelis/n");
    printf("You selected action %d",menu());
    return 0;
}
