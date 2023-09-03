// #include <stdio.h> 

// int main(void) {
//     int wage;
//     wage = 20;

//     printf("wage is : ", wage);

// return 0;

// }

#include <stdio.h>

int main(void) {


   int wage;
   int numCars;

   int numPeople = 10;

   int drivingYear;
   int drivingAge;
   int numStates;

   int userAge;



   userAge = 22;
   drivingYear = 2014;
   drivingAge = 18;
   numStates = 10;

   wage = 20;
   numCars = 9;

   printf("Hello world");
   printf("Salary is ");
   printf("%d", wage * 40 * 52);
   printf("\n");
   // question why cant i print after the \n 
   //printf("Hello wolrd");
   



//tips and tricks
//printf("%d", x). The %d in the string literal indicates that 
//a decimal number (hence the d) should be printed there, with
// that number being the value of the variable that follows.

   printf("Number of cars : ");
   printf("%d" , numCars);
   printf( " cars" );
 


 //trips and tricks 
 // S in scan should not be capital 
 // & is needed for the scanner

   printf("\n");
   printf ("******************************\n");

   printf("NUM of People = : ");
   printf("%d",numPeople);



   printf("\n");
   printf ("******************************\n");
// correct way to output a scanner;
//scanf("%d",&numPeople);printf("%d",numPeople);

////////////////////////// 
 printf ("EXCERISE 1.2.3 ******************************\n");
///////   Modify the program to use only two output statements, one for each output sentence



   printf("In ");
   printf("%d", drivingYear);
   printf(", the driving age is ");
   printf("%d", drivingAge);
   printf(".\n");
   printf("%d", numStates);
   printf(" states have exceptions.\n");

////////// 
// printf(“In %d, the driving age is\n”, drivingYear, drivingAge); // Use placeholders and variables in the same statement 
// printf(“%d states have exceptions.\n”, numStates); // Same as above

 printf ("EXCERISE 1.2.10 ******************************\n");
printf("You are %d years.", userAge); // outputs you are 22 years


printf("%dyears is good.", userAge);



// excerise the 1.2.3
//write a statement to output the month, a slash, and the year. End with newline. 



/// attempt 1
 //wrong

/*

#include <stdio.h>

int main(void) {
   int birthMonth;
   int birthYear;
scanf("%d",birthMonth);
scanf("%d",birthYear);


     printf("%d\\%d", birthMonth, birthYear); /* Your solution goes here
     
      //  return 0;
//}

  */



 // attempt 2: 

 /*
 #include <stdio.h>

int main(void) {
   int birthMonth;
   int birthYear;
scanf("%d",birthMonth);
scanf("%d",birthYear);


   printf("%d\\%d\n", birthMonth, birthYear); /* Your solution goes here  
   
   return 0;
}


   
   */

 
 



   
   return 0;
}

