#include <stdio.h>
#include <stdlib.h>
 
#define MAX 10
 
void shell_sort(int *a, int size);
 
int main(int argc, char** argv)
{
 int i, vet[MAX];
 
 for(i = 0; i < MAX; i++)
 {
  printf("Digite um valor: ");
  scanf("%d", &vet[i]);
 }
 
 shell_sort(vet, MAX);
 
 printf("Valores ordenados \n");
 for(i = 0; i < MAX; i++)
 {
  printf("%d ", vet[i]);
 }
 system("pause");
 return 0;
}
 
void shell_sort(int *a, int size)
{
 int i , j , value;
 int gap = 1;
  
 do {
  gap = 3*gap+1;
 } while(gap < size);
  
 do {
  gap /= 3;
  for(i = gap; i < size; i++) {
   value = a[i];
   j = i - gap;
    
   while (j >= 0 && value < a[j]) {
    a[j + gap] = a[j];
    j -= gap;
   }
   a[j + gap] = value;
  }
 }while(gap > 1);
}