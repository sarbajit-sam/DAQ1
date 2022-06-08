#include<stdio.h>
#include<string.h>
 
// Driver Code
int main()
{
    // Substitute the full file path
    // for the string file_path
    FILE* fp = fopen("Testing.csv", "r");
 
    if (!fp)
        printf("Can't open file\n");
 
    else {
        // Here we have taken size of array 1024 you can modify it
        
        char buffer[1024];
 
        int row = 0;
        int column = 0;
 
        while (fgets(buffer, 1024, fp)) 
        {
            
           //printf("%s",buffer);

           char* value = strtok(buffer, ", ");
        
            while( value != NULL )
             {
                // Splitting the data
                //char* value = strtok(buffer, ", ");
 
 
                printf("%s \t", value);
                value = strtok(NULL, ", ");
            
             }
            printf("\n");
        
        }
 
        // Close the file
        fclose(fp);
    }
    return 0;
}