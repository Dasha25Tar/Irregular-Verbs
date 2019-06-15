#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef struct
{
    char first[100];
    char second[100];
    char third[100];
    char translate[100];
} VerbForms;

void ReadWords(VerbForms *verbs)
{
    int i;
    FILE *f;
    char name[] = "Verbs.txt";
    if ((f = fopen(name, "r")) == NULL)
    {
        perror("fopen");
        exit(1);
    }
    for (i = 0; i < 100; i++)
    {
        fscanf(f, "%s %s %s %s", ((verbs[i]).first), ((verbs[i]).second), ((verbs[i]).third), ((verbs[i]).translate));
    }
}

int sum(char *mass2, char *mass3, int i, VerbForms *Verbs)
{
    int k = 0;
    if (strcmp(mass2, Verbs[i].second) == 0)
    {
        k = k + 1;
        printf("True\t");
    }
    else
    {
        printf("Falls\t");
    }
    if (strcmp(mass3, Verbs[i].third) == 0)
    {
        k = k + 1;
        printf("True\n");
    }
    else
    {
        printf("Falls\n");
    }
    return k;
}

int check()
{
    srand(time(NULL));
    int i, j, k = 0;

    char mass1[100];
    char mass2[100];
    char mass3[100];
    char mass4[100];
    VerbForms Verbs[100];
    ReadWords(Verbs);
    for (j = 0; j < 3; j++)
    {
        i = rand() % 60;
        printf("\n%d I: %s (%s)\t\n", j + 1, Verbs[i].first, Verbs[i].translate);
        printf("¬ведите вторую и третью формы глагола\n");
        scanf("%s %s", mass2, mass3);
        k += sum(mass2, mass3, i, Verbs);
    }
    return k;
}
