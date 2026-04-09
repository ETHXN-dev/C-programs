#include <stdio.h>

typedef struct {
  int nums[5];
  int front, back, count;
} QUEUE;

void enqueue(QUEUE *, int);
int dequeue(QUEUE *);

int main() {

  QUEUE sampleQueue = {{}, 0, 0, 0};

  enqueue(&sampleQueue, 1);
  enqueue(&sampleQueue, 2);
  enqueue(&sampleQueue, 3);
  enqueue(&sampleQueue, 4);
  enqueue(&sampleQueue, 5);

  dequeue(&sampleQueue);

  return 0;
}

void enqueue(QUEUE *queue, int key) {

  int size = sizeof(queue->nums) / sizeof(queue->nums[0]);

  if (queue->count == size) {
    printf("Error: cannot enqueue a full queue!\n");
    return;
  }

  queue->nums[queue->back] = key;
  queue->count++;

  queue->back = (queue->back + 1) % size;
}

int dequeue(QUEUE *queue) {
  int size = sizeof(queue->nums) / sizeof(queue->nums[0]);

  if (queue->count == 0) {
    printf("Error: cannot dequeue an empty queue!\n");
    return 0;
  }

  int frontNumber = queue->nums[queue->front];

  queue->front = (queue->front + 1) % size;

  queue->count--;

  return frontNumber;
}
