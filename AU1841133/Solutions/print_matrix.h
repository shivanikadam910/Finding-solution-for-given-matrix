void print_matrix(float mat[80][80]){
	// Printing Each Step
	printf("\n**************************\n");
	if(i==row-1)
		printf("Row Echelon form is : \n\n");
	else
		printf("Step %d\n\n",k+1);
	for(a=0;a<row;a++)
	{
		for(b=0;b<col;b++)
		{
			if(mat[a][b]==-0.0){
				mat[a][b]=0.0;
			}
			printf("%.1f\t",mat[a][b]);
		}
		printf("\n");

	}
		printf("%d",rank);
}
