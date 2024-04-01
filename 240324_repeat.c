// #include <stdio.h>
// int mian(void)
// {
//     int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
//     int (*pz)[2];
//     pz = zippo;

//     printf("    pz = %p,    pz + 1 = %p\n", pz, pz + 1);
//     printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
//     printf("  *pz = %p,   *pz + 1 = %p\n", *pz, *pz + 1);
//     printf("pz[0][0] = %d\n", pz[0][0]);
//     printf("  *pz[0] = %d\n", *pz[0]);
//     printf("    **pz = %d\n", **pz);
//     printf("      pz[2][1] = %d\n", pz[2][1]);
//     printf("*(*(pz+2) + 1) = %d\n", *(*(pz+2)+1));

//     return 0;
// }



// #include <stdio.h>
// // #define ROWS 3
// // #define COLS 4
// void sum_rows(int ar[][4], int rows);
// void sum_cols(int [][4], int );
// int sum2d(int (*ar)[4], int rows);
// int main(void)
// {
//     int junk[3][4] = {{2,4,6,8},{3,5,7,9},{12,10,8,6}};

//     sum_rows(junk, 3);
//     sum_cols(junk, 3);
//     printf("모든 원소들의 합계 = %d\n", sum2d(junk, 3));

//     return 0;
// }

// void sum_rows(int ar[][4], int rows)
// {
//     int r, c, tot;

//     for (r = 0; r < rows; r++)
//     {
//         tot = 0;
//         for (c = 0; c < 4; c++)
//         {
//             tot += ar[r][c];
//         }
//         printf("%d행: 소계 = %d\n", r, tot);
//     }
// }

// void sum_cols(int ar[][4], int rows)
// {
//     int r, c, tot;

//     for (c = 0; c < 4; c++)
//     {
//         tot = 0;
//         for (r = 0; r < rows; r++)
//         {
//             tot += ar[r][c];
//         }
//         printf("%d열: 소계 = %d\n", c, tot);
//     }
// }

// int sum2d(int ar[][4], int rows)
// {
//     int r, c;
//     int tot = 0;

//     for (r = 0; r < rows; r++)
//     {
//         for (c = 0; c < 4; c++)
//         {
//             tot += ar[r][c];
//         }
//     }
//     return tot;
// }



// 2차원 배열 회전. 빙고문제.

// 규칙 : a[i][j] = a[j][4-i];

// #include <stdio.h>
// void rotate(int x[][5], int y[][5]);
// int main(void)
// {
//     int i, j;
//     int a[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
//     int b[5][5];
//     int c[5][5];

//     print2(a, 5);
//     printf("\n");
//     rotate(a, b); 
//     print2(b, 5);
//     printf("\n");
//     rotate(b, c);
//     print2(c, 5);
    
//     return 0;
// }

// void rotate(int x[][5], int y[][5])
// {
//     int i, j;

//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             y[i][j] = x[4-j][i];
//         }
//     }
// }

// void print2(int x[][5], int n)
// {
//     int i, j;

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%5d", x[i][j]);
//         }
//         printf("\n");
//     }
// }



// 함수 예제 p.395
// #include <stdio.h>
// #define NAME "GIGATHINK, INC."
// #define ADDRESS "101 Megabuck Plaza"
// #define PLACE "Megapol is, CA 94904"
// #define WIDTH 40

// void starbar(void);    // 함수 전방선언(프로토타입). 여기서는 세미콜론을 붙여준다.

// int main(void)
// {
//     starbar();    // 함수 호출
//     printf("%s\n", NAME);
//     printf("%s\n", ADDRESS);
//     printf("%s\n", PLACE);
//     starbar();    // 함수 호출

//     return 0;
// }

// void starbar(void)    // 함수 정의. 여기서는 세미콜론을 붙이지 않는다.
// {                     // 리턴값의 데이터형 + 함수 이름 + (매개변수 - 없으면 void) 형태로 작성
//     int count;

//     for (count = 1; count <= WIDTH; count++)
//     {
//         putchar('*');
//     }
//     putchar('\n');
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// void print2(int x[][5], int n);
// void append(int x[][5], int y[][5], int n);
// int main(void)
// {
//     int i, j, n, random;
//     int a[5][5]; /*= {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}; */
//     int b[5][5];
//     int c[5][5];
//     srand((unsigned int)time(NULL));

//     // while (n < 25)
//     // {
//     //     random = (rand () % 25) + 1;
//     //     a[i][j] = random;
//     //     b[i][j] = random;
//     //     if a
//     // }
//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             random = (rand () % 25) + 1;
//             a[i][j] = random;
//         }
//     }
//     printf("\n");
//     print2(a, 5);    
    
//     return 0;
// }


// void print2(int x[][5], int n)
// {
//     int i, j;

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%5d", x[i][j]);
//         }
//         printf("\n");
//     }
// }

// void append(int x[][5], int y[][5], int n)
// {
//     int i, j;

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             y[i][j] = x[i][j];
//         }
//     }
// }

