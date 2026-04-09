#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//************************************************************************************************************ */
//************************************************************************************************************ */

//************************************** 2D DYNAMICALLY ALLOCATED ARRAYS -- MATRIX ***************************************/

//************************************************************************************************************ */
//************************************************************************************************************ */



// ************************************************
//*** ARRAY OF POINTERS -- DYNAMIC ARRAY ****** */

// int main(){
//   int *arr[5];
  
//   for(int i=0; i<5; i++){
//     arr[i] = (int *)calloc(3, sizeof(int));
//   }
//   arr[1][1] = 30;
// }

// ********************************************
//******** WHAT CAN BE DONE USING ARRAYS OF POINTERS AND NOT USING STATIC 2D ARRAYS */
// SPECIFY HOW MANY COLUMNS IS GOING TO HAVE EACH ROW

// NOTE: WE CAN SPECIFY THE NUMBER OF ROWS ENTERED BY USER WITH SCANF, WITHOUT DOUBLE POINTERS
// SEE NEXT EXCERSICE THAT SPEIFY IT USING DOUBLE POINTERS
// int main(){
//   int *arr[5];

//   for(int i=0;i<5;i++){
//     arr[i] = (int *)calloc(i+1, sizeof(int));
//   }
  
// }

//********************************************* */
//*********** SPECIFYING ROWS AND COLUMNS USING DOUBLE POINTERS */
// NOTE: TAKE IN CONSIDERATION, IF IT WILL BE A FUNCTION OF VOID TYPE, IT SHOULD USE TRIPLE POINTER TO PASS ARR BY REFERENCE
// IF IT IS A FUNCTION, MAKE SURE TO HANDLE ALL THE EXCEPTION ERRORS OF CALLOC OR MALLOC
// int main(){

//   int **arr;
//   int rows;
//   int columns;
//   printf("Enter number of rows\n");
//   // rows
//   scanf("%d", &rows);

//   printf("Enter number of rows\n");
//   // columns
//   scanf("%d", &columns);

//   arr = (int **)calloc(rows, sizeof(int*));
//   for(int i=0;i<rows;i++){
//     // elements in each row
//     arr[i] = (int *)calloc(columns, sizeof(int));
//   }

//   return 0;
// }

// void printArr(int **arr, int rows, int columns){
//   for(int i=0; i< rows;i++){
//     for(int j=0; j<columns;j++){
//       printf("%9d, ", arr[i][j]);
//     }
//   }
//   printf("\n");
// }

// void freeMatrix(int **arr, int rows){
//   for(int i=0; i<rows;i++){
//     free(arr[i]);
//   }
//   free(arr);
// }


//**************************************************************************** */
//********************* EXERCISES ************************ */

///***************************************************************** */
//************ SEE WHAT REMAINS IN SECTION 9 -- 2D DYNAMICALLY ALLOCATED ARRAYS (MATRIX)*/


//******************** END -- EXERCISES ***************** */
//**************************************************************************** */



//******************************************************************* */
//************* STRINGS AND POINTERS ********************* */
// char *concatStrings(char *originalStr);
// int main(){
//   char str[] = "Hello";
//   char *result = concatStrings(str);
//   printf("%s", result);
//   free(result);
//   return 0;
// }

// char *concatStrings(char *originalStr){
//   char *newStr;
  
//   newStr = (char *)malloc(2 * strlen(originalStr)*sizeof(char) + 1);
//   int origStrLen = strlen(originalStr);
//   for(int i=0; i<origStrLen;i++){
//     newStr[i] = originalStr[i];
//     newStr[i+origStrLen] = originalStr[i];
//   }
//   newStr[origStrLen*2] = '\0';
//   return newStr;
  
// }

//************************************************************ */

// int main(){
  
  // char str[] = "Hello";
  // char *tempPtr;
  // tempPtr = str;
  // tempPtr[0] = 'G'; //worked because were initialized using str[] variable, and that can be modified
  // printf("Printed from str: %s", str); //Gello
  // printf("Printed from tempPtr: %s", tempPtr); //Gello


  //************************************************** */
  // char str[] = "Hello";
  // char*ptr = "Hello"; //"Hello" stored in read-only memory region
  // ptr[0] = 'G'; //won't work
  // str[0] = 'G';//will work

  // str = "Good-Bye"; won't work: it is not allow to be modified
  // ptr = "Good-Bye"; //will work: it simply change the pointer to another region in memory
  
  
  // return 0;
// }


//***************************************************************** */
//*** STRING.H LIBRARY FUNCTIONS IMPLEMENTATION -- USING POINTERS ****/
// int strlen(int *str){
//   int i;
//   while(str[i] != '\0'){
//     i++;
//   }
//   return i;
// }



//*************************************************************** */
//****************** STRUCTS *********************** */

// typedef struct point
// {
//   int x;
//   int y;
// }Point;

// int main(){
//   int i;
//   int size;
//   Point *pointsArr;
//   printf("Introduce the amount of points: \n");
//   scanf("%d", &size);

//   pointsArr = (Point *)malloc(sizeof(Point) * size);

//   for(i=0; i< size; i++){
//     printf("Enter 'x' and 'y' value for point #%d: \n", i+1);
//     scanf("%d", &pointsArr[i].x);
//     scanf("%d", &pointsArr[i].y);
//   }

//   for(i=0; i< size;i++){
//     printf("point #%d: x(%d), y(%d)\n", i+1, pointsArr[i].x, pointsArr[i].y);
//   }

//   free(pointsArr);
// }


//****************************************************************************** */
//*********************** PASSING STRUCTS BY VALUE AND UPDATING IT BY REFERENCE */
// typedef struct employee
// {
//   char name[10];
//   int age;
//   int id;
// }Employee;

// //just copying the struct
// // void updateAge(Employee emp){
// //   emp.age++;
// // }

// //pointing to the struct
// void updateAge(Employee *emp){
//   (*emp).age++;
// }
// int main(){
//   Employee emp1 = {"Jorge", 21, 1};
//   printf("%d\n", emp1.age);
//   updateAge(&emp1);
//   printf("%d\n", emp1.age);

//   return 0;
// }


//****************************************************************************************** */
//************** EXCERCISE -- PASSING STRUCTS BY VALUE AND UPDATING IT BY REFERENCE **********/
typedef struct employee
{
  char name[10];
  int age;
  int id;
}Employee;

// void *registerEmployees(int size){
//   Employee *emp;
//   emp = (Employee *)malloc(sizeof(Employee) * size);
//   for(int i=0; i<size; i++){
//     printf("Enter name for user #%d", i+1);
//     scanf("%s", &emp[i].name);
//     printf("Enter age for user #%d", i+1);
//     scanf("%d", &emp[i].age);
//     emp[i].id = i;
//   }
//   return emp;
// }

// void registerEmployeesByRef(int size, Employee **emp){
//   *emp = (Employee *)malloc(sizeof(Employee) * size);

//   for(int i=0; i<size; i++){
//     printf("Enter name for user #%d", i+1);
//     scanf("%s", &(*emp)[i].name);
//     printf("Enter age for user #%d", i+1);
//     scanf("%d", &(*emp)[i].age);
//     (*emp)[i].id = i;
//   }
// }




// int main(){
//   int size;
//   printf("Enter the number of employees: \n");
//   scanf("%d",&size);
//   // Employee *emp = registerEmployees(size);
//   // for(int i=0; i<size;i++){
//   //   printf("Employe #%d: %s(name), %d(age), %d(id)\n",i+1, emp[i].name,emp[i].age, emp[i].id);
//   // }

//   Employee *emp;
//   registerEmployeesByRef(size, &emp);
//   for(int i=0; i<size;i++){
//     printf("Employe #%d: %s(name), %d(age), %d(id)\n",i+1, emp[i].name,emp[i].age, emp[i].id);
//   }
//   free(emp);

// }


//********************************************************************************************************* */
//************************************* COMPUTER ACHITECTURE -- DATA ALIGNMENT **************************** */
//*********************************************************************************************************** */

// void main(){
//   char a,s,d,f,g,h,k;
//   short q,w,e,r;
//   int y,u,i;
//   double p,l,m;
// }

//*********************************************************** */
//************** STRUCTS ALIGNMENT *************** */
// typedef struct point
// {
//   char x;
//   short y;
//   int z;
// }Point;

// int main(){
//   unsigned int totalStructBytes = sizeof(Point); //8: it is aligned

//   Point p1;
//   p1.x = 0xFF; //2 digits in hex representation: 1 digit in dec representation
//   p1.y = 0x1234;//2 bytes of memory in dec representation
//   p1.z = 0x6789ABCD; //4 bytes for the integer in dec representation 

// }

//************************************************** */
//********** EXAMPLE 2 ************* */
// This example emphasizes that a struct is going to be aligned to the Largest Type Alignment Requirement! in this case the double type
// ** And that's to make sure that this type fits exactly where it should! **//
// typedef struct point
// {
//   char x;
//   double y;
//   int z;
// }Point;

// int main(){
//   Point p1;
//   unsigned int totalBytes = sizeof(Point); //24: char takes 1 bytes and store 8 bytes, double takes 8 bytes and store 8 bytes, int takes 4 bytes and store 8 bytes 
// }

typedef struct point
{
  char x;
  int z;
  double y;
}Point;

// int main(){
//   Point p1;
//   unsigned int totalBytes = sizeof(Point); //16: char takes 1 bytes and store 8 bytes, int takes 4 bytes and store 8 bytes (same into char space), double takes 8 bytes and store 8 bytes 
// }



//**************************************************************** */
// NOTE: THIS DOES NOT APPLY FOR STRUCTS INSIDE ANOTHER STRUCTS
// SEE EXAMPLE BELOW
//

// Struct inside a struct example // 

// typedef struct a {
// 	short val1;
// 	int val2;
// 	char val3;
// }A;

// typedef struct b {
// 	char val1;
// 	int val2;
// 	A val3;
// }B;

// int main()
// {
// 	unsigned int totalBytesA = sizeof(A);//12: 4 + 4 + 4
// 	unsigned int totalBytesB = sizeof(B);//20: 8 + 12
	
// 	return 0;
// }

//************************************* END -- COMPUTER ACHITECTURE -- DATA ALIGNMENT **************************** */
//*********************************************************************************************************** */





//************************************************************************************************************** */
//****************************************** POINTERS TO FUNCTIONS ******************************************** */
//************************************************************************************************************** */

// int main(){
//   printf("%p\n", main); //address of the main function
//   return 0;
// }

//**************** */ DECLARATION OF A POINTER TO A FUNCTION *******
// <Function Return Type> <Pointer to a Function name> <Function Argument>

// void ageFunc(int age){
//   printf("your age is: %d\n", age);
// }

// int main(){
//   int age;
//   printf("Enter your age: \n");
//   scanf("%d", &age);

//   void (*pf)(int); //pointer to a function declaration
//   pf = &ageFunc; //assigning to address of the first instruction of ageFunc function to the pointer
//   (pf)(age); //working directly with the pointer to function

//   // ageFunc(age);

//   return 0;
// }

//**************** ARRAY OF POINTERS TO FUNCTIONS ******************* */
// void addition(int a, int b){
//   printf("%d + %d = %d\n", a, b, a+b);
// }

// void subtraction(int a, int b){
//   printf("%d - %d = %d\n", a, b, a-b);
// }

// void multiplication(int a, int b){
//   printf("%d * %d = %d\n", a, b, a*b);
// }

// void division(int a, int b){
//   if(b != 0)
//     printf("%d / %d = %d\n", a, b, a/b);
//   else
//     printf("division cannot be executed");
// }

// int main(){
  
//   int choice, num1, num2;
//   void (*arrfunctions[])(int, int) = {addition, subtraction, multiplication, division};

//   printf("Choose: \n1. addition\n2. subtraction\n3. multiplication\n4. division\n");
//   scanf("%d", &choice);
//   printf("Enter number 1: \n");
//   scanf("%d", &num1);

//   printf("Enter number 2: \n");
//   scanf("%d", &num2);

//   (*arrfunctions[choice])(num1, num2);

//   return 0;
// }

//**************************************************************************************** */
//****************************EXCERCISES -- ARRAY OF POINTERS TO FUNCTIONS************************* */
//**************************************************************************************** */

#include <stdbool.h>

// bool asc(int first, int second){
//   if(first < second)
//     return true;
//   else
//     return false;
// }

// bool desc(int first, int second){
//   if(first > second)
//     return true;
//   else
//     return false;
// }

// void swap(int *ptr1, int *ptr2){
//   int temp = *ptr1;
//   *ptr1 = *ptr2;
//   *ptr2 = temp;
// }
// void sort(int *arr, int arrSize, bool (*compare)(int, int)){

//   for(int i=0; i<arrSize-1; i++){
//     for(int j=0; j< arrSize - i - 1 ;j++){
//       if(!(compare)(arr[j], arr[j+1])){
//         swap(&arr[j], &arr[j+1]);
//       }
//     }
//   }
  
  
// }

// int main(){


//   int size, choice;
//   printf("enter size of the array: \n");
//   scanf("%d", &size);
//   int arr[size];
//   printf("Enter an element of the array followed by and enter tab: \n");
//   for (int i = 0; i < size; i++)
//   {
//     scanf("%d", &arr[i]);
//   }
//   printf("sort array: 0. asc, 1. desc\n");
//   scanf("%d", &choice);

  
//   bool (*arrPtr[])(int, int) = {asc, desc};

//   sort(arr, size, (*arrPtr[choice])); //same as passing (asc) or (desc) directly on third argument

//   printf("Array sorted: \n");
//   for(int i=0; i<size;i++){
//     printf("%d, ", arr[i]);
//   }
//   return 0;
// }



//**************************************************************************************** */
//********************* EXCERSISE -- PIZZA PROJECT ******************** */
// //dough making functions
// void thinCrust(){
//   printf("Making a thin crust\n");
// };

// void thickCrust(){
//   printf("Making a thick crust\n");
// }

// //Sauce making functions
// void tomatoSauce(){
//   printf("adding tomato sauce\n");
// }
// void pestoSauce(){
//   printf("adding pesto sauce\n");
// }

// //cheese making functions
// void mozzarellaCheese(){
//   printf("adding mozzarella cheese\n");
// }

// void cheddarCheese(){
//   printf("adding cheddar cheese\n");
// }

// void createPizza(void (*doughPtr)(), void (*saucePtr)(), void (*cheesePtr)()){
//   doughPtr();
//   saucePtr();
//   cheesePtr();
// }
// int main(){
//   createPizza(thickCrust, tomatoSauce, mozzarellaCheese);
//   return 0;
// }


//******************************************************************************* */
//************* USING FUNCTION POINTERS AND VOID POINTERS (GENERIC TOPIC) ********************** */
void printInt(void *a){
  printf("%d\n", *(int*)a);
}
void printFloat(void *a){
  printf("%.1f\n", *(float*)a);
}

//function that iterates with every element in the array
void perfomOperation(void *arr, int arrSize, int elemSize, void (*operationPtr)(void *)){
  for(int i=0; i<arrSize; i++){
    operationPtr((char *)arr + i * elemSize);
  }
}

int main(){

  int arrInt[] = {1,2,3};
  float arrFloat[] = {1.1, 2.1, 7.0};

  perfomOperation(arrFloat, 3, sizeof(float), printFloat);

  perfomOperation(arrInt, 3, sizeof(int), printInt);



  return 0;
}