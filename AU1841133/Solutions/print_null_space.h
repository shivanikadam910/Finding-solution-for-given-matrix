void print_null_space(float mat[80][80]){
for(k=0;k<col;k++){
  if(mat[k][k]!=0){
    rank++;
  }
}
  printf("rank is :- %d \n",rank);
if(rank==col){
  printf("Null space only contain Zero\n");
}

for(i=0;i<rank;i++)
{
  for(j=rank;j<col;j++)
  {
    null_matrix_F[i][j]=-mat[i][j];
  }
}
for(i=0;i<rank;i++)
{
  for(j=rank;j<col;j++)
  {
    printf("%.1f\t",null_matrix_F[i][j]);
  }
  printf("\n");
}
identity((col-rank),identity);
}
