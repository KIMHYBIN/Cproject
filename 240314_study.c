// 별 찍기 복습 + 응용
// 4. while문으로 별 찍기 - 이중 while문 가능
// 정삼각형, 마름모, 화살표, 모래시계, 트리

// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     int j = 0;
//     int k;

//     printf("정수를 입력하세요 : ");
//     scanf("%d", &k);

//     while (i < k+1)    
//     {                
//         while (j < k-i)
//         {
//             printf("  ");
//             j++;
//         }
//         j = 0;
//         while (j < i*2-1)
//         {
//             printf(" *");
//             j++;
//         }
//         i++;
//         j = 0;
//         printf("\n");
//     }    
//     printf("정삼각형 문제 완료!\n");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     int j = 0;
//     int k;
    
//     printf("정수를 입력하세요 : ");
//     scanf("%d", &k);

//      while (i < k/2.0+1)    
//     {                
//         while (j < k/2.0-i)
//         {
//             printf("  ");
//             j++;
//         }
//         j = 0;
//         while (j < i*2-1)
//         {
//             printf(" *");
//             j++;
//         }
//         j = 0;
//         i++;
//         printf("\n");
//     }
//     i = 1;
//     j = 0;
//     while (i < k/2.0)
//     {                      
//         while (j < i)
//         {
//            printf("  ");
//             j++;
//         }
//         j = 0;
//         while (j < (k/2.0-i)*2)
//         {
//             printf(" *");
//             j++;
//         }
//         j = 0;
//         i++;
//         printf("\n");
//     }    
//     printf("마름모 문제 완료!\n");
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     int j = 0;
//     int k;
    
//     printf("정수를 입력하세요 : ");
//     scanf("%d", &k);

//     while (i < k/2.0+1)    
//     {                
//         while (j < k/2.0-i)
//         {
//             printf("  ");
//             j++;
//         }
//         j = 0;
//         while (j < i*2-1)
//         {
//             printf(" *");
//             j++;
//         }
//         i++;
//         j = 0;
//         printf("\n");
//     } 
//     i = 1;
//     j = 0;
//     while (i < k/2.0)
//     {
//         while (j < k/4)
//         {
//             printf("  ");
//             j++;
//         }
//         j = 0;
//         while (j < (k+1)/2)
//         {
//             printf(" *");
//             j++;
//         }
//         j = 0;
//         i++;
//         printf("\n");
//     }    
//     printf("화살표 문제 푸는 중!\n");
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     int j = 0;

//      while (i < 5)
//     {                      
//         while (j < i)
//         {
//            printf("  ");
//             j++;
//         }
//         j = 1;
//         while (j < 12-i*2)
//         {
//             printf(" *");
//             j++;
//         }
//         j = 0;
//         i++;
//         printf("\n");
//     }   
//     i = 1;
//     j = 0; 
//      while (i < 6)    
//     {                
//         while (j < 6-i)
//         {
//             printf("  ");
//             j++;
//         }
//         j = 0;
//         while (j < i*2-1)
//         {
//             printf(" *");
//             j++;
//         }
//         j = 0;
//         i++;
//         printf("\n");
//     }
//     printf("모래시계 문제 완료!\n");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     int j = 0;

//     while (i < 4)    
//     {                
//         while (j < (4+1)-i)
//         {
//             printf("  ");
//             j++;
//         }
//         j = 0;
//         while (j < i*2-1)
//         {
//             printf(" *");
//             j++;
//         }
//         i++;
//         j = 0;
//         printf("\n");
//     }
//     i = 1;
//     while (i < 4)
//     {
//         while (j < 4-i)
//         {
//             printf("  ");
//             j++;
//         }
//         j = 0;
//         while (j < i*2+1)
//         {
//             printf(" *");
//             j++;
//         }
//         j = 0;
//         i++;
//         printf("\n");
//     }
//     i = 1;
//     while (i < 4)
//     {
//         while (j < (4-1)-i)
//         {
//             printf("  ");
//             j++;
//         }
//         j = 1;
//         while (j < (i+2)*2)
//         {
//             printf(" *");
//             j++;
//         }
//         j = 0;
//         i++;
//         printf("\n");
//     }
//     i = 1;
//     j = 0;
//     while (i < 4)
//     {
//         while (j < 4-2)
//         {
//             printf("  ");
//             j++;
//         }
//         j = 0;
//         while (j < 5)
//         {
//             printf(" *");
//             j++;
//         }
//         j = 0;
//         i++;
//         printf("\n");
//     }
//     printf("트리 문제 완료!\n");
//     return 0;
// }
// =======================================



// for문 p.243
// #include <stdio.h>
// int main(void)
// {
//     int num;

//     printf("    n    n의 세제곱\n");
//     for (num = 1; num <= 6; num++)
//     {
//         printf("%5d %5d\n, num, num*num*num");

//         return 0;
//     }

// #include <stdio.h>
// int main(void)
// {
//     int secs;

//     for (secs = 5; secs > 0; secs--)
//     {
//         printf("%d초!\n", secs);
//     }
//     printf("발사!\n");
//     return 0;
// }
    
// #include <stdio.h>
// int main(void)
// {
//     int n;

//     for (n = 2; n < 60; n = n + 13)
//     {
//         printf("%d\n", n);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     char ch;

//     for (ch = 'a'; ch <= 'z'; ch++)
//     {
//         printf("%c에 해당하는 ASCII 코드값은 %d입니다.\n", ch, ch);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     double debt;

//     for (debt = 100.0; debt < 150.0; debt = debt * 1.1)
//     {
//         printf("당신의 신용불량채무는 이제 $%.2f입니다.\n", debt);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     int x;
//     int y = 55;

//     for (x = 1; y <= 75; y= (++x * 5) + 50)
//     {
//         printf("%10d %10d\n", x, y);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int ans, n;

//     ans = 2;
//     for (n = 3; ans <= 25;)
//     {
//         ans = ans * n;
//     }
//     printf("n = %d; ans = %d.\n", n, ans);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int num = 0;

//     for (printf("수를 계속해서 입력하시오!\n"); num != 6;)
//     {
//         scanf("%d", &num);
//     }
//     printf("그것이 바로 내가 원하는 수입니다!\n");
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     const int secret_code = 13;
//     int code_entered;

//     do

//     {
//         printf("13일의 금요일 공포증 치료 동호회에 들어오려면,\n");
//         printf("비밀 번호 코드를 입력하시오: ");
//         scanf("%d", &code_entered);
//     } while (code_entered != secret_code);
//     printf("축하합니다! 치료되었습니다!\n");

//     return 0;    
// }

// #include <stdio.h>
// int main(void)
// {
//     const char secret_code = "퇴사";
//     char* code_entered;

//     do
//     {
//         printf("월요일 출근 공포증 치료 동호회에 들어오려면,\n");
//         printf("비밀 코드를 입력하시오: ");
//         scanf("%s", code_entered);
//     } while (code_entered != secret_code);
//     printf("축하합니다! 치료되었습니다!\n");

//     return 0;    
// }


// 중첩 루프 for문 p.261~
// #include <stdio.h>
// #define ROWS 6
// #define CHARS 10
// int main(void)
// {
//     int row;
//     char ch;

//     for (row = 0; row < ROWS; row++)
//     {
//         for (ch = 'A'; ch < ('A' + CHARS); ch++)
//         {
//             printf("%c", ch);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     const int ROWS = 6;
//     const int CHARS = 6;
//     int row;
//     char ch;

//     for (row = 0; row < ROWS; row++)
//     {
//         for (ch = ('A'+ row); ch < ('A' + CHARS); ch++)
//         {
//             printf("%c", ch);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 배열 소개 p.263~
// 문자열 != 문자 배열
// 문자열: 덩어리 하나를 통째로 다루는 느낌. 상수 취급 
// 문자 배열: 요소 하나하나를 따로 다루는 느낌

// #include <stdio.h>
// #define SIZE 10
// #define PAR 72
// int main(void)
// {
//     int index, score[SIZE];
//     int sum = 0;
//     float average;

//     printf("%d개의 골프 스코어를 입력하시오:\n", SIZE);
//     for (index = 0; index < SIZE; index++)
//     {
//         scanf("%d", &score[index]);
//     }
//     printf("읽은 스코어들은 다음과 같다:\n");
//     for (index = 0; index < SIZE; index++)
//     {
//         printf("%5d", score[index]);
//     }
//     printf("\n");
//     for (index = 0; index < SIZE; index++)
//     {
//         sum += score[index];
//     }
//     average = (float) sum / SIZE;
//     printf("스코어의 합 = %d, 평균 = %.2f\n", sum, average);
//     printf("핸디캡이 %0.f이다.\n", average - PAR);

//     return 0;
// }



// 제어문: 분기와 점프 p.285~
// #include <stdio.h>
// int main(void)
// {
//     const int FREEZIG = 0;
//     float temperature;
//     int cold_days = 0;
//     int all_days = 0;

//     printf("최저 기온들의 목록을 입력하시오.\n");
//     printf("섭씨 단위를 사용하시오(입력을 끝내려면 q).\n");
//     while (scanf("%f", &temperature) == 1)
//     {
//         all_days++;
//         if (temperature < FREEZIG)
//         {
//             cold_days++;
//         }
//     }
//     if (all_days != 0)
//     {
//         printf("전체 %d일 중에 영하의 날씨는 %.1f%%였습니다.\n",
//         all_days, 100.0*(float)cold_days / all_days);
//     }
//     if (all_days == 0)    // else 가능
//     {
//         printf("입력된 데이터가 없습니다!\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #define SPACE ' '
// int main(void)
// {
//     char ch;

//     ch = getchar();             // 문자 하나를 읽는다
//     while (ch != '\n'){          // 라인의 끝이 아닌 동안
//         if (ch == SPACE){         // 스페이스는 그대로 둔다
//             putchar(ch);         // 변경하지 않는다
//         }
//         else{
//             putchar(ch + 1);     // 다른 문자들은 변경한다
//         }
//         ch = getchar();         // 다음 문자를 얻는다
//     }
//     putchar(ch);         // 다음 줄을 출력한다

//     return 0;
// }

// #include <stdio.h>
// #include <ctype.h>    // isalpha() 함수 사용을 위해
// int main(void)
// {
//     char ch;

//     while ((ch = getchar()) != '\n'){
//         if (isalpha(ch)){       // 문자이면
//             putchar(ch + 1);    // 다음 문자를 출력한다
//         }
//         else{               // 그렇지 않으면
//             putchar(ch);    // 변경하지 않고 그대로 출력한다
//         }
//     }
//     putchar(ch);

//     return 0;    
// }


// #include <stdio.h>
// #define RATE1 0.13230    // 처음 360 까지 적용하는 비율
// #define RATE2 0.15040    // 그 다음 108 까지 적용하는 요율
// #define RATE3 0.30025    // 그 다음 252 까지 적용하는 요율
// #define RATE4 0.34025    // 720 초과할 때 적용하는 요율
// #define BREAK1 360.0    // 요율의 첫 번째 구분점
// #define BREAK2 468.0    // 요율의 두 번째 구분점
// #define BREAK3 720.0    // 요율의 세 번째 구분점
// #define BASE1 (RATE1 * BREAK1)
//     // 360 에 대한 요금
// #define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
//     // 468 에 대한 요금
// #define BASE3 (BASE1 + BASE2 + (RATE3 * (BREAK3 - BREAK2)))
//     // 720 에 대한 요금

// int main(void)
// {
//     double kwh, bill;    // 사용한 전력량, 부과할 전기요금

//     printf("사용한 전력량을 입력하시오.\n");
//     scanf("%lf", &kwh);
//     if (kwh <= BREAK1){
//         bill = RATE1 * kwh;
//     }
//     else if (kwh <= BREAK2){    // 사용한 전력량이 360과 468 사이
//         bill = BASE1 + (RATE2 * (kwh - BREAK1));
//     }
//     else if (kwh <= BREAK3){    // 사용한 전력량이 468과 720 사이
//         bill = BASE2 + (RATE3 * (kwh - BREAK2));
//     }
//     else {                     // 사용한 전력량이 680을 초과
//         bill = BASE3 + (RATE4 * (kwh - BREAK3));
//     }
//     printf("%.1f kwh의 전기요금은 $%1.2f입니다.\n", kwh, bill);

//     return 0;   
// }


// #include <stdio.h>
// #include <stdbool.h>
// int main(void)
// {
//     unsigned long num, div;    // 검사를 위해 주어지는 수, 잠정적 약숙
//     bool isPrime;              // 소수 플래그

//     printf("검사할 정수를 하나 입력하시오.");
//     printf("(끝내려면 q)\n");
//     while (scanf("%lu", &num) == 1)        // scanf()의 리턴값이 1인 동안
//     {
//         for (div = 2, isPrime = true; (div * div) <= num; div++)
//         {
//             if (num % div == 0)
//             {
//                 if ((div * div) != num)
//                 printf("%lu, %lu: 둘 다 %lu의 약수다.\n", 
//                 div, num / div, num);
//                 else {        // div * div == num 이면
//                     printf("%lu: %lu의 약수다.\n", div, num);
//                 }
//                 isPrime = false;
//             }
//         }
//         if (isPrime) {        // isPrime이 트루이면? 근데 위에서 지정했잖아
//             printf("%lu: 소수다.\n", num);
//         }
//         printf("검사할 또 다른 정수를 하나 입력하시오");
//         printf("(끝내려면 q)\n");
//     }
//     printf("안녕!\n");

//     return 0;
// }


// 챕터6 복습 문제 p.274~279
// 복습 문제 중 못 풀었거나 이해가 잘 안 되는 건 꼭 질문하고 다시 풀어보기!

// 2. 다음 조건이 출력하는 값 확인
// #include <stdio.h>
// int main(void)
// {
//     // int value;
//     double value;

//     for (value = 36; value > 0; value /= 2) {
//         // printf("%3d", value);
//         printf("%f", value);
//     }
//     printf("이게 맞나\n");
// }

// 3~4. 검사 조건 나타내기. 이해 못 함;
// #include <stdio.h>
// int main(void)
// {
//     const double x;

//     printf("x 값을 입력하라 : ");
//     scanf("%lf", &x);

//     while (x > 5)
//     {
//         printf("x값은 %lf이다.\n", x);
//     }

//     return 0;
// }


// 5. 오류 수정 - 답지 확인하기
// #include <stdio.h>
// int main(void)
// {
//     int i, j, list[10];

//     for (i = 1; i < 10; i++)
//     {
//         list[i] = 2*i + 3;
//         for (j = 1; j >= i; j++) {
//             printf("%d", list[j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 6. 중첩 루프 사용해 아래와 같이 출력하라.
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     char s = '$';

//     for (i = 0; i < 4; i++) {
//         for (j = 0; j < 8; j++) {
//             printf("%c", s);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//  7~9 출력값 확인하기


// 11. 오류 수정 - 답지 확인하기
// #include <stdio.h>
// #define SIZE 8
// int main(void)
// {
//     char by_two[SIZE];
//     int index;

//     for (index = 1; index <= SIZE; index++) {
//         by_two[index] = 2 * index;
//         for (index = 1; index <= SIZE; index++) {
//         printf("%s", by_two);
//          }
//     }
    
//     printf("\n");
//     return 0;
// }



// 챕터6 프로그래밍 연습 p.281~284
// 01. 26개 원소 가지는 배열 만들고 26개의 알파벳 소문자 저장하는 프로그램 작성 후 출력하기
// #include <stdio.h>
// int main()
// {
//     char a, alpha[26];
//     int i;

//     for (i = 0; i < 26; i++) {
//         for (a = 'a'; a < ('a'+ 26); a++) {
//             alpha[i] = a + i;
//         }
//         // printf("%c", alpha[i]);
//         printf("%c", a);
//     }
    
//     printf("\n");
//     return 0;
// }

// 02~05. 중첩 루프 사용하여 아래와 같이 출력하라.
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     char s = '$';

//     for (i = 0; i < 5; i++) {
//         for (j = 0; j < (i+1); j++) {    // // j의 범위를 설정 못하고 있었는데 교수님 도움 받음! 기억해두자
//             printf("%c", s);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #define A 6
// int main()
// {
//     const int A = 6;
//     char f;
//     int i;

//     for (i = 1; i < A + 1; i++) {
//         for (f = 'F'; f > ('F'- i); f--) {    
//             printf("%c", f);                  
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 중첩 for문 안의 범위를 정할 때 고정값을 넣으면 한 줄마다 그 값만큼만 출력되므로
// 한 줄마다 반복횟수를 달리하고 싶으면 고정값(define, const 등) 넣지 않기

// char lets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

// #include <stdio.h>
// int main()
// {
//     const int U = 1;
//     char a;
//     int i, j;

//     for (i = 1; i < 7; i++) {
//         for (a = 'A'; a + U < 'A'+i; a++) {
//             printf("%c", a);
//         }
//         printf("\n");
//     }
//     return 0;    
// }

