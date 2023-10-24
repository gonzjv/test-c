#include <stdio.h>

struct Person
{
    unsigned id_num;
    char name[32];
    char address[128];
    unsigned tel_num;
};

int IsLess(const struct Person *personOne, const struct Person *personTwo)
{
    return personOne->id_num < personTwo->id_num;
}

void main()
{
    printf("START \n");

    const struct Person joe =
        {
            id_num : 10,
            name : "Joe",
            address : "Ashdod",
            tel_num : 12345
        };
    const struct Person yossi =
        {
            id_num : 12,
            name : "Yossi",
            address : "Ashdod",
            tel_num : 12345
        };

    printf("result is %d \n", IsLess(&joe, &yossi));
    printf("END \n");
}
