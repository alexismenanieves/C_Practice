#include<stdio.h>
#include<stdlib.h>

struct Results{
  int *A;
  int N;
};

struct Results solution(int A[], int N, int K){
  struct Results result;
  int *temp, i=0, j=0;
  // There are different behaviors for 0 size values of N
  // So be careful with "Implementation defined behavior"
  temp = (int*) malloc(N*sizeof(int));
  if(N==0){
    result.A = A;
    result.N = N;
    return result;
  }
  if(K>N){
    K = K % N;
  }
  // Start with the letters after the K value
  if(K<N && N != 0){
    for(i=N-K;i<N;i++){
      temp[j] = A[i];
      j = j + 1;
    }
    i = 0;
    // An continue with the letters before the K value
    while(i<N-K){
      temp[j] = A[i];
      i++;
      j++;
    }
  } else {
    temp = A;
  }
  result.A = temp;
  result.N = N;
  return result;
}

int main()
{
  int j[]={2,3,4,5,6,7,8};
  int mylen;
  int myk = 3;
  mylen = sizeof(j)/sizeof(j[0]);
  // This is new for me, create the variable (struct)
  struct Results results = solution(j, mylen, myk);
  for(int i = 0; i < mylen; i++)
    // And then print each character
    printf("%d", results.A[i]);
  free(results.A);
  printf("\n");
  return 0;
}