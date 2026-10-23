#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 4

int top = -1, inp_array[SIZE];
void Push();
void POP();
void Peep();
void change();
void show();

int main()
{
    int choice;
    while (1)
    {
        printf("\n Perform operations on the stack:");
        printf("\n 1. Push the element \n 2. Pop the element \n 3. Peep the element \n 4. Change the element \n 5. Show \n 6. End ");
        printf("\n Enter choice :");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: Push(); break;
            case 2: POP(); break;
            case 3: Peep(); break;
            case 4: change(); break;
            case 5: show(); break;
            case 6: exit(0);
            default: printf("\n Invalid choice !!");
        }
    }
    return 0;
}

void Push()
{
    int x;
    if (top == SIZE - 1)
    {
        printf("\n overflow !!");
    }
    else
    {
        printf("\n Enter the element to be added on the stack:");
        scanf("%d", &x);
        top = top + 1;
        inp_array[top] = x;
    }
}

void POP()
{
    if (top == -1)
    {
        printf("\n underflow!!");
    }
    else
    {
        printf("\n Popped element : %d", inp_array[top]);
        top = top - 1;
    }
}

void Peep()
{
    printf("\n at TOP : %d", top);
    printf("\n It value: %d", inp_array[top]);
}

void change()
{
    int v1, v2;
    printf("\n Enter Position for change:");
    scanf("%d", &v1);
    printf("\n Enter the Number for change:");
    scanf("%d", &v2);
    if (top - v1 <= -1)
    {
        printf("\n Stack is overflow !!");
    }
    else
    {
        inp_array[top - v1] = v2;
        printf("\n Change Successfull !!");
    }
}

void show()
{
    if (top == -1)
    {
        printf("\n Underflow !!");
    }
    else
    {
        printf("\n Elements present in the stack :");
        for (int i = top; i >= 0; --i)
        {
            printf("\n %d", inp_array[i]);
        }
    }
}
