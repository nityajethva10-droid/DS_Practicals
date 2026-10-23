#include <stdio.h>
#include <stdlib.h>

int main()
{
    int queue[10], front = 0, rear = 0, ch, no, i, n = 10;
    clrscr();
    while (1)
    {
        printf("Queue Operation \n");
        printf("\n 1. insertion \n 2. deletion \n 3. display \n 4. exit");
        printf("\n Enter choice");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                if (rear == n - 1)
                {
                    printf("Queue is Full ");
                }
                else
                {
                    printf("Enter no:");
                    scanf("%d", &no);
                    queue[rear] = no;
                    rear = rear + 1;
                }
                break;
            case 2:
                if (front == rear)
                {
                    printf("Queue is empty");
                }
                else
                {
                    int del;
                    del = queue[front];
                    printf("Delete : %d", del);
                    front = front + 1;
                }
                break;
            case 3:
                if (front == rear)
                {
                    printf("Queue is empty ");
                }
                else
                {
                    for (i = front; i < rear; i++)
                    {
                        printf("ele = %d", queue[i]);
                    }
                }
                break;
            case 4:
                exit(0);
            default:
                printf("invalid");
        }
    }
    getch();
    return 0;
}
