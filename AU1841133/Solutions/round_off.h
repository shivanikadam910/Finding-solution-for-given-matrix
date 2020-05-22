void round_off(float mat[80][80]){
	for(a=0;a<row;a++)
	{
		for(b=0;b<col;b++)
		{
			mat[a][b] = round(mat[a][b]);
		}
	}

}
