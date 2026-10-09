#include<stdio.h>
#define Size 5
int Q[Size];
int F = -1,R = -1;
void Enqueue(int x){
  if(R == Size - 1){
    printf("Queue is full\n");
  }
  else{
      if(F == -1)
          F = 0;

      R = R + 1;
      Q[R] = x;
      printf("Inserted: %d\n",x);
      
  }
}
void Dequeue(void){
  if(F == -1){
    printf("Q is empty\n");
  } 
  else{
    printf("Deleted element is %d",Q[F]);
    F = F + 1;

      if(F>R)
          F = R = -1;
  }
}
int main(void){
  Enqueue(10);
  Enqueue(20);
  Enqueue(30);
  Enqueue(40);
  Enqueue(50);
  Dequeue();
  Dequeue();
  Enqueue(25);

    return 0;
  
}
