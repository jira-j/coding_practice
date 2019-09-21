#include<stdio.h>
#include"naive.h"

int main(){
  char input_str[] = "We provide Blueoil in the form of docker image";
  char search_str[] = "Blueoil";

  int naive_result = naive_search(input_str, search_str);
  if(naive_result!=1){
    printf("Naive algorithm found string \n\t\"%s\" in \n\t\"%s\" \n at index %d\n", search_str, input_str, naive_result);
  }else{
    printf("Naive algorithm did not find string \n\t\"%s\" in \n\t\"%s\"\n", search_str, input_str);
  }
  return 0;
}
