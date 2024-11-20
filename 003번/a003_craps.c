#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rand_min = 1;
int rand_max = 6;

void make_rand(int*, int[]);


void make_rand(int* pdice, int cnt[])
{*pdice = rand() % (rand_max - rand_min + 1) + rand_min;
*pdice+= rand() % (rand_max - rand_min + 1) + rand_min;
cnt[*pdice] += 1;}







int main(void)
{int cnt[13] = { 0 };
int dice;

srand((unsigned int)time(0));

for (int i = 0; i < 30; i++)
{make_rand(&dice, cnt);}







}