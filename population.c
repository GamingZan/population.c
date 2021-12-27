#include <cs50.h>
#include <stdio.h>
int main(void)
{ 
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Choose a starting population greater than 9: ");
       
        }
        
        while (start < 9);
       
        printf("Start size: %i\n", start);
   
    // TODO: Prompt for end size
    int end;
    do 
    {
        end = get_int("Choose a ending population greater than your starting size: ");
       
     }
       
        while (start > end);
       
        printf("End size: %i\n", end);
  
    // TODO: Calculate number of years until we reach threshold
    int Years = 0;
    do
    {
        start = start + (start / 3) - (start / 4);
        Years++;
      
        } 
       
        while (start < end);
    // TODO: Print number of years
    printf("Years: %i\n", Years);
    
    
}