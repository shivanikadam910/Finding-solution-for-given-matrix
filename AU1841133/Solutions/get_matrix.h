int i,j,k,row,col,str,count,rank;
float tem;
void get_matrix(float mat[80][80]){
printf("Enter the number of rows : ");
scanf("%d",&row);
printf("Enter the number of columns : ");
scanf("%d",&col);
float arr_var[col];
// Taking Inputs
for(i=0;i<row;i++)
{
  for(j=0;j<col;j++)
  {
    printf("Enter the %d,%d element : ",i+1,j+1);
    scanf("%f",&mat[i][j]);
  }
}

printf("Your Matrix is :: \n");
for(i=0;i<row;i++)
{
  for(j=0;j<col;j++)
  {
    printf("%.1f\t",mat[i][j]);
  }
  printf("\n");
}
}
