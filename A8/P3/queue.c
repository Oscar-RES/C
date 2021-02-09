/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	// check for a full queue
    if(queue_is_full(pq)==1)
        return -1;
    //check for an empty queue
    Node *newelem;
    newelem = (Node*) malloc(sizeof(Node));
    if(newelem == NULL){
        return 1;
    }
    //setting item to the newnode
    newelem->item = item;
    newelem->next = NULL; 
    //if the queue is empty, the head will be the new element
    if(queue_is_full(pq)== 1){
        pq->front = newelem;
    }
    //making front and rear on the same node in case there is one element
    if(pq->items == 0){
        pq->front = newelem;
        pq->rear = newelem;
    } else{
        //if there's a tail, make the next of that tail the newelem
        pq-> rear-> next = newelem;
        //the tail is now the newelem
        pq->rear = newelem;
    }
    //move to next 
    pq->items++;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	//first, we save the head of the queue
    Node* newnode;
    //now we check that the queue isn't empty
    if(queue_is_empty(pq) == 1){
        return 0;
    }
    //delete the item
    *pitem = pq->front->item;
    newnode = pq->front;
    pq->front = pq->front->next;
    free(newnode);
        
    //decrease the item count
     pq->items--;
    if(pq->front == 0)
        pq->rear = NULL;
       return 1;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq(Queue *pq){
    printf("content of the queue: ");
    //loop keeps going as long as the cursor isn't null, cursor points to head first
    for(Node *cursor = pq->front; cursor != NULL;cursor = cursor -> next){
        printf("%d ",cursor->item);
    }
    printf("\n");
}