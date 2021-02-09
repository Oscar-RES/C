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
	// add missing stuff
        return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}