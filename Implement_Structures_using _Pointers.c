#include <stdio.h>
struct student{   char id[10];
               char studentname[30];
               char subjectname[30]; 
               float mark;};
int main(){
  struct student student1 = {"STU0001", "Anand", "Data structure", 80.5f};    
  struct student *ptrstudent1; 
  ptrstudent1 = &student1;    
  printf("Student Id: %s", ptrstudent1->id); 
  printf("Student Name: %s", ptrstudent1->studentname);  
printf("Subject Name: %s", ptrstudent1->subjectname);
  printf("Subject Mark: %f", ptrstudent1->mark); 
  return 0;}
//algorith:. Start the program2. Define a pointer using syntax <datatype> *variable name 3. This syntax points to the address of the memory block that stores a structure. 4. This  is known as the structure pointer.5. Passing structure data type as a reference to a function , as if we pass the pointer thefunction   using   the   pointer   can   actually   use   that   and   modify   the   contents   of   theStructure that is being pointed by the pointer .6. To   declare   and   create   dynamic   data   structures   ,   usually   the   structures   are   usingdynamic memory allocation .When the structure is declared dynamically a pointer isreturned   having   the   address   location   where   the   node   has   been   formed.   Now   thispointers has to be assigned to some variable to access that memory location and do allkinds of operations.7. To   access   the   members   of   the   structure   referenced   using   the   pointer   we   use   theoperator “->”.This operator is called as arrow operator. Using this we can access all themembers of the structure and we can further do all operations on them.8.  If we don’t use the “->” we can first deference the pointer then we can access themember variables using the “.” Operator. We do this until we get the desired output.9. Stop the program//
