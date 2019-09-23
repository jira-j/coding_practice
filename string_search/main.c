#include<stdio.h>
#include"naive.h"
#include"kmp.h"
#include"bm.h"

int main(){
  char input_str1[] = "We provide Blueoil in the form of docker image";
  char search_str[] = "Blueoil";

  int naive_result = naive_search(input_str1, search_str);
  if(naive_result!=1){
    printf("Naive algorithm found string \n\t\"%s\" in \n\t\"%s\" \n at index %d\n", search_str, input_str1, naive_result);
  }else{
    printf("Naive algorithm did not find string \n\t\"%s\" in \n\t\"%s\"\n", search_str, input_str1);
  }

  int kmp_result = kmp_search(input_str1);
  if(kmp_result==1){
    printf("KMP algorithm found string \n\t\"abcabd\" in \n\t\"%s\"\n", input_str1);
  }else{
    printf("KMP algorithm did not find string \n\t\"abcabd\" in \n\t\"%s\"\n", input_str1);
  }

  char input_str2[] = "abababdabcababcabd";
  kmp_result = kmp_search(input_str2);
  if(kmp_result==1){
    printf("KMP algorithm found string \n\t\"abcabd\" in \n\t\"%s\"\n", input_str2);
  }else{
    printf("KMP algorithm did not find string \n\t\"abcabd\" in \n\t\"%s\"\n", input_str2);
  }

  int bm_result = bm_search(input_str2);
  if(bm_result!=-1){
    printf("BM algorithm found string \n\t\"abcabd\" in \n\t\"%s\" \n at index %d\n", input_str2, bm_result);
  }else{
    printf("BM algorithm did not find string \n\t\"abcabd\" in \n\t\"%s\"\n", input_str2);
  }

  return 0;
}
