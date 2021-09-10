#include <stdio.h>
#include <queue>

using namespace std;
queue<int> q;

void push()
{
    int input;
    printf("INPUT : ");
    scanf("%d", &input);

    q.push(input);

    printf("%d PUSHED!\n", input);
    printf("\n");
}
void pop()
{
    if (true == q.empty())
    {
        printf("QUEUE IS EMPTY!\n");

        printf("\n");
    }
    else
    {
        printf("%d POPPED!\n", q.back());
        printf("\n");

        int size = q.size();

        int array[size];

        for (int i = 0; i < size; i++)
        {
            array[i] = q.front();
            q.pop();
        }
        for (int i = 0; i < size - 1; i++)
        {
            q.push(array[i]);
        }
    }
}
void menu()
{
    int intNum;
    bool isExit = true;

    while (isExit)
    {
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. QUIT\n");

        scanf("%d", &intNum);

        switch (intNum)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("QUIT!\n");
            isExit = false;
            break;
        }
    }
}
int main(int argc, char *argv[])
{

    menu();

    return 0;
}