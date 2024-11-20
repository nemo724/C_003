#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rand_min = 1;
int rand_max = 6;

void make_rand(int*, int[]);
void output_result(int[]);


void make_rand(int* pdice, int cnt[])
{*pdice = rand() % (rand_max - rand_min + 1) + rand_min;
*pdice+= rand() % (rand_max - rand_min + 1) + rand_min;
cnt[*pdice] += 1;}

void output_result(int cnt[])
{double prob;

printf("결과\n");
for(int i=2;i<=12;i++)
	{prob= (double)cnt[i]/30;
	printf("%d :%2d 확률 %5.2lf%%\n",i,cnt[i],prob*100); }
}





int main(void)
{int cnt[13] = { 0 };
int dice;

srand((unsigned int)time(0));

for (int i = 0; i < 30; i++)
{make_rand(&dice, cnt);}

output_result(cnt);





}