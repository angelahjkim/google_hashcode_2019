#include "header.h"

void    file_read()
{
    int num;
    char let;
    char *str;
    FILE *fptr;
    
    if ((fptr = fopen("~Downloads:\\a_example.txt","r")) == NULL)
     {
       printf("Error! opening file");
       exit(1);
     }
    if ((fptr = fopen("~Downloads:\\b_lovely_landscapes.txt","r")) == NULL)
     {
       printf("Error! opening file");
       exit(1);
     }
     if ((fptr = fopen("~Downloads:\\c_memorable_moments.txt","r")) == NULL)
     {
       printf("Error! opening file");
       exit(1);
     }
     if ((fptr = fopen("~Downloads:\\d_pet_pictures.txt","r")) == NULL)
     {
       printf("Error! opening file");
       exit(1);
     }
     if ((fptr = fopen("~Downloads:\\e_shiny_selfies.txt","r")) == NULL)
     {
       printf("Error! opening file");
       exit(1);
     }
     
     fscanf(fptr,"%c","%d","%s", &let,&num,&str);
     printf("Value of n=%c,%d,%s", let, num, str);
     fclose(fptr); 
  
       
}
 void    fill_slides(void)
{
    char text[50];
    char line[5];
    FILE *file;
    file = fopen("a_example.txt", "r");
    if (file == NULL)
    {
        printf("ERROR with FILE");
    }
    else 
    {
        fclose(file);
        return (0);
    }
    printf("file loaded");

    fscanf (file, "%s", text);
    printf(text);
    fclose("a_example.txt");

}