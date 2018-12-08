#include <stdio.h>
#include <string.h>

int reverseNumber(int num){
  int temp,rev,i ;
  rev = 0;
  temp = num;
  while (temp != 0) {
    i = temp % 10;

    rev = rev*10 +i;
    temp = temp/10;

  }
  return rev;
}
void reverseString(char str[], char rev[]){
  int n = strlen(str);
  int i = 0;
  int temp = n;
  while (temp >= 0) {
    rev[temp-1] = str[i];
    temp--;
    i++;
  }
  rev[n] = '\0';
}
int countSpace(char str[]){
  int n = strlen(str);
  int count = 0;
  for (int i = 0; i < n; i++) {
    if(str[i] == ' '){
      count++;
    }
  }
  return count;
}
void deleteSpace(char str[],char strDel[]) {
  FILE *fo;
  FILE *fo1;
  fo = fopen("del.DAT", "w+");
  for(int i = 0 ; i < strlen(str); i++){
    if(str[i] == ' '){
      continue;
    }else{
        fprintf(fo, "%c",str[i] );

    }
  }
  fclose(fo);
  fo1 = fopen("del.DAT","r");
  fscanf(fo1,"%s",strDel);
  printf("%s\n",strDel );
  fclose(fo1);
}
int primeNumberCheck(int num){
  int count = 0;
  for(int i = 1; i <= num ; i++){
    if(num % i == 0){
      count++;
    }
  }
  return count;
}
void inputArr_levelOne(int arr[],int n){
  for(int i=0; i < n; i++){
    printf("arr[%d]: ",i);
    scanf("%d",&arr[i]);
  }
}
void outputArr_levelOne(int arr[],int n){
  for (int i = 0; i < n; i++) {
    /* code */
    printf("%3d ",arr[i]);
  }
}
void inputArr_levelTwo(int arr[100][100],int row, int col){
  FILE *matrix;
  matrix = fopen("matrix.DAT","w+");
  for(int i = 0; i < row; i++){
    for (int j = 0; j < col; j++) {
      printf("arr[%d][%d]: ",i,j);
      scanf("%d",&arr[i][j]);
      fprintf(matrix,"%3d",arr[i][j]);
    }
      fprintf(matrix,"\n");
  }
    fclose(matrix);
}
void outputArr_levelTwo(int arr[100][100],int row, int col){

  for(int i = 0; i < row; i++){
    for (int j = 0; j < col; j++) {
      printf("%3d",arr[i][j]);
    }
    printf("\n");
    }
 }
void revArr(int a[100][100],int row,int col,int b[]){
  FILE *foW;
  FILE *foR;
  foW = fopen("revArr.DAT","w+");
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      fprintf(foW, "%3d",a[i][j]);
    }
  }
  fclose(foW);
  foR = fopen("revArr.DAT","r");
  for (int i = 0; i < (col*row); i++) {
    fscanf(foR,"%d",&b[i]);
  }
  fclose(foR);
}
void sortArr(int arr[],int n){
    int temp;
    for(int i = 0; i< n-1; i++){
      for(int j=i+1; j <n; j++){
        if(arr[i] > arr[j]){
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }
  }
void Arr_searchNumber_levelOne(int A[], int n, int num){
    int count,uncount;
    int location[100];
    count = 0;
    uncount = 0;
    FILE *foW;
    FILE *foR;
    foW = fopen("searchNumber.DAT", "w+");
    foR = fopen("searchNumber.DAT", "r");
    for(int i = 0; i < n; i++){
      if (A[i] == num) {
        fprintf(foW, "%3d",i);
        count++;
      }else{
        uncount++;
      }
  }
  fclose(foW);
    if(uncount == n){
      printf("find not found\n");
    }else{
    for(int i =0; i < count; i++){
      fscanf(foR, "%3d",&location[i]);
    }
    outputArr_levelOne(location,count);
  }
    fclose(foR);
  }
void deleteRow(int a[100][100],int row, int col, int rowDel){
  for(int i=0; i<row ;i++){
    printf("\n");
    printf("\n");
    for(int j=0; j<col ;j++){
      if(i == rowDel){
        continue;
      }else{
        printf("%3d",a[i][j]);
      }
    }
  }
}
void deleteCol(int a[100][100],int row, int col, int colDel){
  for(int i=0; i<row ;i++){
    printf("\n");
    printf("\n");
    for(int j=0; j<col ;j++){
      if(j == colDel){
        continue;
      }else{
        printf("%3d",a[i][j]);
      }
    }
  }
}
void deleteColandRow(int a[100][100], int row, int col, int rowDel, int colDel){
  for(int i=0; i<row ;i++){
    printf("\n");
    printf("\n");
    for(int j=0; j<col ;j++){
      if(i == rowDel){
        continue;
      }
      else if( j == colDel){
        continue;
      }else{
        printf("%3d",a[i][j]);
      }
    }
  }
}
int searchMin_levelTwo(int a[100][100],int row, int col){
  int min = a[0][0];
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(a[i][j] <= min){
        min = a[i][j];
      }
    }
  }
  return min;
}
int searchMin_levelOne(int a[],int n){
  int min = a[0];
  for(int i=0; i<n; i++){
    if(a[i] <= min){
      min = a[i];
    }
  }
  return min;
}
int searchMax_levelTwo(int a[100][100],int row, int col){
  int max = a[0][0];
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(a[i][j] >= max){
        max = a[i][j];
      }
    }
  }
  return max;
}
int searchMax_levelOne(int a[],int n){
  int max = a[0];
  for(int i=0; i<n; i++){
    if(a[i] >= max){
      max = a[i];
    }
  }
  return max;
}
void Arr_searchNumber_levelTwo(int a[100][100],int row,int col, int num){

  FILE *location; location = fopen("location.DAT","w+");
  int count;
  count = 0;
  int locationCount = 0;
  for (int  i = 0; i < row; i++) {
    /* code */

    for(int j = 0; j < col; j++){
       if(a[i][j] == num){
         fprintf(location,"%d%d ",i,j);
       }else{
         count++;
       }
    }
  }
  if(count == (row*col)){
    printf("Find not found\n");
  }

  fclose(location);
}
int count_Arr_searchNumber_levelTwo(int a[100][100],int row,int col, int num){

  FILE *location; location = fopen("location.DAT","w+");
  int count;
  count = 0;
  int locationCount = 0;
  for (int  i = 0; i < row; i++) {
    /* code */

    for(int j = 0; j < col; j++){
       if(a[i][j] == num){
         fprintf(location,"%d%d ",i,j);
         locationCount++;
       }else{
         count++;
       }

 }
 }
  fclose(location);
  return locationCount;
}
void insertRow(int a[100][100], int row, int col, int rowAdd){
  for(int i = row ; i < (row+rowAdd); i++){
    for(int j = 0 ; j<col; j++){
      printf("arrAdd[%d][%d]: ",row,j);
      scanf("%d",&a[i][j]);
    }
  }
}
void insertCol(int a[100][100], int row, int col, int colAdd){
   for(int i = 0 ; i < row; i++){
    for(int j = col ; j<(col + colAdd); j++){
      printf("arrAdd[%d][%d]: ",i,j);
      scanf("%d",&a[i][j]);
    }
   }
}
int  location(int a[100][100], int row,int col, int x,int y){
  int location;
  for (int  i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      location = a[x][y];
      return location;
      break;
    }
    break;
  }
}
void deleteSpaceII(char prop[]){
  char temp[3];
  temp[1] = '\0';
  for(int i = 0; i < strlen(prop)-1;i++)
  {
    for(int j = i+1;j< strlen(prop);j++)
    if(prop[i] == ' ') {
      temp[0] = prop[i];
      prop[i] = prop[j];
      prop[j] = temp[0];
    }
  }
}
void deleteNewline(char prop[]){
      int a = strlen(prop);
      strcpy(&prop[strlen(prop)-1],"");
}
void deleteNewlineII(char prop[]){
      int a = strlen(prop);
      prop[strlen(prop)-1] = NULL;
}
