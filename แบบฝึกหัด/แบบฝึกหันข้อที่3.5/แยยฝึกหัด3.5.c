#include <stdio.h>

void main() {
  int i, n = 0;
  int t = 1;
  int shot = 0;
  int mark = 1;
  int scan[15], scancopy[15], scanint[15];

  printf("Enter the maximum array : ");
  scanf("%d", & n);
  printf("Your array is : %d\n", n);
  //input
  for (i = 0; i <= n - 1; i++) {
    printf("\nEnter the number - %d : ", i + 1);
    scanf("%d", & scan[i]);
    printf("Your number is : %d\n", scan[i]);
    scancopy[i] = scan[i];
    //printf("Debug : %d\n", countclone[i]);//<--debug
  }

  //process
  printf("\nYour array is have \n");
  for (i = 0; i < n; i++) {
    for (t = i + 1; t < n; ++t) {
      if (scancopy[i] > scancopy[t]) {
        shot = scancopy[i];
        scancopy[i] = scancopy[t];
        scancopy[t] = shot;
      }
    }
  }
  t = 1;
  for (i = 0; i < n; i++) {
    scanint[i] = t;
    for (t = 0; t < n; t++) {

      if (scancopy[i] == scancopy[t]) {
        scanint[i] = mark++;
      }
    }
    mark = 1; 
    if(scancopy[i] != scancopy[i-1])
    {
      printf("\n%d -> %d ", scancopy[i], scanint[i]);
    }
  }
}