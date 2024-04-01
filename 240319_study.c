// 문자 입출력. 버퍼  p.347~

// #include <stdio.h>
// int main(void)
// {
//     char ch;

//     while ((ch = getchar()) != '#')
//     {
//         putchar(ch);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int ch;

//     while ((ch = getchar()) != EOF)
//     {
//         putchar(ch);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     int guess = 1;
//     char response;

//     printf("1에서 100까지 범위에 있는 한 정수를 생각하시오.\n");
//     printf("내가 추측하지요. 내 추측이 맞으면 y로 응답하고,\n");
//     printf("내 추측이 틀리면 n으로 응답하시오.\n");
//     printf("당신이 생각한 수가 %d입니까?\n", guess);
//     while ((response = getchar()) != 'y')
//     {
//         if (response == 'n') {
//             printf("그러면 %d입니까?\n", ++guess);
//         }
//         else {
//             printf("미안하지만, y 또는 n으로만 응답해주시오.\n");
//         }
//         while (getchar() != 'n')
//         {
//             continue;
//         }
//     }
//     printf("그것 봐요, 내가 맞출 수 있다고 했잖아요!\n");
//     return 0; 
// }


// #include <stdio.h>
// void display(char cr, int lines, int width);
// int main(void)
// {
//     int ch;
//     int rows, cols;
//     printf("문자 하나와 두 개의 정수를 입력하시오.\n");
//     while ((ch = getchar()) != '\n')
//     {
//         if (scanf("%d %d", &rows, &cols) != 2)
//         {
//             break;
//         }
//         display(ch, rows, cols);
//         while (getchar() != '\n')
//         {
//             continue;
//         }
//         printf("또 다른 문자와 두 개의 정수를 입력하시오.\n");
//         printf("끝내려면 그냥 Enter 키를 누르시오.\n");
//     }
//     printf("안녕!\n");

//     return 0;
// }

// void display(char cr, int lines, int width)
// {
//     int row, col;

//     for (row = 1; row <= lines; row++)
//     {
//         for (col = 1; col <= width; col++)
//         {
//             putchar(cr);
//         }
//         putchar('\n');
//     }
// }


// #include <stdio.h>
// #include <stdbool.h>    // 입력이 정수인지 검사
// long get_long(void);    // 범위 한계가 유효한지 검사
// bool bad_limits(long begin, long end, long low, long high);    // a에서 b까지의 범위에 있는 정수들의 제곱의 합을 계산
// double sum_squares(long a, long b);
// int main(void)
// {
//     const long MIN = -10000000L;    // 범위의 하한
//     const long MAX = +10000000L;    // 범위의 상한
//     long start;                     // 범위의 시작
//     long stop;                      // 범위의 마감
//     double answer;

//     printf("이 프로그램은 어떤 범위에 있는 정수들의 제곱의 합을 계산한다.\n"
//            "범위의 시작값은 -10000000보다 작을 수 없다.\n"
//            "범위의 마감값은 +10000000보다 클 수 없다.\n"
//            "시작값과 마감값을 입력하시오.\n"
//            "(끝내려면 두 값을 모두 0으로 입력):\n범위의 시작값: ");    
//     start = get_long();
//     printf("범위의 마감값: ");
//     stop = get_long();
//     while (start != 0 || stop != 0)
//     {
//         if (bad_limits(start, stop, MIN, MAX))
//         {
//             printf("범위를 다시 지정하시오.\n");
//         }
//         else
//         {
//             answer = sum_squares(start, stop);
//             printf("정수들의 제곱의 합");
//             printf("%ld에서 %ld까지의 범위에 있는 정수들의 제곱의 합은 %g입니다.\n",
//                    start, stop, answer);
//         }
//         printf("시작값과 마감값을 입력하시오.\n"
//                "(끝내려면 두 값을 모두 0으로 입력):\n");
//         printf("범위의 시작값: ");
//         start = get_long();
//         printf("범위의 마감값: ");
//         stop = get_long();
//     }
//     printf("종료!\n");

//     return 0;
// }

// long get_long(void)
// {
//     long input;
//     char ch;

//     while (scanf("%ld", &input) != 1)
//     {
//         while ((ch = getchar()) != '\n')
//         {
//             putchar(ch);    // 잘못된 입력을 폐기한다
//         }
//         printf(": 정수가 아닙니다.\n25, -178, 3과 같은 ");
//         printf("정수값을 입력하시오: ");
//     }

//     return input;
// }

// double sum_squares(long a, long b)
// {
//     double total = 0;
//     long i;

//     for (i = a; i <= b; i++)
//     {
//         total += (double)i * (double)i;
//     }
//     return total;
// }

// bool bad_limits(long begin, long end, long low, long high)
// {
//     bool not_good = false;

//     if (begin > end)
//     {
//         printf("시작값은 마감값보다 크면 안 됩니다.\n");
//         not_good = true;
//     }
//     if (begin < low || end < low)
//     {
//         printf("시작값과 마감값은 %ld보다 크거나 같아야 합니다.\n", low);
//         not_good = true;
//     }
//     if (begin > high || end > high)
//     {
//         printf("시작값과 마감값은 %ld보다 작거나 같아야 합니다.\n", high);
//         not_good = true;
//     }

//     return not_good;
// }


// #include <stdio.h>
// char get_choice(void);
// char get_first(void);
// int get_int(void);
// void count(void);
// int main(void)
// {
//     int choice;
//     void count(void);

//     while ((choice = get_choice()) != 'q')
//     {
//         switch (choice)
//         {
//         case 'a' : printf("쌀 때 사서 비쌀 때 파시오.\n"); 
//                    break;
//         case 'b' : putchar('\a');
//                    break; 
//         case 'c' : count();
//                    break;      
//         default : printf("프로그램 에러!\n");
//                   break;
//         }
//     }
//     printf("안녕!\n");

//     return 0;
// }

// void count(void)
// {
//     int n, i;

//     printf("몇까지 카운트할까요? 정수 하나를 입력하시오:\n");
//     n = get_int();
//     for (i = 1; i <= n; i++)
//     {
//         printf("%d\n", i);
//     }
//     while (getchar() != '\n')
//     {
//         continue;
//     }   
// }

// char get_choice(void)
// {
//     int ch;

//     printf("a, b, c, q 중에서 하나를 선택하시오:\n");
//     printf("a. 조언        b. 경고\n");
//     printf("c. 카운트      q. 종료\n");
//     ch = get_first();
//     while ((ch <'a' || ch > 'c') && ch != 'q')
//     {
//         printf("a, b, c, q 중에서 하나를 선택해야 합니다.\n");
//         ch = get_first();
//     }
    
//     return ch;
// }

// char get_first(void)
// {
//     int ch;

//     ch = getchar();
//     while (getchar() != '\n')
//     {
//         continue;
//     }
//     return ch;
// }

// int get_int(void)
// {
//     int input;
//     char ch;

//     while (scanf("%d", &input) != 1)
//     {
//         while ((ch = getchar()) != '\n')
//         {
//             putchar(ch);
//         }
//         printf(": 정수가 아닙니다.\n25, -178, 3과 같은 ");
//         printf("정수값을 입력하시오: ");        
//     }
//     return input;
// }



// 연습문제 - 자판기 만들기

// #include <stdio.h>
// int main(void)
// {
//     int choice, money, total, price;
//     char ch;

//     total = 0;

//     printf("돈을 넣어주세요 : ");
//     scanf("%d", &money);

//     printf("=========================================================\n");
//     printf(" 1) 콜라 1200원             2) 우주맛 콜라 1900원\n");
//     printf(" 3) 제로콜라 1200원         4) 스프라이트 1100원\n");
//     printf(" 5) 환타 900원              6) 닥터페퍼 1100원\n");
//     printf(" 7) 몬스터 1800원           8) 파워에이드 1900원\n");
//     printf(" 9) 네스티 1600원           10) 글라소 비타민 워터 2100원\n");
//     printf(" 11) 미닛메이드 1700원      12) 조지아 커피 900원\n");
//     printf(" 13) 암바사 900원           14) 마테차 1700원\n");
//     printf(" S) 계산하기                 X) 종료하기\n");
//     printf("=========================================================\n");

//     if (money < 900)
//     {
//         printf("돈이 부족합니다.\n");
//     }
//     while (money >= 900)
//     {             
//         printf("원하는 음료를 선택하세요 : ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1 : printf("콜라를 선택했습니다.\n");
//                  price = 1200;
//                  break;
//         case 2 : printf("우주맛 콜라를 선택했습니다.\n");
//                  price = 1900;
//                  break;
//         case 3 : printf("제로콜라를 선택했습니다.\n");
//                  price = 1200;
//                  break;
//         case 4 : printf("스프라이트를 선택했습니다.\n");
//                  price = 1100;
//                  break;
//         case 5 : printf("환타를 선택했습니다.\n");
//                  price = 900;
//                  break;
//         case 6 : printf("닥터페퍼를 선택했습니다.\n");
//                  price = 1100;
//                  break;
//         case 7 : printf("몬스터를 선택했습니다.\n");
//                  price = 1800;
//                  break;
//         case 8 : printf("파워에이드를 선택했습니다.\n");
//                  price = 1900;
//                  break;
//         case 9 : printf("네스티를 선택했습니다.\n");
//                  price = 1600;
//                  break;
//         case 10 : printf("글라소 비타민 워터를 선택했습니다.\n");
//                   price = 2100;
//                   break;
//         case 11 : printf("미닛메이드를 선택했습니다.\n");
//                   price = 1700;
//                   break;
//         case 12 : printf("조지아 커피를 선택했습니다.\n");
//                   price = 900;
//                   break;
//         case 13 : printf("암바사를 선택했습니다.\n");
//                   price = 900;
//                   break;
//         case 14 : printf("마테차를 선택했습니다.\n");
//                   price = 1700;
//                   break;
//         case 'S' : printf("총액은 %d입니다. 거스름돈 %d를 받아가세요.\n",
//                    total + price, money - total);
//                    break;
//         case 'X' : printf("종료합니다.\n");
//                    break; 
//         default : printf("자판기 고장 - 관리자에게 문의하세요.\n"); 
//                   break;
//         }          
//         if (money < 0)
//         {
//             printf("돈이 부족합니다. 거스름돈 %d원을 받아가세요.\n", money);
//         }
             
//     }
//     return 0;
// }