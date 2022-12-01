#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

#define WORD_SIZE 26

int nodeID = 0;

typedef struct node
{
    int id;
    char printObject[WORD_SIZE];
    struct node *next;

} NODE;

typedef struct queue
{
    NODE *front;
    NODE *rear;

} QUEUE;

QUEUE *createQueue()
{
    QUEUE *queue = (QUEUE *)malloc(sizeof(QUEUE) * 1);
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

NODE *newNode()
{
    NODE *node = (NODE *)malloc(sizeof(NODE) * 1);
    node->id = nodeID;
    nodeID++;
    printf("Please enter the object will be printed: ");
    scanf("%s", node->printObject);
    node->next = NULL;

    return node;
}

void enqueue(QUEUE *queue)
{
    NODE *node = newNode();

    if (queue->rear == NULL)
    {
        queue->front = node;
        queue->rear = node;
        // printf("%p", node->next);
    }

    queue->rear->next = node;
    queue->rear = node;
}

void dequeue(QUEUE *queue)
{
    if (queue->front == NULL)
    {
        printf("Queue is already empty.\n");
        return;
    }

    if (queue->front->next == NULL)
    {
        free(queue->front);
        queue->front = NULL;
        queue->rear = NULL;
    }
    else
    {
        NODE *tmpNode = queue->front;
        queue->front = queue->front->next;
        int i;
        printf("\n\nPrinting......\n");
        for (i = 0; i < strlen(tmpNode->printObject); i++)
        {
            printf("%c\n", tmpNode->printObject[i]);
            sleep(1);
        }
        printf("\n");

        free(tmpNode);
    }
    return;
}

void show(QUEUE *queue)
{
    if (queue->front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    NODE *node = queue->front;
    // printf("%p", node->next);
    sleep(1);
    while (node->next != NULL)
    {
        printf("ID: %d, Print Object: %s\n", node->id, node->printObject);
        node = node->next;
    }
    printf("ID: %d, Print Object: %s\n", node->id, node->printObject);
}

int main()
{
    QUEUE *queue = createQueue();

    while (1)
    {
        int choice;
        printf("1- Add New Print Order\n2- Print The Current Order\n3- Show the print orders\n4- Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue(queue);
            break;
        case 2:
            dequeue(queue);
            break;
        case 3:
            show(queue);
            break;
        case 4:
            free(queue);
            return 0;
            break;
        default:
            printf("Some problem occured with your entry please enter again.");
            break;
        }
    }
}
