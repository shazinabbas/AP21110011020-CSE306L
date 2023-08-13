#include <stdio.h>
#define MAX_LENGTH 100

int main()
{
    char acceptedMessage[] = "String is accepted";
    char notAcceptedMessage[] = "String is not accepted";
    char inputString[MAX_LENGTH], currentState = 'a';
    scanf("%s", inputString);
    int i;

    for (i = 0; inputString[i] != '\0'; i++)
    {
        switch (currentState)
        {
        case 'a':
            if (inputString[i] == '0')
                currentState = 'b';
            else if (inputString[i] == '1')
                currentState = 'd';
            break;
        case 'b':
            if (inputString[i] == '1')
                currentState = 'd';
            else if (inputString[i] == '0')
                currentState = 'c';
            break;
        case 'c':
            if (inputString[i] == '0')
                currentState = 'c';
            else if (inputString[i] == '1')
                currentState = 'd';
            break;
        case 'd':
            if (inputString[i] == '0')
                currentState = 'b';
            else if (inputString[i] == '1')
                currentState = 'e';
            break;
        case 'e':
            if (inputString[i] == '0')
                currentState = 'b';
            else if (inputString[i] == '1')
                currentState = 'e';
            break;
        }
    }

    if (currentState == 'e' || currentState == 'c')
        printf("%s", acceptedMessage);
    else
        printf("%s", notAcceptedMessage);

    return 0;
}
