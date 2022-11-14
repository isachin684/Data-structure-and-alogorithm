#include <stdio.h> 
int main()
{   int array[100], position, c, n, value; 
 printf("Enter number of elements in array"); 
 scanf("%d", &n); 
 printf("Enter %d elements", n); 
 for (c = 0; c < n; c++)   
   scanf("%d", &array[c]); 
printf("Enter the location to delete an element");
 scanf("%d", &position); 
 for (c = position; c < n; c++) 
   array[c-1] = array[c]
  printf("After Deletion the array output is"); 
 for (c = 0; c <= n - 2; c++)  
   printf("%d", array[c]); 
 return 0;} 
