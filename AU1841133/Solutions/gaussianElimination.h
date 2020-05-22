void gaussianElimination(float mat[number][number+1])
{

    int flag =  forwardElim(mat);


    if (flag != -1)
    {
        printf("Singular Matrix.\n");

        if (mat[flag][number]!=0)
            printf("Inconsistent System.");
        else
            printf("May have infinitely many solutions.");

        return;
    }


    backSub(mat);
}
