#include<stdio.h>

void find_path_sub(int maze[4][4], int path[4][4], size_t i, size_t j){
  path[i][j] = 1;
  if(i==3 && j==3){
    // reach goal
    return;
  }

  if(maze[i+1][j] == 1){
    find_path_sub(maze, path, i+1, j);
  }
  if(maze[i][j+1] == 1){
    find_path_sub(maze, path, i, j+1); 
  }
}

void find_path(int maze[4][4], int path[4][4]){
  find_path_sub(maze, path, 0, 0);
}

int main(){
  int maze[4][4] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {0, 1, 0, 0}, {1, 1, 1, 1}};
  int path[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

  find_path(maze, path);
  printf("Solutiuon of this maze \n");
  for(size_t i=0; i<4; i++){
    for(size_t j=0; j<4; j++){
      printf("%d ", maze[i][j]);
    }
    printf("\n");
  }

  printf("\nis this path \n");
  for(size_t i=0; i<4; i++){
    for(size_t j=0; j<4; j++){
      printf("%d ", path[i][j]);
    }
    printf("\n");
  }
  return 0;
}
