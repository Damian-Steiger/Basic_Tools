#include <stdio.h> // define EOF

main(){
 int c;
 int count_char, count_line = 0;

 c = getchar();
 while(c != EOF) /* no end of file*/
 {
   if(c != '\n'){
     count_char++; //include spaces and '\n'
   }else{
     count_line++;//only includes newlines
   }


   c = getchar(); /* read next */
 }
 printf("# of chars: %d\n # of line: %d\n",count_char, count_line);


}
