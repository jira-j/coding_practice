int kmp_search(char input_str[]){
  char search_str[] = "abcabd";
  size_t lps[] = {0, 0, 0, 1, 2, 0};
  size_t j=0;
  for(size_t i=0; input_str[i]!='\0'; i++){
    if(input_str[i] == search_str[j]){
      j += 1;
      if(search_str[j] == '\0'){
	return 1;
      }
    }else if(lps[j] != 0){
	j = lps[j];
	i -= 1;
    }
  }
  
  return 0;
}
