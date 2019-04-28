#include <stdio.h>

int main ()
{
int encryption_type = 2;    //this integer is used in the switch statement to select whether 
//rotation or substitution encrytion or decryption is used.
// 1 for rotational encryption, 2 for rotational decryption 
// 3 for substitution encryption, 4 for substitution decryption
switch(encryption_type)

case 1:      
{       //rotational encryption
    {
        char message[80]= {"please work"};      // initialise the string with a message to be encrypted
        int key = 2;        //the value that determines the value of rotation
        int i;              // is an int to use in for loops
 
        for(i=0 ; message[i] != '\0' ; i++)
{ 
            if (message[i] >96 && message[i] <123)
{
                    message[i]= message[i] - 32;
}   
    
            if (message[i] > 65 && message[i] <91)
{
     
                    message[i] = message[i] + (key % 26);
} 

}
    scanf("%s", message);
    printf("%s", message);

    break;   
}

case 2:         // rotational decryption
  {
        char message[80]= {"RNGauG YqtM"};      // initialise the string with a message to be deencrypted
        int key = 2;        //the value that determines the value of rotation
        int i;              // is an int to use in the  for loops
 
        for(i=0 ; message[i] != '\0' ; i++)
{ 
            if (message[i] >96 && message[i] <123)
{
                    message[i]= message[i] - 32;
}   
    
            if (message[i] > 65 && message[i] <91)
{
     
                    message[i] = message[i] - (key % 26);
} 

}
    scanf("%s", message);
    printf("%s", message);

    break;
    }
    
 
default: 
printf("error in chosing an ecryption / decryption type");

}
 
}
