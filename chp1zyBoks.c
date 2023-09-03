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

   int numBeans;
   int numJars;
   int totalBeans;


   numBeans = 500;
   numJars = 3;


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
printf("You are %d years.\n", userAge);
//section 1.3.1
/*

#include <stdio.h>

int main(void) {
   int myFirstVar;    // Aligned comments yield less
   int yetAnotherVar; // visual clutter 
   int thirdVar;
   
   // Above blank line separates variable declarations from the rest
   printf("Enter a number: ");
   scanf("%d", &myFirstVar); 
   
   // Above blank line separates user input statements from the rest
   yetAnotherVar = myFirstVar;        // Aligned = operators
   thirdVar      = yetAnotherVar + 1; 
   // Also notice the single-space on left and right of + and =
   // (except when aligning the second = with the first =)
   
   printf("Final value is %d\n", thirdVar); // Single-space after the ,
   
   return 0; // The above blank line separates the return from the rest
}


*/
// this program is suppose to out put a * and not an + 


// ex: 1.4.2
printf("%d beans in " , numBeans);
printf("%d jars yields ", numJars);
totalBeans = numBeans * numJars;
printf("%d total\n", totalBeans);


   return 0;
}

