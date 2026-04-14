#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//**************************************************************************************** */
//**************************** FILES MANAGENMENT ******************************** */
//**************************************************************************************** */
//************************ REMOVE FUNCTION ********************** */

// it takes from the file name: a string, not from the pointer itself
// int remove(const char *filename

// int main(){

//   int result;
//   result = remove("myFile.txt");
//   if(result != 0)
//     printf("An error ocurred during the removing of the file, the file could not be removed\n");
//   else //result = 0
//     printf("File was removed successfuly");

//   return 0;
// }

// int main(){
//   char filepath[30];
//   printf("Enter the ful path of the file you want to delete\n");
//   fgets(filepath, sizeof(filepath), stdin);

//   //remove new line character if present
//   int len = strlen(filepath);
//   if(len > 0 && filepath[len-1]=='\n'){
//     filepath[--len] = '\0';
//   }

//   int result = remove(filepath);
//   if(result != 0)
//     printf("file could not be deleted\n");
//   else
//     printf("file deleted successfuly\n");


//   return 0;
// }

//**************************************************************************************** */
//************************ RENAME FUNCTION ********************** */

// int main(){
//   int result;
//   result = rename("myFile.txt", "myNewFile.txt");
//   if(result == 0)
//     printf("File was renamed successfuly\n");
//   else
//     printf("Could not rename the file\n");
// }

//MOVING THE FILE FROM ONE DIRECTOY TO ANOTHER AND ALSO RENAME IT
// int main(){
//   int result;
//   result = rename("/path/to/dir1/myFile.txt", "/path/to/dir2/myNewFile.txt");
//   if(result == 0)
//     printf("File was moved and renamed successfuly\n");
//   else
//     printf("Could not move the file\n");
// }

//CHANGING FILE EXTENSION
// int main(){
//   int result;
  // FILE *f = fopen("myFile.txt", "w");
  // if(f == NULL)
  //   exit(1);
  // fputs("Hello from the new file", f);
  // fclose(f);


  // result = rename("myNewFile.txt", "myNewFile.csv");
  // if(result == 0)
  //   printf("File was moved and renamed successfuly\n");
  // else
  //   printf("Could not move the file\n");


  //using generic type
  
// }


//**************************************************************************************** */
//************************ LOCATION FILE FUNCTIONS ********************** */
//*********************************************
//************ TELL FUNCTION ********************* */
// TELLS US THE EXACT LOCATION IN TERMS OF BYTES OF THE MIDDLEMEN(THE POINTER THAT READS ELEMENTS, IN THIS CASE THE f pointer) INSIDE THE FILE FROM THE BEGINING 

// int main(){
//   int pos;
//   FILE *f = fopen("myNewFile.txt", "r");

//   pos = ftell(f);
//   printf("Position in the file = %d\n", pos); //0

//   fgetc(f);
//   pos = ftell(f);
//   printf("Position in the file = %d\n", pos); //1
  
//   fgetc(f);
//   pos = ftell(f);
//   printf("Position in the file = %d\n", pos); //2

//   fclose(f);
// }

//************ SEEK FUNCTION ********************* */
// IT MOVES YOU FROM RIGHT TO LEFT OR VICEVERSA INSIDE THE CURRENT LOCATION OF THE FILE

// int main(){
//   int pos;
//   FILE *f = fopen("myNewFile.txt", "r");

//   // fseek(f, 5, SEEK_CUR); //from the current pos, move 5 positions to the right
//   fseek(f, 5, SEEK_SET); //5 positions to the right from to start

// //************* REWIND FUNCTION ************** */
//   rewind(f); /// set the pointer inside the file to the begining

//   fclose(f);
// }


//**************************************************************************************** */
//************************ EXERCISES -- FILES MANAGENMENT ********************** */
//*********************************************

// void removeSpaces(char *url, char *urloutput){
//   int currentChar;
//   FILE *fp = fopen(url, "r");
 
//   FILE *fpout = fopen(urloutput, "w");
//   if(fpout != NULL && fp != NULL){
    
//     while (!feof(fp))
//     {
//       currentChar = fgetc(fp);
//       if(currentChar != ' '){
//         fputc(currentChar, fpout);
//       }
//     }
//   }
//   if(fp != NULL)
//     fclose(fp);
//   if(fpout != NULL)
//     fclose(fpout);
//   // return fpout;
  
// }

// int main(){
//   removeSpaces("myNewFile.txt", "newFile.txt");

//   return 0;
// }


//**************************************************** */
// void evenAndOdd(char *filename){
//   FILE *fpEven;
//   FILE *fpOdd;

//   FILE *fp = fopen(filename, "r");
//   if(fp == NULL){
//     printf("Could not open the sourceFile\n");
//     return;
//   }
//   fpEven = fopen("Even.txt","w");
//   fpOdd = fopen("Odd.txt", "w");
//   if(fpEven == NULL || fpOdd == NULL){
//     printf("Could not open the target files\n");
//     return;
//   }
//   int num;
//   while (fscanf(fp, "%d", &num) != EOF)
//   {
//     if(num %2 ==0)
//       fprintf(fpEven, "%d ", num);
//     else
//       fprintf(fpOdd, "%d ", num);
//   }
//   fclose(fpEven);
//   fclose(fpOdd);
//   fclose(fp);
  
  
// }

// int main(){
  
//   evenAndOdd("sourceNumberfile.txt");
  
//   return 0;
// }

//**************************************************** */
// int compareFiles(char *filename1, char *filename2){
//   FILE *fp1 = fopen(filename1, "r");
//   FILE *fp2 = fopen(filename2, "r");

//   if(fp1 == NULL || fp2 == NULL)
//   {
//     printf("files could not be opened\n");
//     return -1;
//   }
  
//   char chr1 = fgetc(fp1);
//   char chr2 = fgetc(fp2);
//   while ((chr1 == chr2) && (chr1 != EOF) && (chr2 != EOF))
//   {
//     chr1 = fgetc(fp1);
//     chr2 = fgetc(fp2);
//   }
//   if(chr1 == chr2)
//     return 1;
//   else
//     return 0;
  
//   fclose(fp1);
//   fclose(fp2);
  
// }

// int main(){
  
//   int r = compareFiles("str1.txt", "str2.txt");
//   printf("%d", r);
//   return 0;
// }

//*********************************************************************** */
//***************** STRUCTURAL/BINARY FILES */
// typedef struct point
// {
//   int x, y;
// }Point;

// int main(){
//   Point p = {3, 5};
//   FILE *fp = fopen("myFile.bin", "wb"); //wb:write binary
//   if(fp != NULL){
//     printf("The file was successfuly opened\n");
//     // fwrite(from were will start copying the data, size of the copied record, how many records of that copy, where it is going to copy to);
//     fwrite(&p, sizeof(Point), 1, fp);
//     fclose(fp);
//   }
//   return 0;
// }

//******************************************************************** */
//***************** WRITING TWO POINTS FROM THE INPUT USER TO A FILE */
// typedef struct point
// {
//   int x, y;
// }Point;

// int main(){

//   Point p1, p2;
//   FILE *fp = fopen("writeTwoPoints.bin", "wb");
//   printf("Enter p1 x: \n");
//   scanf("%d", &p1.x);
//   printf("Enter p1 y: \n");
//   scanf("%d", &p1.y);
//   printf("Enter p2 x: \n");
//   scanf("%d", &p2.x);
//   printf("Enter p2 y: \n");
//   scanf("%d", &p2.y);
//   if(fp != NULL){
//     printf("File opened successfuly for binary writing\n");

//     fwrite(&p1, sizeof(Point), 1, fp);
//     fwrite(&p2, sizeof(Point), 1, fp);

//     fclose(fp);
//   }
//   return 0;
// }

//************************************************************* */
//************ WRITING AN ARRAY OF POINTS TO A FILE */
// typedef struct point
// {
//   int x, y;
// }Point;

// int main(){

//   Point arr[5] = {{1,2}, {3,4}, {5,6}, {7,8}, {9,10}};
  
//   FILE *fp = fopen("arrayOfPoints.bin", "wb");
//   if(fp != NULL){
//     printf("file was successfuly open for writing binary\n");
//     //OPNTION #1
//     for(int i=0; i<5;i++){
//       fwrite(&arr[i], sizeof(Point), 1, fp);
//     }

//     // OPTION #2
//     int writtenElements = fwrite(arr, sizeof(Point), 5, fp);
//     printf("%d Points successfuly written\n", writtenElements);
//     fclose(fp);
//   }
//   return 0;
// }


//************************************************************* */
//************ SEARCH FOR SPECIFIC POINT IN A FILE */

// typedef struct point
// {
//   int x,y;
// }Point;

// int main(){

//   FILE *fp = fopen("arrayOfPoints.bin", "rb");
//   Point storedPoint, targetPoint;
//   printf("Enter x: \n");
//   scanf("%d", &targetPoint.x);
//   printf("Enter y: \n");
//   scanf("%d", &targetPoint.y);

//   if(fp != NULL){
//     int i = 1;
//     while (!feof(fp))
//     { 
//       fread(&storedPoint, sizeof(Point), 1, fp);
//       if((storedPoint.x == targetPoint.x) && (storedPoint.y == targetPoint.y)){
//         printf("Point found in the file\n");
//         printf("point at position: %d\n", i);
//       }
//       i++;
//     }
//     fclose(fp);
//   }
//   return 0;
// }




//************************************************************* */
//************ EDIT SPECIFIC POINT IN A FILE */
//MY SOLUTION
// typedef struct point
// {
//   int x, y;
// }Point;

// int main(){

//   FILE *fpr = fopen("arrayOfPoints.bin", "rb");
//   Point targetPoint, storedPoint, updatedPoint;
//   int i = 1;
//   printf("Please enter the values of the point you want to edit: \n");
//   printf("x: \n");
//   scanf("%d", &targetPoint.x);
//   printf("y: \n");
//   scanf("%d", &targetPoint.y);

//   if(fpr != NULL){
//     while (!feof(fpr))
//     {
//       fread(&storedPoint, sizeof(Point), 1, fpr);
//       if((targetPoint.x == storedPoint.x) && (targetPoint.y == storedPoint.y)){
//         printf("Point found, please introduce the values you want to set in the update\n");
//         printf("x: \n");
//         scanf("%d", &updatedPoint.x);
//         printf("y: \n");
//         scanf("%d", &updatedPoint.y);

//         FILE *fpw = fopen("arrayOfPoints.bin", "wb");
//         fwrite(&updatedPoint, sizeof(Point), 1, fpw);
//         fclose(fpw);
//       }
//       i++;
//       fclose(fpr);
//     }
//   }

//   return 0;
// }

//SOLUTION FROM VIDEO

// typedef struct point
// {
//   int x, y;
// }Point;

// int main(){

//   // rb+: for both opeations reading and writing
//   FILE *fp = fopen("arrayOfPoints.bin", "rb+");
//   Point updatedPoint;
//   int choice;
//   printf("Please enter the position with 1 as the frist position of the point you want to edit: \n");
//   scanf("%d", &choice);

//   if(fp != NULL){

//     fseek(fp, (choice - 1)*sizeof(Point), SEEK_SET);
//     printf("Please enter the new values: \n");
//     printf("x: \n");
//     scanf("%d", &updatedPoint.x);
//     printf("y: \n");
//     scanf("%d", &updatedPoint.y);
//     fwrite(&updatedPoint, sizeof(Point), 1, fp);
//     printf("Point #%d was modified\n", choice);
//     fclose(fp);

//   }

//   return 0;
// }


//************************************************************* */
//************ MULTIPLY A GIVEN INDEX POINT BY 3*/

// typedef struct point
// {
//   int x, y;
// }Point;

// void multPointBy3(char* filename, unsigned int choice)
// {
//     FILE* fp = fopen(filename, "rb+");
//     Point p;
//     if (fp != NULL)
//     {
//         fseek(fp, (choice - 1) * sizeof(Point), SEEK_SET);
//         fread(&p, sizeof(Point), 1, fp);
//         p.x *= 3;
//         p.y *= 3;
        
//         //OPTION #1
//         // fseek(fp, (choice - 1) * sizeof(Point), SEEK_SET);
//         //OPTION #2
//         fseek(fp, -1 * (int)sizeof(Point), SEEK_CUR);
        
//         fwrite(&p, sizeof(Point), 1, fp);
//         fclose(fp);
//     }
// }

// int main(){

//   multPointBy3("arrayOfPoints.bin", 2);

//   return 0;
// }


//************************************************************* */
//************ REVERSE ORDER OF POINTS FROM A FILE, NOT THE COORDINATES*/

// typedef struct point
// {
//   int x, y;
// }Point;

// int main(){

//   FILE *fp = fopen("arrayOfPoints.bin", "rb+");
//   Point p[2];
//   if(fp != NULL){

//     while (!feof(fp))
//     {
//       Point temp;
//       //it could work, but what if the number of points in the file are odd?
//       //we are only swapping among two points
//       fread(p, sizeof(Point), 2, fp);
//       temp = p[0];
//       p[0] = p[1];
//       p[1] = temp;
//       fseek(fp, -2 * sizeof(Point), SEEK_CUR);
//       fwrite(p, sizeof(Point), 2, fp);
      
//     }
//     fclose(fp);
    

//   }
//   return 0;
// }


// SOLVED FROM VIDEO
// typedef struct point
// {
//   int x,y;
// }Point;

// int main(){

//   FILE *fp = fopen("arrayOfPoints.bin", "rb+");
//   if(fp != NULL){
//     int totalPoints;
    
//     //say number of points
//     fseek(fp, 0, SEEK_END);
//     totalPoints = ftell(fp) / sizeof(Point);
//     fseek(fp, 0, SEEK_SET);

//     //store points a new array
//     Point *pointArr = (Point *)malloc(sizeof(Point) * totalPoints);
//     fread(&pointArr, sizeof(Point), totalPoints, fp);

//     //swap the array
//     Point temp;
//     for(int i=0; i<totalPoints/2 ;i++){
//       temp = pointArr[i];
//       pointArr[i] = pointArr[totalPoints - 1 - i];
//       pointArr[totalPoints - 1 - i] = temp;
//     }

//     //update file
//     fseek(fp, 0, SEEK_SET);
//     fwrite(&pointArr, sizeof(Point), totalPoints, fp);
    
//     fclose(fp);
//     free(pointArr);
//   }
//   return 0;
// }


//************************************************************* */
//************ ADDING A POINT TO THE END OF A FILE*/

// typedef struct point
// {
//   int x,y;
// }Point;

// int main(){

//   FILE *fp = fopen("arrayOfPoints.bin", "ab");
//   Point p;
//   printf("Please enter the point that you want to add:\n");
//   printf("x: ");
//   scanf("%d", &p.x);
//   printf("y: ");
//   scanf("%d", &p.y);

//   if(fp != NULL){
//     fwrite(&p, sizeof(Point), 1, fp);
//     fclose(fp);
//   }
  
//   return 0;
// }

//************************************************************* */
//************ DELETING A POINT FROM A FILE*/
//MY SOLUTION
// typedef struct point
// {
//   int x,y;
// }Point;

// int main(){
//   FILE *fp = fopen("arrayOfPoints.bin", "rb+");
//   int i;
//   Point *pointArr;
//   printf("Please enter the index of point: ");
//   scanf("%d", &i);
//   if(fp != NULL){
//     // fseek(fp, i * sizeof(Point), SEEK_SET);
//     FILE *tempF = fopen("tempFile.bin", "ab");
//     if(tempF != NULL){
//       //see how many points are there
//       fseek(fp, 0, SEEK_END);
//       int totalELements = ftell(fp) / sizeof(Point);
//       fseek(fp, 0, SEEK_SET);
      
//       //copy all the points except the index from the fp to tempF
//       pointArr = (Point *)malloc(sizeof(Point) * (totalELements-1));
//       fread(pointArr, sizeof(Point), i-1, fp);
//       fseek(fp, 0, SEEK_SET);
//       fwrite(pointArr, sizeof(Point), i-1, tempF);

//       fseek(fp, sizeof(Point) * i, SEEK_SET);
//       fread(pointArr, sizeof(Point), totalELements - i, fp);
//       fwrite(pointArr, sizeof(Point), totalELements - i, tempF);

//       fclose(fp);
//       fclose(tempF);
//       free(pointArr);
//       remove("arrayOfPoints.bin");
//       rename("tempFile.bin", "arrayOfPoints.bin");
      
//     }
    

//   }

//   return 0;
// }

//SOLUTION FROM VIDEO
// typedef struct point
// {
//   int x,y;
// }Point;

// int main(){

//   FILE *fp = fopen("arrayOfPoints.bin", "rb");
//   if(fp == NULL){
//     printf("File: arrayOfPoints.bin could not be opened");
//     return;
//   }
//   FILE *tempF = fopen("tempFile.bin", "wb");
//   if(tempF == NULL){
//     printf("File: tempFile.bin could not be opened");
//     return;
//   }
//   int i;
//   printf("Please enter the index of point: ");
//   scanf("%d", &i);
//   Point p;
//   int currentIndex = 1;
//   while (fread(&p, sizeof(Point), 1, fp))
//   {
//     if(currentIndex != i)
//       fwrite(&p, sizeof(Point), 1, tempF);
//     currentIndex++;
//   }

//   fclose(fp);
//   fclose(tempF);
//   if(remove("arrayOfPoints.bin" == 0))
//     if(rename("tempFile.bin", "arrayOfPoints.bin") != 0)
//       printf("could not rename the temp file...\n");  
  
//   return 0;
// }


