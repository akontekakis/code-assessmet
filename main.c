#include<stdio.h>

int main ()
{
char message[80] = {"message"};
// let is the letter that will be printed after encryption
int key = 1, i; 
//values above are the key of encryption, and i is an int to use in for loops

printf("enter a messsage:");

for(i=0 ; message[i] != '\0' ; i++)
{ 
    if (message[i] >96 && message[i] <123)
{ message[i]= message[i] - 32;
}
    
    if (message[i] > 65 && message[i] <91)
{
     
 message[i] = message[i] + (key % 26);
} 

}
//printf("enter the key:")

//scanf("%d," &key);
 scanf("%s", message);
 printf("%s\n", message);
    
}



//Big for statement 


//If lower then 65 (ASCII number) or not higher then number of Z
