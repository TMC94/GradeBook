#include <stdio.h>
#include <stdlib.h>

#define MAX_GRADES 5

//Prototypes go here:
void assignShowGrade( float grades[MAX_GRADES] );
char getLetterGrade(float grade);

//Function blueprints go here:

void assignShowGrade(float grades[MAX_GRADES])
{

    /*
    Iterate through the scores and
    determine the associated letter grade
    for the specified range below.
    */

    //Guide us through the array index location

    int i = 0;

    for ( i = 0; i < MAX_GRADES; i++)
    {
        char c = getLetterGrade(grades[i]);

        // 99.7 = A
        printf("%.2f = %c\n", grades[i], c);
    }

}

char getLetterGrade(float grade)
{
    char g;
    if (grade >= 90.F)
    {
        g = 'A';
    }
    else if (grade >= 80.F && grade <= 89.9F)
    {
        g = 'B';
    }
    else if (grade >= 70.F && grade <= 79.9F)
    {
         g = 'C';
    }
    else if (grade >= 60.F && grade <= 69.9F)
    {
        g = 'D';
    }
    else
    {
        g = 'F';
    }

    return g;

}


