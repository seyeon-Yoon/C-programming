#include <stdio.h>
#define SIZE 3

struct cities
{
    char name;
    char country;
    int population;
};

int main()
{
    struct cities list[SIZE];
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("Name>");
        scanf("%s", &list[i].name);
        printf("Country>");
        scanf("%s", &list[i].country);
        printf("population>");
        scanf("%d", &list[i].population);
    }
    for(i=0; i<SIZE; i++)
        printf("%s in %s with a population of %d people\n",list[i].name,list[i].country,list[i].population);
    return 0;
}
