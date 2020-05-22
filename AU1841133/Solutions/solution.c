#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include"swapRow.h"
#include"forwardElim.h"
#include"backSub.h"
#include"gaussianElimination.h"
#include"print.h"
#include"rref.h"
#include"round_off.h"
#include"print_matrix.h"
#include"identity.h"
#include"print_null_space.h"
#include"get_matrix.h"

int main()
{
  int order=0;
  float mat[80][80];
  float identity[order][order];
  get_matrix(mat);
  rref(mat);
  print_matrix(mat);

  round_off(mat);
  print_matrix(mat);
  printf("Null Space:\n");
  print_null_space(mat);

  if(rank<col&&rank==row){
    printf("There are infinite number of solutions for rhs\n");
    exit(0);
  }
  else if(rank<row&&rank<col){
    printf("There are no solutions for rhs\n");
    exit(0);
  }
  else if(rank<row&& rank==col){
    printf("There is no solution or unique solution for rhs");
  }
  else if(rank<row && rank<col){
    printf("There is no solution or infinite solutions for rhs");
  }


  printf("Enter the number of rows : ");
  scanf("%d",&number);
int a,b;
  printf("Enter elements of augmented matrix:\n");
    float mat1[number][number+1];

  for(i=0;i<number;i++)
  {
  for(j=0;j<number+1;j++)
  {
    printf("Enter the %d,%d element : ",i+1,j+1);
    scanf("%f",&mat1[i][j]);
  }
  }

  printf("Your Matrix is :: \n");
  for(i=0;i<number;i++)
  {
  for(j=0;j<number+1;j++)
  {
    printf("%.1f\t",mat1[i][j]);
  }
  printf("\n");
}

    gaussianElimination(mat1);

    return 0;
}
