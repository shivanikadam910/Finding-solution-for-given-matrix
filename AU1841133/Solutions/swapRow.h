int number,flag=0;
int i=0,j=0;
void swapRow(float mat[number][number+1], int i, int j)
{

    for (int k=0; k<=number; k++)
    {
        double temp = mat[i][k];
        mat[i][k] = mat[j][k];
        mat[j][k] = temp;
    }
}
