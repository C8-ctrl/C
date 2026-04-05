#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(){

  // *****************************/
  //************* DEREFERENCING *** */

  // int a;
  // int *p;
  // p = &a;
  // *p = 5; //Dereferencing: changing the value of a through the pointer


  ///************************************ */
  //********** POINTERS ARITHMETIC *******/
  // int *p;
  // int arr[3] = {80,90,100};
  // int num = 5;
  // printf("%p\n", &num);
  // printf("%p\n", arr); //will print the address of arr

  // printf("%p\n", &arr); //will print the address of first element inside arr (same)
  
  // // printf("%p\n", arr[0]); //won't work
  // // printf("%p\n", *arr); //won't work

  // printf("%d\n", *arr);//will print the value of arr, in this case first element: 80

  // printf("%p\n", &arr[0]); //wil print the address of first element (same)

  // printf("%p\n", &arr[2]); //wil print the address of second element

  // printf("%p\n", arr+1); //adds arr not by 1 but by 4: Pointer arithmetic (4 bits of type in (sizeof(int)), moving to one size of memory)


  // *******************************
  //********* SIZEOF ************ */
  // int num5;
  // printf("%d\n", sizeof(num5)); //will print 4

  // double grade = 99.8;
  // printf("%d\n", sizeof(grade)); //will print 8


  //******************************************* */
  //*********** SIZEOF -- POINTERS & ARRAYS ** */

  // int arr[3];
  // printf("%d\n", sizeof(arr)); //12


  // double *ptr;
  // double grade = 90.4;
  // ptr = &grade;

  // printf("%d\n", sizeof(ptr)); //8

  // int *ptrArr = arr;
  // printf("%d\n", sizeof(ptrArr));


  //******************************************* */
  //************* MULTIPLE INDIRECTION -- DOUBLE POINTER */
  // int a = 5;
  // int *ptr1 = &a;
  // int **ptr2 = &ptr1; //a pointer to a pointer to int
  // int ***ptr3 = &ptr2;
  // ...


  //****************************************** */
  //*************** VOID * -- FUNCTION *********** */
  // NOTE: Generic pointer void* is used when we want to assign some generic type

  // int a = 10;
  // void *ptr = &a;
  // printf("%d\n", *ptr); //incomplete type void is not allowed
  // printf("%d\n", *(int*)ptr); //will print the value of a specific pointer of type int


  //*********************************************** */
  //************ EXAMPLE --- VOID * - FUNCTION******************** */
  


  // return 0;
// }



// void genericSwap(void *a, void *b, unsigned int size){

  // size - specifies the number of bytes

  // void *tempMemory = malloc(size);
  
  //Memory copy function
  // void *memcpy(void *dest, const void *src, size_t num)
//   memcpy(tempMemory, a, size);
//   memcpy(a, b, size);
//   memcpy(b, tempMemory, size);


//   free(tempMemory);

// }


//************************************************************** */
//******************** PASSING ARRAYS BY POINTERS   --- VOID * FUNCTION ************* */

// int sum(void *ptr, unsigned int size){
//   void *tempsum = malloc(size);

  
// }

// int findIfKeyInArray(int *arr, int size, int key){
//   for(int i=0; i<size; i++){
//     if(arr[i] == key){
//       return 1;
//       break;
//     }
//   }
//   return 0;

// }


#define SIZE 4
// int main(){

  
  //*********************************************** */
  //************ EXAMPLE --- VOID * - FUNCTION******************** */

  // int a=5, b=7;

  // genericSwap(&a, &b, sizeof(int));

  // printf("%d\n", a);
  // printf("%d\n", b);


   //*********************************************** */
  //************ PASSING ARRAYS BY POINTERS   --- VOID * FUNCTION ******************** */

  // int grades[SIZE] = {80,85,72,90};

  // this case: grades represents the name of the array and the address of the first element inside the array
  // int result = findIfKeyInArray(grades, sizeof(grades), 90);
  // printf("%d\n", result);
  // printf("%p\n", grades); //same
  // printf("%p\n", &grades[0]); //same

  // return 0;
// }


//********************************************* */
//************* PRACTICE ********************** */

// void inputArray(int *arr, int size){

//   for(int i=0; i<size; i++){
//     printf("enter the element #%d\n", i);
//     scanf("%d", &arr[i]);
//   }
// }

// void displayArray(int *arr, int size){

//   for(int i=0; i<size; i++){
//     printf("element #%d: %d\n", i, arr[i]);
//   }
// }

// int main(){

//   int arr[10];
//   inputArray(arr, sizeof(arr));
//   displayArray(arr, sizeof(arr));

//   return 0;
// }


//**************************************************** */
//************* RETURNING AN ARRAY FROM FUNCTION ******/
//**************************************************** */

//********************************************************************************* */
//************* WON'T WORK, SEE DYNAMIC MEMORY ALLOCATION TO MANAGE THE PROBLEM ******/
//********************************************************************************* */

//It seems that returning local variables from function like this won't work 
// int *createArray();

// int main(){

  // int *arr;
  // arr = createArray(); //function already destroyed their local variables, so won't work

//   for(int i=0; i<SIZE; i++){
//     printf("%d, ", arr[i]);
//   }
  

// }

//returns the name of the arr, or the address of the first element inside the arr, should work for both cases
// int *createArray(){
//   int arr[SIZE];
//   printf("enter an array of %d elements\n", SIZE);
//   for(int i=0; i< SIZE; i++){
//     printf("enter the #%d element", i+1);
//     scanf("%d", &arr[i]);
//   }
//   return arr; //both works
  // return &arr[0]; //both works
// }




//********************************************************** */
//************* DYNAMIC MEMORY ALLOCATION *************/
//********************************************************** */


// *************************************
//*********** MALLOC -- FUNCTION ******* */
// Sets memomry allocation without initializing memory content

// void *malloc(unsigned SIZE)

// int main(){
  
//   int arrSize;
//   void *a;
//   scanf("%d", &arrSize);

//   // we assign the total size of an array to the malloc function of type (int *)
//   a = (int *)malloc(sizeof(int) * arrSize);

//   if(a != NULL){
//     printf("Memory alloc successful");
//   }else{
//     printf("there was an error during memory alloc");
//   }
// }

//************ RETURNING ARRAY FROM FUNCTION -- MALLOC ****/
// int *createArr(){
//   int *arr;

//   arr = (int *)malloc(sizeof(int) * SIZE);
//   if(!arr){
//     printf("there was an error with the mem alloc");
//     exit(1);
//   }

//   for(int i=0; i<SIZE; i++){
//     printf("enter the #%d element: ", i);
//     scanf("%d", &arr[i]);
//   }
//   return arr;

//   free(arr);
// }



// *************************************
//*********** CALLOC -- FUNCTION ******* */
// Sets memomry allocation initializing all memory contents to zero
// void *calloc(unsigned num, unsigned size)
// void *calloc(number of elements: int, double, etc  ,  size of each element)



// *************************************
//*********** ADDITIONAL FREE MEM CONCEPTS ******* */
//NOTE: MAKE SURE TO FREE WETHER MALLOC OR CALLOC AFTER USE, IT MAY CAUSE SOME INTERNAL ERRORS LATER ON AND IT WILL BE DIFICULT TO SOLVE IT IF YOU DON'T FREE MEMORY SO
// -- EXAMPLE --
// NOTE: AFTER FREEING MEM ALLOC, POINTERS BECOME DANGLING POINTERS, MAKING THEM IMPOSSIBLE TO USE BECAUSE STILL POINTING TO THE SAME ADDRESS. WE HAVE TO DISABLE THEM
// int main(){
//   int *arr;
//   int arrSize;
//   scanf("%d", &arrSize);
//   arr = (int *)calloc(arrSize, sizeof(int));

//   // ...

//   free(arr); //frees the real value we are pointing to
//   arr=NULL; //Disabling the dangling pointer
// }
// NOTE: SEE VALGRIND: https://valgrind.org/docs/manual/quick-start.html to detect mem alloc errors


//*********** END -- ADDITIONAL FREE MEM CONCEPTS ******* */
// ***********************************************





// *************************************
//*********** REALLOC -- FUNCTION ******* */
// Used for change size memory already allocated, if we want to change for example an array size already allocated

// -- HOW IT WORKS BEHIND THE SCENES
// int *reallocate(void *oldArr, int oldSize, int newSize){
//   int *newArr;
//   newArr = (int *)malloc(newSize * sizeof(int));
//   for(int i=0; i<oldSize;i++){
//     newArr[i] = ((int *)oldArr)[i];
//   }
//   free(oldArr);
//   return newArr;
// }

// int main(){
//   int *arr;
//   int *temp;
//   int i, arrSize;
//   printf("please enter the amount of grades\n");
//   scanf("%d", arrSize);
//   arr = (int *)malloc(arrSize * sizeof(int));

//   if(arr != NULL){

//     for(i=0;i<arrSize;i++){
//       printf("enter the grade #%d: ", i+1);
//       scanf("%d", &arr[i]);
//     }
//     arrSize += 2;
//     temp = (int *)realloc(arr, arrSize * sizeof(int));
//     if(temp != NULL){
//       arr = temp;
//       // free(temp); //you should only free once, since tmep and arr point to the same region
//       temp = NULL;
//     }
//   } else{
//     printf("something went wrong, mem alloc failed\n");
//     exit(1);
//   }

//   free(arr);
// }

// void *realloc(void *ptr, size_t size)
// newArr = (int *)realloc(oldArr, arrSize * sizeof(int));


// ***********************************************
//*********** REALLOC -- FUNCTION -- ISSUES ******* */

// REALLOC FUNCTION MAY RETURN NULL, LOOSING THE PREVIUS DATA FROM THE MEMORY 
// IT MAY FREE THE OLD MEM ALLOC, LOSSING LIKE THAT THE PREVIUS DATA
// THIS WILL ONLY OCCUR IF WE REALLOC TO THE SAME OLD ARRAY, WITHOUT A TEMP VARIABLE


//*********** END -- REALLOC -- FUNCTION -- ISSUES ******* */
// ***********************************************


//***************************************************** */
//************ EXERCISES *******************/

// FUNCTION THAT FILLS AN ARRAY UNTILL READING "-1" FROM USER INPUT
// MY SOLUTION
// int *fillsArray(int *count){
//   int c = *count;
//   int num;
//   int *arr;
//   int *temp;
//   do
//   {
//     printf("Enter element #%d of the array: ",c+1);
//     scanf("%d", &num);
//     if(c == 0){
//       arr = (int *)malloc(sizeof(int));
//       arr[c] = num;
//       c++;
//     }else{
//       temp = (int *)realloc(arr, sizeof(int) * (c+1));
//       if(temp != NULL){
//         arr = temp;
//         arr[c]=num;
//         c++;
//       }
//     }
//   } while (num != -1);
//   *count=c;
//   return arr;
  

// }
// int main(){
//   int count=0;
//   int *result;
//   result = fillsArray(&count);

//   for(int i=0;i<count-1;i++){
//     printf("%d, ", result[i]);
//   }
//   printf("total size: %d", count-1);
// }

// ***************SOLUTION FROM VIDEO*************************
// void printArr(int* arr, int size);
// int* createUnknownSizeArray(int* arrSize);

// int main()
// {
// 	int size;
// 	int* myArr = createUnknownSizeArray(&size);
// 	printArr(myArr, size);
// }


// void printArr(int* arr, int size)
// {
// 	int i;
// 	for (i = 0; i < size; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// }

// // finally we can pass its size... Afterwards..
// int* createUnknownSizeArray(int *arrSize)
// {
// 	int num, lastIndex = 0, size = 0;
// 	int* arr = NULL;
// 	int* temp = NULL;

// 	printf("Enter num: ");
// 	scanf("%d", &num);
// 	while (num != -1)
// 	{
// 		size++;
// 		temp = (int*)realloc(arr, size * sizeof(int));
// 		if (!temp) return NULL;
// 		arr = temp;
// 		arr[lastIndex] = num;
// 		lastIndex++;
// 		printf("Enter num: ");
// 		scanf("%d", &num);
// 	}
// 	*arrSize = size;
// 	return arr;
// }



// finally we can pass its size... Afterwards..
// int* adjustableRealloc(int* arrSize)
// {
// 	int num, lastIndex = 0, size = 2;
// 	int* arr = NULL;
// 	int* temp = NULL;

// 	printf("Enter num: ");
// 	scanf("%d", &num);
// 	if (num == -1) // Empty Array
// 	{
// 		*arrSize = 0;
// 		return NULL;
// 	}
// 	else
// 	{
// 		temp = (int*)malloc(size * sizeof(int));
// 		if (!temp) return NULL;
// 		arr = temp;
// 	}
// 	while (num != -1)
// 	{
// 		if (lastIndex == size) // no other place to add values..
// 		{
// 			size = size * 2;
// 			temp = (int*)realloc(arr, size * sizeof(int));
// 			if (!temp) return NULL;
// 			arr = temp;
// 		}
// 		arr[lastIndex] = num;
// 		lastIndex++;
// 		printf("Enter num: ");
// 		scanf("%d", &num);
// 	}
// 	arr = (int*)realloc(arr, lastIndex * sizeof(int));
// 	// assert...
// 	*arrSize = lastIndex;
// 	return arr;
// }

//* END SOLUTION FROM VIDEO ***/
//************************** */

//********************************************************** */
//**************  PASSING 1D ARRAY BY REFERENCE *************/

// CREATING 1D ARRAY PASSING BY REFERENCE
// void create1DArrbyRef(int *size, int **ptr){
//   int s = *size;
//   int *temp;
//   temp = (int *)malloc(s * sizeof(int));
//   if(temp != NULL){
//     for (int i = 0; i < s; i++)
//     {
//       temp[i] = i;
      
//     }
//     *ptr = temp;
    
//   }
// }

// CREATING 1D ARRAY PASSING BY REFERENCE WITHOUT TEMP VARIABLE
// void create1DArrbyRef2(int size, int **arr){
//   *arr = (int *)malloc(size * sizeof(int));
//   for(int i=0; i<size; i++){
//     (*arr)[i]=i;
//   }

// }


// int main(){
//   int *ptr;
//   int size = 10;

//   // create1DArrbyRef(&size, &ptr);
//   create1DArrbyRef2(size, &ptr);

//   for (int i = 0; i < size; i++)
//  {
//     printf("%d, ", ptr[i]);
//   }

  // free(ptr);
  // return 0;
// }


//**************  END -- PASSING 1D ARRAY BY REFERENCE *************/
//********************************************************** */




//****************************************************************** */
//**************************** INSERT NEW ELEMENT IN ARRAY -- GENERIC FUNCTION ****************** */

// void *insertInArray(void *arr, unsigned elemSize, void *element, unsigned index, unsigned oldSize){
//   void *newArr;
//   newArr = malloc(elemSize + oldSize);
//   if(newArr != NULL){
//     memcpy(newArr, arr, index*elemSize);
//     // we take type char as the copy for bits, it is a single unit
//     memcpy((char *)newArr + index*elemSize, element, elemSize);
//     memcpy((char *)newArr + (index+1) * elemSize, (char *)arr + index*elemSize, oldSize - index*elemSize);

    
//     return newArr;
//   }else{
//     return NULL;
//   }
// }

// int main(){
//   int arr[8] = {1,2,3,4,5,6,7,8};
//   int element=5;
//   int *newArr;
//   for(int i=0; i<8; i++){
//     printf("%d, ", arr[i]);
//   }
//   newArr = insertInArray(arr, sizeof(int), &element, 2, 8*sizeof(int));
//   for(int i=0; i<9; i++){
//     printf("%d, ", newArr[i]);
//   }
//   free(newArr);

//   return 0;
// }



//**************************** END -- INSERT NEW ELEMENT IN ARRAY -- GENERIC FUNCTION ****************** */
//********************************************************************************** */


//****************************************************************** */
//**************************** DELETE ELEMENT FROM ARRAY -- GENERIC FUNCTION ****************** */

// void *deleteFromArray(void *arr, unsigned arrSize, unsigned index, unsigned elemSize){
//   void *newArr = malloc(arrSize - elemSize);
//   if(newArr == NULL) return NULL;
//   memcpy(newArr, arr, elemSize * index);
//   memcpy((char *)newArr + elemSize*index, (char *)arr + elemSize * (index + 1), arrSize - elemSize * (index + 1));

//   return newArr;
// }

// int main(){
//   int arr[8] = {1,2,3,4,5,6,7,8};
//   int index=2;
//   int *newArr;
//   newArr = deleteFromArray(arr, 8*sizeof(int), index, sizeof(int));

//   for(int i=0; i<10;i++){
//     printf("%d, ", newArr[i]);
//   }
//   free(newArr);

// }


//******************************************************************************************* */
//******************** CREATE A NEW ARRAY COPIED FROM ANOTHER ARRAY, PASSED BY REFERENCE *** */


// void copyArray(int *arr, int **copiedArr, int size){
//   *copiedArr = (int *)malloc(size * sizeof(int));
//   if(*copiedArr != NULL){

//     memcpy((*copiedArr), arr, size * sizeof(int));
//   }
// }
// int main(){
//   int arr[3] = {1,2,3};
//   int *copiedArr;
//   copyArray(arr, &copiedArr, 3);
//   for(int i=0; i<3; i++){
//     printf("%d, ", (copiedArr)[i]);
//   }

//   free(copiedArr);

// }