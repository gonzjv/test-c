struct Person
{
    unsigned id_num;
    char name[32];
    char address[128];
    unsigned tel_num;
};

/* ### Write your code below this line ### */

int IsLess(const struct Person *personOne, const struct Person *personTwo)
{
    if (personOne->id_num < personTwo->id_num)
        return 1;
    else
        return 0;
}
