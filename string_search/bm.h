int bm_search(char input_str[]){
  char search_str[] = "abcabd";
  size_t str_len = 6;
  size_t skip_dict[] = {2, 1, 3, 0}; // skip['a'], skip['b'], skip['c'], and skip['d']
  size_t skip = 0;
  
  for(size_t i=0; input_str[i+str_len-1]!='\0'; i+=skip){
    size_t j = str_len-1;
    while(j>=0){
      if(input_str[i+j]!=search_str[j]){
	break;
      }
      if(j==0){
	return i;
      }
      j--;
    }

    int index = input_str[i+j] - 'a';
    if(index > 4){
      skip = 6;
    }else{
      skip = skip_dict[index];
    }
  }
  
  return -1;
}
