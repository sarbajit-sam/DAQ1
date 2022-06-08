#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#define SIZE 1000

int main()
{
int c;
int col=0, cntr=0;
float ArrOfVals[1200][7];
while (c=fgetc(stdin)!= EOF) 

{

   
        char buf[SIZE];
        //printf("Write input text: ");
        fgets(buf, SIZE , stdin);
        
        //printf("%s\n", buf);
        //char* value = strtok(buf, ", ");
        // while(buf != NULL)
        //{
            //char* value = strtok(buf, ", ");    
            //ArrOfVals[cntr][col]=atof(value);
            //buf = strtok(NULL, ",");
          //  
        //
        //printf("Vd float value : %4.8f\n" ,atof(value));
        char* value = strtok(buf, ", ");

        while( value != NULL )
             {
                // Splitting the data
                //char* value = strtok(buffer, ", ");
 
 
                printf("%s \t", value);
                ArrOfVals[cntr][col]=atof(value);
                value = strtok(NULL, ", ");
                col++;
        
            
             }
             cntr++;
            //printf("\n");
        
    
        
        //fflush(stdin);

    //exit(EXIT_SUCCESS);
}

return 0;
}
