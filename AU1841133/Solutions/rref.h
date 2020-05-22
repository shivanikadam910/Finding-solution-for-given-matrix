int str,count;
int row=0,col=0,rank=0,r=0,c=0,d=0;
int k=0,a=0,b=0,ex1=0,ex2=0,nullity=0;
float tem=0.0;
float null_matrix_F[80][80];
void rref(float mat[80][80]){
for(k=0;k<row;k++)
{
  if((mat[k][k]==0)){
    //int b=k;
for( i=0;i<row;i++)	{
    if(mat[i][k]==1){
    str=i;
    count++;
    }
    else

    continue;
  }

   if(count>0)
   {

    for(i=0;i<col;i++){
  float temp=mat[k][i];
  mat[k][i]=mat[str][i];
  mat[str][i]=temp;


}
      printf("the swapped matrix is :");
printf("\n");
   for(i=0;i<row;i++)
   {
  for(j=0;j<col;j++)
     {
      printf("%.1f\t",mat[i][j]);
     }
  printf("\n");
    }
   }

}
  if(mat[k][k]==0 && count==0){
      for(i=0;i<col;i++){
  float temp=mat[k+1][i];
  mat[k+1][i]=mat[k][i];
  mat[k][i]=temp;

}
printf("the swapped matrix is :");
printf("\n");
   for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
    {
      printf("%.1f\t",mat[i][j]);
    }
  printf("\n");
    }
   }
  if( (mat[k][k]) != 1)
  {
    float temp = mat[k][k];
    if(temp == 0)
      continue; // Avoiding division by zero
    for(j=0;j<col;j++)
    {
      mat[k][j] = ( (mat[k][j]) / temp );

    }
  }

  for(i=k+1;i<row;i++)
  {
    tem = mat[i][k];
    for(j=k;j<col;j++)
      {
        mat[i][j] = mat[i][j] - ( mat[k][j] * tem );


      }
  }
  if(k>0){
    for(i=k-1;i>-1;i--)
  {
    tem = mat[i][k];
    for(j=k;j<col;j++)
      {

        mat[i][j] = mat[i][j] - ( mat[k][j] * tem );

      }
  }
  }
}
}
