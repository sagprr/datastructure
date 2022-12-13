#include <stdio.h>
#include <stdlib.h>

void Enque(int[], int, int *, int *, int);
int Dequeue(int[], int, int *, int *);
void display(int[], int, int, int);

int main()
{
  int N, x;
  printf("enter the capacity of Circular queue: ");
  scanf("%d", &N);
  int Q[N], front = -1, rear = -1;

  printf("enter the value to be enqueued\n");
  scanf("%d", &x);
  Enque(Q, N, &front, &rear, x);

  printf("enter the value to be enqueued\n");
  scanf("%d", &x);
  Enque(Q, N, &front, &rear, x);

  printf("enter the value to be enqueued\n");
  scanf("%d", &x);
  Enque(Q, N, &front, &rear, x);

  printf("enter the value to be enqueued\n");
  scanf("%d", &x);
  Enque(Q, N, &front, &rear, x);

   display(Q, front, rear, N);

  x = Dequeue(Q, N, &front, &rear);
  printf("Value deleted is %d\n", x);

  x = Dequeue(Q, N, &front, &rear);
  printf("Value deleted is %d\n", x);

  x = Dequeue(Q, N, &front, &rear);
  printf("Value deleted is %d\n", x);

  display(Q, front, rear, N);

  printf("enter the value to be enqueued\n");
  scanf("%d", &x);
  Enque(Q, N, &front, &rear, x);

  printf("enter the value to be enqueued\n");
  scanf("%d", &x);
  Enque(Q, N, &front, &rear, x);

  printf("enter the value to be enqueued\n");
  scanf("%d", &x);
  Enque(Q, N, &front, &rear, x);


  display(Q, front, rear, N);

  return 0;
}
void Enque(int Q[], int N, int *f, int *r, int x)
{
  if (((*r) + 1) % N == (*f))
  {
    printf("Queue overflow\n");
    exit(1);
  }
  else
  {
    if ((*f) == -1)
    {
      (*f)++;
      (*r)++;
      Q[*r] = x;
    }
    else
    {
      (*r) = ((*r) + 1) % N;
      Q[*r] = x;
    }
  }



}
