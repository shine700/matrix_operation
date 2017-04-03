/******
    MATRIX OPRATION
    name : shine
    date : 3-4-17
    *******/

#include<stdio.h>
#include<stdlib.h>

void additionOfMatrix();
void subtractionOfMatrix();
void multiplicationOfMatrix();
void inverseOfMatrix();

int main()
{
    int choice;
    printf("\n\t\t\t\t \\\\======== MATRIX OPERATION'S ========// \n");
    printf("\n\t 1. Addition ");
    printf("\t 2. Subtraction ");
    printf("\t 3. Multiplication ");
    printf("\t 4. Inverse \n\n");

    printf("\n Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        additionOfMatrix();
        break;
    }

    /** this program is under construction **/
}

/** Operation Functions **/

// Addition

void additionOfMatrix()
{
    printf("\n\t\t =----== MATRIX ADDITION ==----= \n\n");
    int choice;
    printf("\n How many matrix you want to calculate \n\t 1. 2-Matrices 2. 3-Matrices  \n");
    printf("\n Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\n\t =--Addition of two matrices--= \n");
        additionTwoMatrix();
        break;
    case 2:
        printf("\n\t =--Addition of three matrices--= \n");
        additionThreeMatrix();
        break;
    }

}

int additionTwoMatrix()
{
    int row, column;
    int m, n;
    printf("\n Enter your Matrix row(m) and column(n) \n");
    printf("\n m : n = ");
    scanf("%d %d",&m,&n);

    int mat01[m][n];
    int mat02[m][n];

    printf("\n Enter 1st Matrix value \n");
    for(row=0; row<m; row++)
    {
        for(column=0; column<n; column++)
        {
            scanf("%d", &mat01[row][column]);
        }
        printf("\n");
    }

    printf("\n Enter 2nd Matrix value \n");
    for(row=0; row<m; row++)
    {
        for(column=0; column<n; column++)
        {
            scanf("%d", &mat02[row][column]);
        }
        printf("\n");
    }
    printf("\n =--Sum of two matrices--= \n");
    for(row=0; row<m; row++)
    {
        for(column=0; column<n; column++)
        {
            printf(" %2d", mat01[row][column]+mat02[row][column]);
        }
        printf("\n");
    }

    return;
}

int additionThreeMatrix()
{

}
