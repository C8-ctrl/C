#include <stdio.h>
#include <stdlib.h>

#include <string.h>


// int main()
// {
  // scan
  // int age;
  // printf("%d, %d, %d, %d, %d\n", 5+2, 5-2, 5*2, 5/2, 5%2);
 
  // printf("Please specify you age: \n");
  // scanf("%d", &age);
  // printf("you are %d years old\n", age);

  
  //casting
  // int a = 5;
  // int b = 2;
  // double result = (double)a/b;
  // printf("%.1f\n", result);

  // sequence
  // float a_1, d;
  // int n;

  // &d: almacena el valor dado dentro de la variable d
  // printf("there are %d numbers in the sequence.\n", n);

  // printf("please entre the initial a_1 term: \n");
  // scanf("%f", &a_1);
  // printf("please enter the diference between one sequence to another:\n ");
  // scanf("%f", &d);
  // printf("please enter the number of terms in the sequence:\n ");
  // scanf("%d", &n);

  // printf("the n-th term of the sequence is: %.1f", (double)a_1+(n-1)*d);

  // the sum of the sequence
  // float a_1, a_n;
  // int n;


  // printf("please enter the initial a_1 term: \n");
  // scanf("%f", &a_1);
  // printf("please enter the n-th term of the sequence\n ");
  // scanf("%f", &a_n);
  // printf("please enter the number of terms in the sequence:\n ");
  // scanf("%d", &n);

  // float Sn = n*(a_n+a_1)/2;
  // printf("The sum of the sequence is: %.1f", Sn);
  
// *********************************************/
//*********** */ ASCII TABLE SUMMARY **********************/
//******************************************************** */

//* FROM 48 TO 57 IN ASCII DECIMAL REPRESENTATION
//numers from 0 to 9

//*FROM 65 TO 90 IN ASCII REPRESENTATION
//capital letters from A to Z

//*FROM 97 TO 122 IN ASCII REPREENTATION
//lowercase letters from a to z

//************ END OF SUMMARY ***************/
//***************************************** */
  // ASCII
  // char myword = 'a';
  
  // printf("Character: %c\n", myword); //a
  // printf("Decimal ASCII code: %d\n", myword); //97
  // printf("Hexadecimal ASCII code: %X\n", myword); //61

  // char myword = 'O';
  
  // printf("Character: %c\n", myword); //O
  // printf("Decimal ASCII code: %d\n", myword); //79
  // printf("Hexadecimal ASCII code: %X\n", myword); //4F

  // char myChar1 = 'a';
  // char myChar2 = 97;
  // char myChar3 = 0x61;
// same values in the memory content


  // char myword1 = 9;
  // char myword2 = '9';
  // printf("decimal ASCII code: %d, %d", myword1, myword2); //9, 57


  // int day;
  // int month;
  // int year;
  // scanf("%d", &day);
  // scanf("%d", &month);
  // scanf("%d", &year);

  // printf("day: 0x%X, month: 0x%X, year: 0x%X", day, month, year);


  // PROGRAM THAT IDENTIFIES THE TYPE OF A CHARACTER FROM AN INPUT USER
  // char a;
  // scanf("%c",&a);
  // if(a <= 57 && a >= 48)
  // {
  //   printf("the input is a number");
  // }
  // else if(a >= 65 && a <= 90){
  //   printf("The input is an upper_case letter");
  // }
  // else if(a >= 97 && a <= 122){
  //   printf("The input is a lower_case case letter");
  // }else{
  //   printf("The input is other type");
  // }

  // char a;
  // scanf("%c",&a);
  // if(a <= '9' && a >= '0')
  // {
  //   printf("the input is a number");
  // }
  // else if(a >= 'A' && a <= 'Z'){
  //   printf("The input is an upper_case letter");
  // }
  // else if(a >= 'a' && a <= 'z'){
  //   printf("The input is a lower_case case letter");
  // }else{
  //   printf("The input is other type");
  // }

  // break and continue
  // for(int i=1; i<10; i++){
  //   if(i == 5){
  //     // continue;
  //     break;
  //   }
  //   printf("%d", i);
  // }


  // arrays
  // #define SIZE 7

  // int numbers[SIZE] = {1,2,3,4,5};
  

  // printf("%d", numbers[0]);

  //********** CONCEPTS************* */
  // lf means for long float: double
  //lu means for long unsigned
  //********** END CONCEPTS ******** */

  // 2D arrays
  // int matriz[5][5] = {{1,2,3,4,5}, {1,2,3,4}};
  // double matriz[5][5];
  // double n;
  // scanf("%lf", &matriz[0][0]);

  // printf("%lf", matriz[0][0]);


  // 2D array memory representation
  // int arr[5];
  // arr[0] = 3;
  // arr[1] = 2;
  // prints the address of the element arr[0]
  // printf("element1 address: %lu\n", &arr[0]);






  //the program finished succesfully 
//   return 0;
// }


  //******************************** */
  //***** POINTERS ***************** */

  //****** Swap two numbers */
  
// void swap(int *a, int *b){
//   // printf("%p\n", a);
//   int c;
//   c = *a; //c gets 1
//   // printf("%d\n",c);
//   *a = *b;
//   *b = c;
// }
  
// int main(){
//   int a = 1;
//   int b = 2;
//   // printf("%p\n", &a);
//   printf("first number before swapping: %d\n", a);
//   printf("second number before swapping: %d\n", b);
//   swap(&a, &b);
//   printf("first number after swapping: %d\n", a);
//   printf("second number after swapping: %d\n", b);

//   return 0;

// }

// int main(){
  // *************************************
  //*************** STRINGS ************* */
  //************************************** */
  
  // array of characters
  // char chars[] = {'h','e','l','l','o'};
  // // initialization
  // char strOpt1[] = {'h','e','l','l','o', '\0'};
  // char strOpt2[] = "hello";

  // ******** NOTE*********
  //if we define the size of the array for the string, we must consider the '\0' character as part of the string
  //********* END NOTE */  

  // strings input
  // char word[] = {};
  // scanf("%9s", word);
  // printf("%s", word); //if the word is "hello world", it will only print "hello" cause of the space

  // using gets (get string): deprecated
  // using fgets (file get string): current
  // char word[] = {};
  // fgets(word, 20, stdin);
  // fputs(word, stdout);


  // *******************/********* */
  //************ <strng.h> LIBRARY ***** */

  // strlen
  // char word[] = {};
  // fgets(word, 20, stdin);
  // printf("word length: %zu\n", strlen(word));

  // strcpy
  // char word1[]={};
  // char word2[] = {};

  // scanf("%s", word1);
  // fgets(word1, 20, stdin);
  // strcpy(word2, word1);
  // printf("%s");
  // fputs(word2, stdout);

  // strcat
  // char word1[] = "hello";
  // char word2[] = "world";
  // strcat(word1, word2);
  // printf("after concatenation: %s", word1);

  // strcmp
  // char word1[] = "hello";
  // char word2[] = "world";

  // returns -1 if word1 lexical characters are before word2 lexical characters (word1 es menor que word2), returns +1 if it is the opposite (word2 es menor que word1), returns 0 if words are identical
  // strcmp(word1, word2);
  // printf("%d", strcmp(word1, word2));
  


  
  
  
//   return 0;
// }




  // *******************************************/
  //******** STRUCTURES************** */
  //******************************************* */

  int age = 50;
  float salary = 100.50;

  
// the template initialization
  // struct <structure_name> <variable_name>;
  // struct date 
  // {
  //   int day;
  //   int month;
  //   int year;
  // };

  // int main(){

    // struct date mydate1;
    // printf("Enter the day: \n");
    // scanf("%d", &mydate1.day);
    // printf("Enter the month: \n");
    // scanf("%d", &mydate1.month);
    // printf("Enter the year: \n");
    // scanf("%d", &mydate1.year);

    // printf("date: %d/%d/%d\n", mydate1.day, mydate1.month, mydate1.year);

    //************************ */
    //******** USING TYPEDEF FOR SIMPLIFY THE NAME STRUCTURE */

    
    // typedef <structure> <new_name>
    typedef struct date{
      int day;
      int month;
      int year;
    } Date;

    Date mydate1;
    //same as above...


    // **********************************************/
    //*********** MORE EXPLANATION ABOUT TYPEDEF **** */

    // typedef struct point
    // {
    //   int x;
    //   int y;
    // } Point;

    // Declaring a "Point" variable (witout initialization)
    // Point p1;

    // Initializing a "Point variable" (members in order)
    // Point p2 = {1, 2};

    // Using designed Initializer
    // Point p3 = {.x = 2, .y = 4};

    // Using designed Initializer (out of order)
    // Point p4 = {.y = 2, .x = 4};


    // designed Initializer (other members will be initialized with zero)
    // Point p5 = {.x = 5};


    // ARRAYS IN STRUCTURES
    // typedef struct employee
    // {
    //   char name[10];
    //   float salary;
    //   int id;
    // } Employee;

    // Employee emp1;
    // Employee emp2 = {"Diego", 10000, 1};

    // // copy from one array to another from the same type
    // emp1 = emp2;


  //   return 0;
  // }

  // *****************************************/
    //********** STRUCTS INSIDE ANOTHER STRUCTS ***/
    // EXAMPLE: POINTS AND CIRCLE
    
    // typedef struct point
    // {
    //   int x;
    //   int y;
    // } Point;
    // typedef struct circle
    // {
    //   Point center;
    //   double radius;
    // } Circle;

    // int main(){
      // Point center = {3, 4};

      // Circle circle;

      // circle.center = center;
      // circle.radius = 3.0;

      // printf("%d, %.1lf", circle.center.x, circle.radius);





    //   return 0;
    // }

    
      // **************************************/
      //********  UNIONS ******************* */
      //  init:
      // union <union_name> {
      //   datatype1 field1;
      //   datatype2 field2;
      //   ... 
      // }

      // *****************************
      //******* DIFERENCE FROM STRUCTURE */
      // unions do not grant pieces of memory for each part as structures, it design the memory from the max length of one of the fields inside of an union
      // useful for storing temporarly a variable of one of the type inside of it 

      // union info{
      //   char firstName[20];
      //   int age;
      // };

      // int main(){
      //   union info myVariable1;

      //   myVariable1.age = 30;
      //   printf("myVariable1.age = %d\n", myVariable1.age); //30

      //   strcpy(myVariable1.firstName, "Hello!");
      //   printf("myVariable1.fristName = %s\n", myVariable1.firstName);

      //   printf("myVariable1.age = %d\n", myVariable1.age); //will print the %d for "Hello!", value 30 does not longer exist


      // } 

      // ****************** */
      //**** MORE EXAMPLES UNIONS */

      union Student{
        int ID;
        double average;
      };
      int main(){
        // union Student student1;
        // union Student *ptrstudent2;

        // printf("%d", sizeof(student1)); //will print the average length
        // printf("%d", sizeof(ptrstudent2)); //will print size of address of ptrstudent2 variable

        union Student student1;
        union Student *ptrstudent2;

        student1.ID = 5;
        // printf("student1.ID=%d", student1.ID);//student1.ID=5

        ptrstudent2 = &student1; //ptrstudent2 points to student1 variable
        ptrstudent2->ID = 10; //this is how we access to the value of another variable

        // printf("student1.ID=%d", student1.ID); //student1.ID=10



        //************************************/
        //********  VARIABLES AND CONSTANTS */

        const int age1 = 35;
        // or
        const int age2 = 35;

        // with pointers
        const int *ptr1; //pointer can change, the value that points it not

        int *const ptr2; //pointer can't change, the value that points it yes

        int *const ptr3 = &age1; //assigning the address value of age1 to the pointer ptr3

        *ptr3 = 30; // assigning the ptr3 value(not the pointer value) to 30
        
        // ptr3 = &age2; //cannot modify the pointer value cause it is constant (will throw a compilation error)


        const int *const ptr4; //neither the pointer nor its pointed value can change




        // **PRACTICE SECTION ***********/

        int *const p1;
        
        const int *p2;

        const int *const p3;

        *p1 = 34;
        // printf("%d", *p1);

        // printf("p1: %p, p2: %p\n", p1, p2);
        p2 = p1;
        // printf("p1: %p, p2: %p\n", p1, p2);


        // *********************************/
        //************ END PRACTICE SECTION ***/


        // ****************************************
        //************* COUNTING ARRAYS ******** */
        // Problem: counts the array values as indexes, but if the array does not begin with 0?: int arr[20] = {5,6,7,5,5,6};

        // int arr[20] = {1,2,1,0,0,2,1,1,1,2,0,0};
        // int countArr[3] = {0};
        // for(int i=0; i<20; i++){
        //   countArr[arr[20]]++;
        // };




        //**************************************** */
        //**************** MAPPING **************** */
        // for now all the procedure is manual
        // ....


        //*************************************** */
        //************** FILES ******************** */

        // step 1
        // FILE *fp; //Creating a Pointer that point to a file type

        // step 2 - opening/access to a file
        // fp = fopen("myFirstFile", "w");

        // step 3 - make sure a success opening
        // if (fp != NULL )
        // step 4 - some work code for files
        // {...}

        // step 5 - close the file
        // fclose(fp);


        // *******************************/
        //*********** FGETC ************ */

        // FILE *fp;
        // int myChar1;

        // // it opnes directly 
        // fp = fopen("myFirstFile.txt", "r");

        // if(fp != NULL)
        // {
        //   // printf("writing inside the file");
        //   myChar1 = fgetc(fp);
        //   printf("%c\n", myChar1);

        //   myChar1 = fgetc(fp);
        //   printf("%c", myChar1);

        //   fgetc(stdin); //the console waits an input from the console

        //   fclose(fp);

        // }else{

        //   printf("No file was found");
        // }


        //********************************* */
        //********** FPUTC ***************** */
        // FILE *fp;
        // int myChar1;

        // // it opnes directly 
        // fp = fopen("myFirstFile.txt", "w");

        // if(fp != NULL)
        // {
        //   // printf("writing inside the file");
          
          

        //   fputc('H', fp);


        //   fclose(fp);

        // }else{

        //   printf("No file was found");
        // }

        // putchar('a');


        //******************************* */
        //********** FPRINTF && FSCANF ************ */

        // int num = 123;
        // FILE *fp;

        // fp = fopen("myFirstFile.txt", "w");
        // if(fp != NULL){
        //   fprintf(fp, "%d", num);
        //   // fprintf(stdout, "%d", num); //directly to the console
        //   fscanf(fp, "%d", &num);
        //   // fscanf(stdin, "%d", &num); //directly from the console
        //   printf("Content read from file: %d\n", num);
          
        //   fclose(fp);
        // }


        //*********************************** */
        //************ FGETS */
        // int count = 0;
        // char myString[10];
        // FILE *fp;

        // fp = fopen("myFirstFile.txt", "r");
        // if(fp != NULL){
        //   while(fgets(myString, 10, fp))
        //   {

        //     printf("string #%d from file: %s\n", ++count, myString);
        //   }
          
        //   fclose(fp);
        // }else{
        //   printf("No file was found");
        // }



        // *********************************/
        //*************** EOF(End OF File) ************* */
        // NOTE: eof symbol is not part of the file as /0 for strings, it is just an indicator in a low computational level
        int count = 0;
        char myString[10];
        FILE *fp;

        fp = fopen("myFirstFile.txt", "r");
        if(fp != NULL){
          while(!feof(fp))
            printf("We do not arrive to the end of the file!");          
          
          fclose(fp);
        }else{
          printf("No file was found");
        }
        return 0;
      }


