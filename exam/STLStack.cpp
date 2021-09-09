#include <stdio.h>
#include <stack>

using namespace std;
stack<int> s;

void push()
{
    int input;
    printf("INPUT : ");
    scanf("%d", &input);

    s.push(input);

    printf("%d PUSHED!\n", input);
    printf("\n");
}
void pop()
{
    if (true == s.empty())
    {
        printf("STACK IS EMPTY!\n");
        printf("\n");
    }
    else
    {
        printf("%d POPPED!\n", s.top());
        printf("\n");
        s.pop();
    }
}
int menu()
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