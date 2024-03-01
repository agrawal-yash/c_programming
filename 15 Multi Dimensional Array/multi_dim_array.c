#include<stdio.h>
int main(){
int m, n, p, q, i, j, k, sum= 0;
int first[10][10], second[10][10], multiply[10][10];

printf("Enter the rows & columns of first Matrix: \n");
scanf("%d%d", &m, &n);
printf("Enter elements of first matrix: \n");
for(i = 0; i< m; i++){
for (j = 0; j<n;j++){
scanf("%d",&first[i][j]);
}}
printf("Enter the rows & columns of second Matrix: \n");
scanf("%d%d", &p, &q);
if(n != p){
printf("Multiplication is not possible!!!\n");
} else {
printf("Enter elements of second matrix: \n");
for(i = 0; i< m; i++){
for (j = 0; j<n; j++){
scanf("%d",&second[i][j]);
}}
}

/* Multiplication code:*/

for (i = 0; i<m; i++){
for(j = 0; j<q; j++){
for(k=0; k<p;k++){

sum = sum + first[i][k]*second[k][j];
}
multiply[i][j] = sum;
sum = 0;
}
}

/* Print Matrix */
printf("Matrix after multiplication is : \n");
for(i = 0; i<m; i++){
for(j = 0;j<n; j++){
printf("%d\t", multiply[i][j]);
}
printf("\n");
}
return 0;
}


