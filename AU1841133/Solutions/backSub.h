void backSub(float mat[number][number+1])
{
    float x[number];

    for (int i = number-1; i >= 0; i--)
    {

        x[i] = mat[i][number];


        for (int j=i+1; j<number; j++)
        {

            x[i] -= mat[i][j]*x[j];
        }


        x[i] = x[i]/mat[i][i];
    }

    printf("\nUnique Solution for the system:\n");
    for (int i=0; i<number; i++)
        printf("%.1f\n", x[i]);
}
