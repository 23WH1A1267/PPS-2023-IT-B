# include <stdio.h>

void main()
{
int mat[10][10] ;
int i, j, row, col, small ;
printf("Enter the order of the matrix : ") ;
scanf("%d %d", &row, &col) ;
printf("\nEnter the elements of the matrix : \n\n") ;
for(i = 0 ; i < row ; i++)
  for(j = 0 ; j < col ; j++)
    scanf("%d", &mat[i][j]) ;
small = mat[0][0] ;
for(i = 0 ; i < row ; i++){
  for(j = 0 ; j < col ; j++){
    if(mat[i][j] < small)
      small = mat[i][j] ;
  }
}
printf("\nThe smallest element in the matrix is : %d\n\n",small);
}
