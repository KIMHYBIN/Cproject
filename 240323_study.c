// 240322금요일 수업 내용인데 교수님이 한 번 더 설명해주심!!!

// #include<stdio.h>
// int main()
// {
//     int urn[5] = {100, 200, 300, 400, 500};
//     int* ptr1;
//     int* ptr2; 
//     int* ptr3; 

//     ptr1 = urn;
//     ptr2 = &urn[2];
//     ptr3 = ptr1 + 4;
    
//     ptr1 + 4; 
//     *(ptr1 +3);
//     ptr1++; 
//     ptr2--; 
//     --ptr1;
//     ++ptr2;
//     ptr2 - ptr1;
//     ptr3 - 2;

//     printf("ptr1= %d, ptr2= %d, ptr3= %d\n",*ptr1,*ptr2,*ptr3);

//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int urn[5] = {100, 200, 300, 400, 500};
//     int* ptr1; // &urn[0] ->&urn[1] ->&urn[0] 100
//     int* ptr2; // &urn[2] ->&urn[1] ->&urn[2] 300
//     int* ptr3; // &urn[0] + 4 -> &urn[4] 500

//     ptr1 = urn;
//     ptr2 = &urn[2];
//     ptr3 = ptr1 + 4;//1 &urn[4]

//     printf("ptr1= %d,ptr2= %d,ptr3= %d\n",*(ptr1),*(ptr2),*(ptr3));
    
// //     //ptr1 + 4; // 2 계산 출력 500
// //     printf("ptr1 + 4 = %d\n",*(ptr1 + 4));
// //     //*(ptr1 +3);//3 계산 출력 &urn[3] 400
// //     printf("ptr1 + 3 = %d\n",*(ptr1 + 3));
// //     //ptr1++; //4 &urn[0] 100
// //     printf("ptr1++ = %d\n",*(ptr1++));
// //     //ptr2--; //5 &urn[2] 300
// //     printf("ptr2-- = %d\n",*(ptr2--));
// //     //--ptr1; //6 &urn[0] 100
// //     printf("--ptr1 = %d\n",*(--ptr1));
// //     //++ptr2; //7 &urn[2] 300
// //     printf("++ptr2 = %d\n",*(++ptr2));
// //     //ptr2 - ptr1;//8 계산 출력 2
// //     printf("ptr2 - ptr1 = %d\n",ptr2 - ptr1);
// //     //ptr3 - 2; //9 계산 출력 &urn[2] 300
// //     printf("ptr3 - 2 = %d\n", *(ptr3 - 2));
// //     //연산을 수행후 ptr1, ptr2, ptr3의 주소를 * (역참조) 했을 때의 값은?
//     // printf("ptr1= %d,ptr2= %d,ptr3= %d\n",*ptr1,*ptr2,*ptr3);
//     return 0;
// }



// #include <stdio.h>
// int main(void)
// {
//     int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
//     printf("   zippo = %p,    zippo + 1 = %p\n", zippo, zippo + 1);
//     printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
//     printf("  *zippo = %p,   *zippo + 1 = %p\n", zippo[0], zippo[0] + 1);
//     printf("zippo[0][0] = %d\n", zippo[0][0]);
//     printf("  *zippo[0] = %d\n", *zippo[0]);
//     printf("    **zippo = %d\n", **zippo);
//     printf("*(*(zippo+2)+1) = %d\n", *(*(zippo+2)+1));

//     return 0;
// }


// 교재 p.39 함수 다시 읽어보기 + p.393 함수 다시 읽어보기 

// #include <stdio.h>
// #define ROWS 3
// #define COLS 4
// void sum_rows(int ar[][COLS], int rows);
// void sum_cols(int [][COLS], int );
// int sum2d(int (*ar)[COLS], int rows);
// int main(void)
// {
//     int junk[ROWS][COLS] = {{2,4,6,8},{3,5,7,9},{12,10,8,6}};

//     sum_rows(junk, ROWS);
//     sum_cols(junk, ROWS);
//     printf("모든 원소들의 합계 = %d\n", sum2d(junk, ROWS));

//     return 0;
// }

// void sum_rows(int ar[][COLS], int rows)
// {
//     int r, c, tot;

//     for (r = 0; r < rows; r++)
//     {
//         tot = 0;
//         for (c = 0; c < COLS; c++)
//         {
//             tot += ar[r][c];
//         }
//         printf("%d행: 소계 = %d\n", r, tot);
//     }
// }

// void sum_cols(int ar[][COLS], int rows)
// {
//     int r, c, tot;

//     for (c = 0; c < COLS; c++)
//     {
//         tot = 0;
//         for (r = 0; r < rows; r++)
//         {
//             tot += ar[r][c];
//         }
//         printf("%d열: 소계 = %d\n", c, tot);
//     }
// }

// int sum2d(int ar[][COLS], int rows)
// {
//     int r, c;
//     int tot = 0;

//     for (r = 0; r < rows; r++)
//     {
//         for (c = 0; c < COLS; c++)
//         {
//             tot += ar[r][c];
//         }
//     }
//     return tot;
// }



// 2차원 배열 회전. 빙고문제.

// 규칙 : a[i][j] = a[j][4-i];

// #include <stdio.h>
// int rotate(int x[][5], int y[][5]);
// int main(void)
// {
//     int i, j;
//     int a[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
//     int b[5][5];

//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             // printf("%5d", a[i][j]);
//             b[i][j] = a[4-j][i];
//             printf("%5d", b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int rotate(int x[][5], int y[][5])
// {
//     int i, j;
//     // int x[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
//     // int y[5][5];

//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             y[i][j] = x[4-j][i];
//             printf("%5d", y[i][j]);
//         }
//         printf("\n");
//     }
//     return y[i][j];
// }


// #include <stdio.h>
// int rotate(int x[][5], int y[][5]);
// int main(void)
// {
//     int i, j;
//     int a[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
//     int b[5][5];

//     rotate(a[5][5], b[5][5]);
//     return 0;
// }

// int rotate(int x[][5], int y[][5])
// {
//     int i, j;

//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             y[i][j] = x[4-j][i];
//             // printf("%5d", y[i][j]);
//         }
//         printf("\n");
//     }
//     return y[i][j];
// }