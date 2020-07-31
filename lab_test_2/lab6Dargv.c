#include <stdio.h>

int getSum (char*[], int);

int getDiff(char **, int);

int main(int argc, char *argv[])
{

        printf("There are %d arguments (excluding \"%s\")\n", argc-1, argv[0]);
        int i;
        if (! strcmp(argv[1], "sum"))  // equal sum
        {
            for (i=2;i<argc ;i++ )
            {
                printf("%s ", argv[i]);
                if(i!=argc -1)
                   printf("+ ");
            }

            printf("\n= %d\n", getSum(argv, argc));

        }
        else if (!strcmp( argv[1], "diff"))
        {
            for (i=2;i<argc ;i++ )
            {
                printf("%s ", argv[i]);
                if(i!=argc -1)
                   printf("- ");
            }

            printf("\n= %d\n", getDiff(argv, argc));
        }
        
        return 0;
        

}

int getSum(char * arr[], int leng)
{
        int i; int sum = 0;

        for (i=2;i < leng ; i++)
        {
           sum += atoi( arr[i] );  
         
         /* or use sscanf (atoi is perferred) 
	   int v; 
           sscanf(arr[i], "%d", &v); 
           sum += v;  
         */
        }

        return sum;
}



int getDiff(char ** arr, int leng)
{
    int i; int diff = atoi(*(arr+2));
	
    for (i=3;i < leng ; i++)
    {
       diff -= atoi( *(arr+i) );  
    }
        
    return diff;
}
