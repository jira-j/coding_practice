#include<stdio.h>

size_t cal_num_ij(int arr[], size_t len){
  if(len==1){
    return 0;
  }
  size_t num = 0;
  
  for(size_t i=0; i<len-1; i++){
    
    if(arr[i] > arr[len-1]){
      num += 1;
    }
  }
  
  return num + cal_num_ij(arr, len-1);
}

int main(){
  int arr[] = {5, 2, 6, 4, 1, 8, 3};
  size_t len = 7;

  size_t num_ij = cal_num_ij(arr, len);
  printf("num_ij of array [");
  for(size_t i=0; i<len; i++){
    printf("%d ", arr[i]);
  }
  printf("] is %zu\n", num_ij);
  return 0;
}
