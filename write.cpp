#include <stdio.h>
 
#define LEN 256
int main ()
{
   FILE * fp;
   int i;
   /* open the file for writing*/
   fp = fopen ("1.txt","w");
 
   /* write into the file stream*/
   
       fprintf (fp, "write() is a syscall that writes data from a buffer declared by the user to a given device, maybe a file. \n This is the primary way to output data from a program by directly using a system call.");
   
 
   /* close the file*/  
   fclose (fp);
   return 0;
}
