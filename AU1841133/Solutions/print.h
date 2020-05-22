void print(float mat[number][number+1])
{
    for (int i=0; i<number; i++, printf("\n"))
        for (int j=0; j<=number; j++)
            printf("%.1f ", mat[i][j]);

    printf("\n");
}
