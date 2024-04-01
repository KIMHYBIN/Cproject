// 포인터와 배열 p.467~
// #include <stdio.h>
// #define SIZE 4
// int main(void)
// {
//     short dates[SIZE];
//     short* pti;
//     short index;
//     double bills[SIZE];
//     double* ptf;

//     pti = dates;
//     ptf = bills;
//     printf("%23s %15s\n", "short", "double");
//     for (index = 0; index < SIZE; index++)
//     {
//         printf("포인터 + %d: %10p %10p\n", index, pti + index, ptf + index);
//     }

//     return 0;
// }


// #include <stdio.h>
// #define MONTHS 12
// int main(void)
// {
//     int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
//     int index;

//     for(index = 0; index < MONTHS; index++)
//     {
//         printf("%2d월: 날짜 수 %2d\n", index + 1, *(days + index));
//     }

//     return 0;
// }


// #include <stdio.h>
// #define SIZE 10
// int sum(int ar[], int n);
// int main(void)
// {
//     int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
//     long answer;

//     answer = sum(marbles, SIZE);
//     printf("구슬의 전체 개수는 %ld개입니다.\n", answer);
//     printf("marbles의 크기는 %zd바이트입니다.\n", sizeof marbles);

//     return 0;
// }

// int sum(int ar[], int n)
// {
//     int i;
//     int total = 0;

//     for (i = 0; i < n; i++)
//     {
//         total += ar[i];
//     }
//     printf("ar의 크기는 %zd바이트입니다.\n", sizeof ar);

//     return total;
// }



// #include <stdio.h>
// #define SIZE 10
// int sump(int* start, int* end);
// int main(void)
// {
//     int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
//     long answer;

//     answer = sump(marbles, marbles + SIZE);
//     printf("구슬의 전체 개수는 %ld개입니다.\n", answer);
  
//     return 0;
// }

// int sump(int* start, int* end)
// {
//     int total = 0;

//     while (start < end)
//     {
//         total += *start;
//         start++;
//     }

//     return total;
// }


#include <stdio.h>
int data[2] = {100, 200};
int moredata[2] = {300, 400};
int main(void)
{
    int *p1, *p2, *p3;

    p1 = p2 = data;
    p3 = moredata;
    printf("  *p1 = %d,   *p2 = %d,     *p3 = %d\n",
              *p1     ,   *p2     ,     *p3);
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n",
            *p1++     , *++p2     , (*p3)++);
    printf("  *p1 = %d,   *p2 = %d,     *p3 = %d\n",
              *p1     ,   *p2     ,     *p3);
    
    return 0;
}
