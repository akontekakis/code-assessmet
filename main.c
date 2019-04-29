#include <stdio.h>

int main ()
{
int encryption_type = 4;    //this integer is used in the switch statement to select whether 
//rotation or substitution encrytion or decryption is used.
// 1 for rotational encryption, 2 for rotational decryption 
// 3 for substitution encryption, 4 for substitution decryption
switch(encryption_type)
{

case 1:      
     //rotational encryption
    {
        char message[80]= {"please work"};      // initialise the string with a message to be encrypted
        int key = 2;        //the value that determines the value of rotation
        int i;              // is an int to use in for loops
 
        for(i=0 ; message[i] != '\0' ; i++)  //the for loop makes the code in the loop apply to each letter in the array, this encrypts each letter and then saves it a
{ 
            if (message[i] >96 && message[i] <123)  // if the ASCII characters are between these values they represent lower case letters, this means the below code will run 
{
                    message[i]= message[i] - 32; // this minues the difference which is 32 from the ASCII values which converts lower case letters into uppercase letters
}   
    
            if (message[i] > 64 && message[i] <91) // if all characters are captial letters (the ASCII characters that represent capital letters) the below code will run
{
                    message[i] = message[i] + (key % 26); // this is the formula that by using the key rotates the alphabet and creates the actual encryption
} 

}
    scanf("%s", message); // this searches for the array that is representative of the message
    printf("%s", message); // it prints the array to the screen

    break;   // this stops the code meaning it doesnt continue through all the other parts of the swtitch statements
}


case 2:         // rotational decryption
  {
        char message[80]= {"RNGCUG YQTM"};      // initialise the string with a message to be deencrypted
        int key = 2;        //the value that determines the value of rotation
        int i;              // is an int to use in the  for loops
 
        for(i=0 ; message[i] != '\0' ; i++)
{ 
            if (message[i] >96 && message[i] <123)      // if the ASCII characters are between these values they represent lower case letters, this means the below code will run
{
                    message[i]= message[i] - 32;        // this minues the difference which is 32 from the ASCII values which converts lower case letters into uppercase letters
}   
    
            if (message[i] > 64 && message[i] <91)      // if all characters are capital letters (the ASCII characters that represent capital letters) the below code will run
{
     
                    message[i] = message[i] - (key % 26);   //this is the formula that by using the key rotates the alphabet and creates the actual encryption
} 

}
    scanf("%s", message);       // this searches for the array that is representative of the message
    printf("%s", message);   // it prints the array to the screen


    break;
}
    
 case 3:            // substitution encryption
 {
    char message[80] = {"PlEASe make this work you fucking che"};      // initialise the string with a message to be encrypted
    char key[26]= {"WHPLCOXDEJZUFITQKRYGVSNMBA"};     //rearange the alphabet to form the key, this means that A is assigned to the first letter, B to the second and so on
    int i;   // is an int to use in for loops
    int x=0; //x is used to represent a single part of the array that is the key
    
    for(i=0 ; message[i] != '\0' ; i++)
    {
         if (message[i] >96 && message[i] <123) // if the ASCII characters are between these values they represent lower case letters, this means the below code will run
{
            message[i]= message[i] - 32;        // this minues the difference which is 32 from the ASCII values which converts lower case letters into uppercase letters
}
    if (message[i] > 64 && message[i] <91)      // if all characters are captial letters (the ASCII characters that represent capital letters) the below code will run
{
    message[i] = message[i] - 65; 
    x= message[i];
    message[i]= key[x];

} 
    }
     scanf("%s", message); // this searches for the array that is representative of the message
 printf("%s\n", message);    // it prints the array to the screen

 
 
        break; // this stops the code meaning it doesnt continue through all the other parts of the swtitch statements
}


case 4:         //substitution decryption
    {
    char message[80] = {"QUCWYC FWZC GDEY NTRZ BTV OVPZEIX PDC"}; // initialise the string with a message to be encrypted
    char key[26]= {"WHPLCOXDEJZUFITQKRYGVSNMBA"};     //rearange the alphabet to form the key, this means that A is assigned to the first letter, B to the second and so on
    int i;      // is an int to use in for loops
    int x=0;    //x is used to represent a single part of the array that is the key
    
    for(i=0 ; message[i] != 0 ; i++)
    {
         if (message[i] >96 && message[i] <123) // if the ASCII characters are between these values they represent lower case letters, this means the below code will run
{
            message[i]= message[i] - 32;        // this minues the difference which is 32 from the ASCII values which converts lower case letters into uppercase letters
}
    if (message[i] > 64 && message[i] <91)       // if all characters are captial letters (the ASCII characters that represent capital letters) the below code will 
{
    x = 0;
    while (message[i] != key[x])
    {
        x = x+1;
}
x=x+65;
message[i]=x;
}
printf("%c", message[i]); // this prints each letter of the encrypted message as it is encrypted
}
break; // this stops the code meaning it doesnt continue through all the other parts of the swtitch statements
}


default: 
{
printf("error in chosing an ecryption / decryption type");
}

 
}
}
