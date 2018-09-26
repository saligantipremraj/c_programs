#include <stdio.h>
void message();

int main()
{
   message2();
   //message();
  // printf("iam in main\n");
  // message();
}

void message()
{
   printf("iam in a message function\n");
}
void message2()
{
   message();
   printf("iam in a message function number 2\n");
}
