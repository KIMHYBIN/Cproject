// 데이터형 변환
// #include <stdio.h>
// int main()
// {
//     char ch;
//     int i;
//     float fl;

//     fl = i = ch = 'C';
//     printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
//     ch = ch + 1;
//     i = fl + 2 * ch;
//     fl = 2.0 * ch + i;
//     printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
//     ch = 1107;
//     printf("이제 ch = %c\n", ch);
//     ch = 80.99;
//     printf("이제 ch = %c\n", ch);

//     return 0;
// }

// #include <stdio.h>
// const int S_PER_M = 60;    // 1분의 초 수
// const int S_PER_H = 3600;    // 1시간의 초 수
// const double M_PER_K = 0.62137;    // 1킬로미터의 마일 수
// int main(void)
// {
//     double distk, distm;    //달린 거리 (각각 킬로미터 수와 마일 수)
//     double rate;           // 평균속도(mph; 시간당 마일 수)
//     int min, sec;          // 달린 시간(분 수와 초 수)
//     int time;              // 달린 시간(초 수)
//     double mtime;          // 1마일 달린 시간(초 수)
//     int mmin, msec;        // 1마일 달린 시간(분 수와 초 수)

//     printf("이 프로그램은 미터단위계로 측정한 달리기 기록을\n");
//     printf("1마일을 달린 시간과, 평균 속도(mph)로 변환한다.\n");
//     printf("달린 거리를 킬로미터 수로 입력하시오.\n");
//     scanf("%lf", &distk);
//     printf("달린 시간을 분 수와 초 수로 입력하시오.\n");
//     printf("먼저 분 수부터 입력하시오.\n");
//     scanf("%d", &min);
//     printf("이제 초 수를 입력하시오,\n");
//     scanf("%d", &sec);
    
//     time = S_PER_M * min + sec;    // 달린 시간을 초 수로 변환
//     distm = M_PER_K * distk;       // 킬로미터 수를 마일 수로 변환
//     rate = distm / time * S_PER_H;    // 초당 마일 수 * 시간당 초 = mph
//     mtime = (double) time / distm;    // 시간/거리 = 마일당 시간
//     mmin = (int) mtime / S_PER_M;    // 완전한 분 수를 구한다
//     msec = (int) mtime % S_PER_M;    // 나머지 초 수를 구한다
//     printf("당신은 %1.2f킬로미터(%1.2f마일)를 %d분, %d초에 달렸다.\n", distk, distm, min, sec);
//     printf("이 페이스는 1마일을 %d분, %d초에 "
//     "달린 것에 해당한다.\n", mmin, msec);
//     printf("평균속도는 %1.2f mph였다.\n", rate);

//     return 0;
// }


// 복습문제 p.213~217
// 1~2. 각 변수 값 구하기.
// #include <stdio.h>
// int main()
// {
//     int x, y;

//     x = (2+3)*6;
//     printf("값은 %d입니다.\n", x);

//     x = (12+6)/2*3;
//     printf("값은 %d입니다.\n", x);

//     y = x = (2+3)/4;
//     printf("값은 %d입니다.\n", y);

//     y = 3+2*(x=7/2);
//     printf("값은 %d입니다.\n", y);

//     x = (int) 3.8 + 3.3;
//     printf("값은 %d입니다.\n", x);

//     x = (2+3)*10.5;
//     printf("값은 %d입니다.\n", x);

//     x = 3/5*22.0;
//     printf("값은 %d입니다.\n", x);

//     x = 22.0*3/5;
//     printf("값은 %d입니다.\n", x);

//     return 0;
// }

// 3. 수식 계산하기
// #include <stdio.h>
// int main()
// {
//     float a;

//     a = 30.0/40.0*5.0;
//     printf("값은 %.1f입니다.\n", a);

//     a = 30.0/(4.0*5.0);
//     printf("값은 %.1f입니다.\n", a);

//     a = (float)30/4*5;    // int형으로 계산하면 값이 달라져서 float형으로 변환해주기
//     printf("값은 %.1f입니다.\n", a);

//     a = (float)30*5/4;    // 명시적 형 변환 해주기
//     printf("값은 %.1f입니다.\n", a);

//     a = 30/4.0*5;
//     printf("값은 %.1f입니다.\n", a);

//     a = 30/4*5.0;    // int형 연산은 몫만 취하고 나머지(소수점) 버림
//     printf("값은 %.1f입니다.\n", a);

//     return 0;
// }



// 4. 잘못된 부분 수정하기
// #include <stdio.h>
// int main(void)
// {
//     int i = 1;
//     float n;

//     printf("조심해! 한 무더기의 소수점을 가진 수들이 쏟아진다!\n");
//     while (i++ < 30)    // i 다음에 ++ 붙여주기
//     {
//         n = 1.0/i;    // n이 float이므로 부동소수점 수로 만들어주기
//         printf("%f\n", n);
//     }
//     printf("이제 끝이다!\n");

//     return 0;
// }

// 6~7. 내용 출력하기
// #include <stdio.h>
// #define FORMAT "%s! C는 멋지다!\n"
// int main(void)
// {
//     int num = 10;

//     printf(FORMAT, FORMAT);
//     printf("%d\n", ++num);
//     printf("%d\n", num++);
//     printf("%d\n", num--);
//     printf("%d\n", num);

//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     char c1, c2;
//     int diff;
//     float num;

//     c1 = 'S';
//     c2 = 'O';
//     diff = c1 - c2;
//     num = diff;
//     printf("%c %c %c : %d %3.2f\n", c1, c2, c1, diff, num);
//     return 0;
// }

// 8~9. 내용 출력 후 문자 a~g 출력.
// #include <stdio.h>
// #define TEN 10
// int main(void)
// {
//     int n = 0;
//     while (n++ < TEN)
//     {
//         printf("%5d", n);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// #define TEN 10
// #define H 'h'
// int main(void)
// {
//     int n = 0;
//     char ch = 'a';

//     // printf("%c", ch);
//     while (ch++ <= H)
//     {
//         printf("%5c", ch);
//     }
//     printf("\n");
//     return 0;
// }

// 10. 출력 결과 나타내기
// #include <stdio.h>
// int main(void)
// {
//     int x = 0;

//     while (++x < 3)
//     {
//         printf("%4d", x);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int x = 100;

//     while (x++ < 103)
//     {
//         printf("%4d\n", x);
//         printf("%4d\n", x);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     char ch = 's';

//     while (ch < 'w')
//     {
//         printf("%4c", ch);
//         ch++;
//     }
//     printf(" %c\n", ch);
//     return 0;
// }

// #define MESG "COPUTER BYTES DOG"
// #include <stdio.h>
// int main(void)
// {
//     int n = 0;

//     while (n < 5)
//     {
//         printf("%s\n", MESG);
//         n++;
//     }
//     printf("이제 끝이다.\n");
//     return 0;
// }

// 12~13. 규칙에 맞는 문장 작성하기
// ?
// x++
// c = (a+b)*2
// c = a+b*2
// x--
// m = n % k
// p = q / (b-a)
// x = (a+b) / (c*d)


// 제어문 : 루프 (while) p.221~
// #include <stdio.h>
// int main(void)
// {
//     long num;
//     long sum = 0L;
//     int status;

//     printf("합을 구할 정수를 하나 입력하시오");
//     printf("(끝내려면 q): ");
//     status = scanf("%ld", &num);
//     while (status == 1)
//     {
//         sum = sum + num;
//         printf("다음 정수를 입력하시오(끝내려면 q): ");
//         status = scanf("%ld", &num);
//     }
//     printf("입력된 정수들의 합은 %ld입니다.\n", sum);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n = 5;

//     while (n < 7)
//     {
//         printf("n=%d\n", n);
//         n++;
//         printf("이제 n = %d\n", n);
//     }
//     printf("루프가 끝났다.");

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     const double ANSWER = 3.14159;
//     double reponse;

//     printf("원주율의 값이 얼마지?\n");
//     scanf("%lf", &reponse);
//     while (fabs(reponse - ANSWER) > 0.0001)
//     {
//         printf("다시 말해 봐!\n");
//         scanf("%lf", &reponse);
//     }
//     printf("충분히 가깝다!\n");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n = 3;

//     while (n)
//     {
//         printf("%2d: 참\n", n--);
//     }
//     printf("%2d: 거짓\n", n);

//     n = -3;
//     while (n)
//     {
//         printf("%2d: 참\n", n++);
//     }
//     printf("%2d: 거짓\n", n);

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     long num;
//     long sum = 0L;
//     int status;

//     printf("합을 구할 정수를 하나 입력하시오");
//     printf("(끝내려면 q): ");
//     status = scanf("%ld", &num);
//     while (status == 1)
//     {
//         sum = sum + num;
//         printf("다음 정수를 입력하시오(끝내려면 q): ");
//         status = scanf("%ld", &num);
//     }
//     printf("입력된 정수들의 합은 %ld입니다.\n", sum);

//     return 0;
// }


// 연습문제 while문 사용
// 1. 1~10 출력
// #include <stdio.h>
// int main()
// {
//     int a = 0;

//     while (a++ < 10)
//     {
//         printf("%d\t", a);
//     }
//     printf("\n1번 문제 완료!\n");
//     return 0;
// }

// 2. 10~1 출력
// #include <stdio.h>
// int main()
// {
//     int a = 11;

//     while (a-- > 1)
//     {
//         printf("%d\t", a);
//     }
//     printf("\n2번 문제 완료!\n");
//     return 0;
// }

// 3. 0~100까지 짝수 출력하기
// #include <stdio.h>
// int main()
// {
//     int a = 0;

//     while (a < 50)    // a<100 이랑 a%2==0 을 모두 만족시켜야한다고 생각했는데
//     {                 // 50까지 세고 2를 곱하면 되는 거였다; 안 물어봤으면 생각 못 했을 듯;
//         printf("%d\t", a*2);
//         a++;
//     }
//     printf("\n3번 문제 완료!\n");
//     return 0;
// }

//  0~100까지 짝수 출력하는 다른 풀이
// #include <stdio.h>
// int main()
// {
//     int a = 0;

//     while (a < 100)    // a<100 이랑 a%2==0 을 모두 만족시켜야한다고 생각했는데
//     {                 // 50까지 세고 2를 곱하면 되는 거였다; 안 물어봤으면 생각 못 했을 듯;
//         printf("%d\t", a);
//         a = a + 2;
//     }
//     printf("\n3번 문제 완료!\n");
//     return 0;
// }


// 4. while문으로 별 찍기 - 이중 while문 가능
// 정삼각형, 마름모, 화살표, 모래시계, 트리
// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     int j = 0;

//     while (i < 6)    
//     {                
//         while (j < 5-i)
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

//      while (i < 6)    
//     {                
//         while (j < 5-i)
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
//     while (i < 5)
//     {                      
//         while (j < i)
//         {
//            printf("  ");
//             j++;
//         }
//         j = 1;
//         while (j < 10-i*2)
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

//     while (i < 6)    
//     {                
//         while (j < 5-i)
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
//     while (i < 6)
//     {
//         while (j < 6-4)
//         {
//             printf("  ");
//             j++;
//         }
//         j = 0;
//         while (j < 6-1)
//         {
//             printf(" *");
//             j++;
//         }
//         j = 0;
//         i++;
//         printf("\n");
//     }    
//     printf("화살표 문제 완료!\n");
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