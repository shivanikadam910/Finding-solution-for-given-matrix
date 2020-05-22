
int forwardElim(float mat[number][number+1])
{
    for (int k=0; k<number; k++)
    {
        int iMax = k;
        int vMax = mat[iMax][k];


        for (int i = k+1; i < number; i++)
            if (abs(mat[i][k]) > vMax)
                vMax = mat[i][k], iMax = i;

        if (!mat[k][iMax])
            return k;


        if (iMax != k)
            swapRow(mat, k, iMax);


        for (int i=k+1; i<number; i++)
        {

            double f = mat[i][k]/mat[k][k];


            for (int j=k+1; j<=number; j++)
                mat[i][j] -= mat[k][j]*f;


            mat[i][k] = 0;
        }

        for (int i=0; i<number; i++, printf("\n"))
            for (int j=0; j<=number; j++)
                printf("%.1f ", mat[i][j]);

        printf("\n");
    }

    return -1;
}
