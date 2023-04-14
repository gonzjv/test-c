#include <stdio.h>
#include <string.h>
//  do not allocate memory for return string
//  assign the value to the pointer "result"

void spin_words(const char *sentence, char *result)
{
    char *token = strtok(sentence, " ");
    char *tail, SPACE = ' ';
    result[0] = '\0';
    // memset(result, 0, sizeof(result));

    while (token != NULL)
    {
        printf("token at top %s\n", token);

        if (strlen(token) < 5)
        {
            strcat(result, token);
            strncat(result, &SPACE, 1);
        }
        else
        {

            tail = token;
            while (*tail)
                ++tail;
            --tail;

            while (token <= tail)
            {
                strncat(result, tail, 1);
                token == tail && (strncat(result, &SPACE, 1));

                // printf("tail inside %s\n", tail);
                // printf("result inside %s\n", result);
                --tail;
            }
        }

        token = strtok(NULL, " ");
        // printf("token bottom %s\n", token);
        // printf("result at bottom %s\n", result);
    }
    result[strlen(result) - 1] = '\0';
    // printf("after %s\n", sentence);
}

void main()
{
    printf("main starts HERE \n");

    // const int arr[] = {5, 8, 12, 19, 22};
    char fewWords[] = "seven";
    char fewWords2[] = "seven qwerty asdfgh";
    char fewWords3[] = "hi fellow. How are you?";
    char res[128];

    spin_words(fewWords, res);
    spin_words(fewWords2, res);
    spin_words(fewWords3, res);

    // printf("words after %s\n", fewWords);
    printf("%s\n", "------");
    printf("res after _%s_\n", res);
    // printf("result is %s  \n", res);
    // printf("result is %d yeeee \n", num);
    printf("main finish HERE \n");
}