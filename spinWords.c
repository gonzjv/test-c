#include <stdio.h>
//  do not allocate memory for return string
//  assign the value to the pointer "result"

void spin_words(const char *sentence, char *result)
{
    result[0] = sentence[0];
    //  <----  hajime!
}

void main()
{
    printf("main starts HERE \n");

    // const int arr[] = {5, 8, 12, 19, 22};
    const char fewWords[] = "abcd";
    char res[5] = "qwert";

    spin_words(fewWords, res);

    printf("result is %s  \n", res);
    // printf("result is %d yeeee \n", num);
    printf("main finish HERE \n");
}