#include <stdio.h>
#include <string.h>
//  do not allocate memory for return string
//  assign the value to the pointer "result"

void spin_words(const char *sentence, char *result)
{
    // result[0] = sentence[0];
    char *token = strtok(sentence, " ");
    char *tail, h, t;
    printf("sentence init %s\n", sentence);
    while (token != NULL)
    {
        printf("token at top %s\n", token);

        tail = token;
        // printf("tail %s\n", tail);
        while (*tail)
            ++tail;
        --tail;

        while (token < tail)
        {

            h = *token;
            t = *tail;
            *token = t;
            *tail = h;

            printf("tail inside %c\n", *tail);
            printf("token inside %c\n", *token);
            printf("sentence inside %s\n", sentence);

            ++token;
            --tail;
            /* code */
        }

        token = strtok(NULL, " ");
        printf("token bottom %s\n", token);
    }
    printf("after %s\n", sentence);
}

void main()
{
    printf("main starts HERE \n");

    // const int arr[] = {5, 8, 12, 19, 22};
    char fewWords[] = "seven eight nine";
    char res[128];

    spin_words(fewWords, res);

    printf("words after %s\n", fewWords);
    // printf("result is %s  \n", res);
    // printf("result is %d yeeee \n", num);
    printf("main finish HERE \n");
}