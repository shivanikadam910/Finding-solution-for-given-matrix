void identity(int order,float identity[order][order]){
  for (row = 0; row < order; row++)
      {
          for (col = 0; col < order; col++)
          {
              if (row == col)
                  printf("%.1f\t", 1.0);
              else
                  printf("%.1f\t", 0.0);
          }
          printf("\n");
      }
      return;
}
