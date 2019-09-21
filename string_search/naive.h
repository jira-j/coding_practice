int naive_search(char input_str[], char search_str[]){
  for(size_t i = 0; input_str[i]!='\0'; i++){
    if(input_str[i] == search_str[0]){
      size_t j;
      for(j=0; search_str[j]!='\0' && input_str[i+j]!='\0'; j++){
	if(input_str[i+j] != search_str[j]){
	  break;
	}
      }
      if(search_str[j]=='\0'){
	return i;
      }
    }
  }

  return -1;
}
