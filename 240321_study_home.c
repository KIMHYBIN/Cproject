// 포인터 : 주소를 저장하기 위한 특정한 변수
// 포인터 변수: 메모리 주소를 저장하는 변수. 변수인데 속에 담긴 내용이 16진수로 된 메모리 주소.

// 포인터 변수에 담긴 주소를 통해 거기에 담긴 값을 읽어낼 수 있다.

// 그 주소에 저장된 값의 자료형은 해당 주소에서 몇 바이트 읽어야하는지 하드웨어에게 알려줘야 한다.

// 그 주소에 데이터형이 무엇인지 명시해줘야 하므로 포인터 앞에 자료형을 붙이는 것이다.

// 포인터에 저장된 주소도 바꿀 수 있다. 
// 포인터도 변수이기에 포인터에 저장된 값도 변경 가능하다.

// 포인터가 저장하고 있는 메모리 위치로 가서 그곳에 저장돼있는 값을 읽거나 쓴다.
// == 포인터가 가리키는 값에 접근한다고 말한다.

// 참조 : 포인터가 이미 하고 있는 일. 어떤 변수의 값을 직접 가져다 쓰는 게 아니라
// 그 주소를 참조한다(값이 있는 주소를 가리킨다)

// 역참조 : 주소로 직접 가서 거기에 저장돼있는 값에 접근하는 것. 실제 데이터의 주소를 이용해 간접적으로 접근한다.

// 이때까지는 변수에 대입할 떄 그 값을 복사해서 쓴 것이나 이제 그러지 않고 원본 데이터에 접근하여 사용 가능하다.
// 이게 컴퓨터 구조에서 데이터를 오랫동안 메모리에 저장하는 방법이다.


// 원본
// int score = 100;
// int* ptr = &score;
// *ptr = 50;

// score 값이 100 -> 50으로 변경되면
// *ptr = 으로 변경

// 1단계
// int score = 100;
// int* ptr = &score;
// *&score = 50;

// 2단계
// int score = 100;
// int* ptr = &score;
// score = 50;

// 3단계
// int score = 50;



// #include <stdio.h>
// int main(void)
// {
//     int num1 = 15;
//     int num2 = 30;  // --> *ptr1 += *ptr3; 식에 따라 120이 됨
//     int num3 = 45;  // --> *ptr3 *= 2; 식에 따라 90이 됨
//                     // --> *ptr2 *= 2; 식에 따라 180이 됨

//     int* ptr1 = &num1; // --> &num2
//     int* ptr2 = &num2; // --> &num3
//     int* ptr3 = &num3;
//                         // 변수 선언
//     ptr1 = ptr2;
//     ptr2 = ptr3;   

//     *ptr3 *= 2;  // --> *(&num3) * 2 == num3 * 2 == 45 *2 
//     *ptr1 += *ptr3;  // --> *(&num2) = *(&num2) + *(&num3)
//     *ptr2 *= 2;  // --> *(&num3) = *(&num3) * 2

//     printf("%d %d %d", num1, num2, num3);

//     return 0;
// }



// 배열 p.449 ~
// #include <stdio.h>
// #define MONTHS 12

// int main(void)
// {
//     int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
//     int index;

//     for (index = 0; index < MONTHS; index++)
//     {
//         printf("%2d월: 날짜 수 %2d\n", index+1, days[index]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #define SIZE 4
// int main(void)
// {
//     int no_data[SIZE];
//     int i;

//     printf("%2s%14s\n", "i", "no_data[i]");
//     for (i = 0; i < SIZE; i++)
//     {
//         printf("%2d%14d\n", i, no_data[i]);
//     }
//     return 0;
// }


// #include <stdio.h>
// #define SIZE 4
// int main(void)
// {
//     int some_data[SIZE] = {1492, 1066};
//     int i;

//     printf("%2s%14s\n", "i", "some_data[i]");
//     for (i = 0; i < SIZE; i++)
//     {
//         printf("%2d%14d\n", i, some_data[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int days[] = {31,28,31,30,31,30,31,31,30,31,30, 31};
//     int index;
//     int sum[] = {0,0,0,0,0,0,0,0,0,0,0,0};

//     for (index = 0; index < sizeof days / sizeof days[0]; index++)
//     {
//         sum[index-1] = days[index] + sum[index-1];

//         days[index] = days[index] * 2;
        
//         printf("%2d월 날짜 수의 두 배: %2d\n", index, days[index]);
//         printf("날짜들의 총합: %d\n", sum[index]);
//     }
   
//     return 0;
// }


// 혼자 변형해본 연습문제. 집 가서 다시 풀어보고 이해했다.
// #include <stdio.h>
// int main(void)
// {
//     int week[] = {7,6,5,4,3,2,1};
//     int day, hour;
//     int weekend[7];

//     for (day = 0; day < sizeof week / sizeof week[0]; day++)
//     {
//         week[day] = 8 - week[day];
//         // weekend[day] = week[6-day];    // 6은 7-1. 즉 배열의 길이에서 하나를 빼준 값(0부터 숫자를 세므로)  

//         // day = 6 - day; // <-- 결괏값 이상함. 적용 불가

//         hour = week[day] * 24;
//         // hour = weekend[day] * 24;    // 위쪽에 weekend[day]랑 세트

//         printf("일주일의 %d번째 날은 %d일이며 총 %d시간이다.\n",
//         day + 1, week[day], hour);
//     }
//     return 0;
// }


// // 연습문제
// #include <stdio.h>
// int main(void)
// {
//     int num1 = 15;
//     int num2 = 30; // -> 120 -> 240 -> 480
//     int num3 = 45; // -> 90 -> 180
//     int num4 = 50; 
//     int num5 = 100;

//     int* ptr1 = &num1; // -> &num2
//     int* ptr2 = &num2; // -> &num3
//     int* ptr3 = &num3;
//     int* ptr4 = &num4; // -> &num2
//     int* ptr5 = &num5; // -> &num2

//     ptr1 = ptr2;
//     ptr2 = ptr3;
//     ptr4 = ptr1;
//     ptr5 = ptr4;
//     // 위에서 대입된 주소값을 그대로 대입해야 함(초기에 선언한 변수는 ㄴㄴ)

//     *ptr3 *= 2; // -> num3 = num3 * 2
//     *ptr1 += *ptr3; // -> num2 = num2 + num3 = 30 + 90
//     *ptr2 *= 2; // -> num3 = num3 * 2
//     *ptr4 += *ptr1; // -> num2 = num2 + num2 
//     *ptr5 *= 2; // -> num2 = num * 2

//     printf("%d %d %d %d %d", num1, num2, num3, num4, num5);

//     return 0;
// }


// 포인터에서 중요한 부분: int* 과 *ptr 을 구분해야 한다


// 다차원 배열 p.461~
// #include <stdio.h>
// #define MONTHS 12
// #define YEARS 5
// int main(void)
// {
//     const float rain[YEARS][MONTHS] =
//     {
//         {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
//         {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
//         {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
//         {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
//         {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
//     };
//     int year, month;
//     int max_month = 0;
//     float subtot, total;
//     float max_rain = 0.0;

//     printf(" 년도        강우량(인치)\n");
//     for (year = 0, total = 0; year < YEARS; year++)
//     {
//         for (month = 0, subtot = 0; month < MONTHS; month++)
//         {
//             subtot += rain[year][month];
//         }
//         printf("%5d %15.1f\n", 2010 + year, subtot);
//         total += subtot;
//     }
//     printf("\n연평균 강우량은 %.1f인치입니다.\n", total/YEARS);
//     printf("월평균 강우량은 다음과 같습니다.\n\n");
//     printf(" Jan  Feb  Mar  Apr  May  Jun  ");
//     printf("Jul  Aug  Sep  Oct  Nov  Dec\n");

//     for (month = 0; month < MONTHS; month++)
//     {
//         for (year = 0, subtot = 0; year < YEARS; year++)
//         {
//             subtot += rain[year][month];
//         }
//         printf("%4.1f ", subtot/YEARS);        
//     }

//     for (year = 0; year < YEARS; year++)
//     {
//         for (month = 0; month < MONTHS; month++)
//         {
//             max_month = (rain[year][month] > max_rain)? month : max_month;
//             max_rain = (rain[year][month] > max_rain)? rain[year][month] : max_rain;
//         }
//         printf("\n%d년도의 최대 강우량이 발생한 달은 %d월, 강우량은 %.1f입니다.\n",
//         year + 2010, max_month + 1, max_rain);
//         max_rain = 0.0;
//         max_month = 0;
//     }
//     printf("\n");

//     return 0;
// }


// 석현이가 만든 연습문제
// #include<stdio.h>

// int main(void)
// {
//     int num1 = 10;
//     int num2 = 20; // -> -1300
//     int num3 = 30; // -> 660 -> 1320

//     int* ptr1 = &num1; // -> &num2;
//     int* ptr2 = &num2; // -> &num3;
//     int* ptr3 = &num3;
                       
//     ptr1 = ptr2; 
//     int b = *ptr2; // -> &num2;
//     ptr2 = ptr3;  
    

//     *ptr3 *= 2 + b; 
//     *ptr1 -= *ptr2 + *ptr3;  
//     *ptr2 *=2;

//     printf("%d %d %d\n",num1,num2,num3);

//     return 0; 
// }


// 예제 01. 1부터 10까지 출력
// #include <stdio.h>
// int main(void)
// {
//     int i;

//     for (i = 1; i < 11; i++)
//     {
//         printf("%d  ", i);
//     }
//     printf("\n");

//     return 0;
// }


// 예제 02. 10부터 1까지 출력
// #include <stdio.h>
// int main(void)
// {
//     int i;

//     for (i = 10; i > 0; i--)
//     {
//         printf("%d  ", i);
//     }
//     printf("\n");

//     return 0;
// }


// 문제 01. 1부터 100까지의 합 구하기
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     int sum = 0;

//     for (i = 1; i < 101; i++)
//     {
//         sum += i;
//     }
//     printf("%d\n", sum);

//     return 0;
// }


// 문제 02. 1부터 100까지의 수 중 짝수의 합 구하기
// 풀이 1번
// #include <stdio.h>
// int main(void)
// {
//     int i = 2;
//     int sum = 0;

//     for (i = 2; i < 101;)
//     // while (i < 101)
//     {        
//         sum += i;
//         i += 2;
//     }
//     printf("%d\n", sum);
// }

// 문제 03. 1부터 100까지의 수 중 짝수의 합 구하기 - 나머지 연산자 이용
// 풀이 2번
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     int sum = 0;

//     for (i = 1; i < 101; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     printf("%d\n", sum);

//     return 0;
// }


// 문제 04. 1, -2, 3, -4, ... , 99, -100의 합 구하기
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     int sum = 0;

//     for (i = 1; i < 101; i++)
//     {
//         if (i % 2 == 1)
//         {
//             sum += i;
//         }
//         else
//         {
//             sum -= i;
//         }        
//     }
//     printf("%d\n", sum);

//     return 0;
// }


// 문제 05. 팩토리얼 구하기. 1씩 감소하여 곱해지는 i값 
//  내 풀이 - 이전 풀이 참고하여 다시 생각해보기
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     int sum = 0;

//     for (i = 5; i < 6; i++)
//     {
//         i = i * (i-1);
//         printf("%d\n", i);

//         if (i <= 1)
//         {
//             i = 1;
//         }         
//     }    
//     // printf("%d\n", i);

//     return 0;
// }

//  문제 05. 학습일지 0227 풀이 참고
// #include <stdio.h>
// int main(void)
// {
//     int fact = 5;
//     int i = fact - 1;

//     while (i > 0)
//     {
//         fact = fact * i;
//         i--;
//     }
//     printf("%d\n", fact);

//     return 0;
// }


// 문제 06. 약수 구하기 - 학습일지 0227 풀이 참고
// #include <stdio.h>
// int main(void)
// {
//     int n = 10;
//     int m = 1;

//     while (m < n)
//     {
//         if (n % m == 0)
//         {
//             printf("%d  ", m);
//         }
//         m++;
//     }
//     printf("%d\n", m);

//     return 0;    
// }


// 문제 07. 공약수 구하기
// #include <stdio.h>
// int main(void)
// {
//     int n1, n2, i;

//     printf("정수 입력 : ");
//     scanf(" %d", &n1);
//     printf("정수 입력 : ");
//     scanf(" %d", &n2);

//     for (i = 1; i < n1; i++)
//     {
//         if (n1 % i == 0 && n2 % i == 0)
//         {
//             printf("두 수의 공약수는 %d이다.\n", i);
//         }
//     }    
//     return 0;
// }


// 리스트 활용 반복문 순서도 문제 
// 문제 1. 1부터 10까지의 수를 리스트에 저장하고 출력
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     int a[10];

//     for (i = 1; i < 11; i++)
//     {
//         a[i-1] = i;
//         printf("%d  ", a[i-1]);
//     }
//     printf("\n");

//     return 0;    
// }


// 문제 2. 10부터 100까지 10만큼 커지는 숫자들을 배열에 저장하고 거꾸로 출력
// #include <stdio.h>
// int main(void)
// {
//     int a[10], i;

//     for (i = 1; i < 11; i++)
//     {
//         a[i-1] = i*10;
//         printf("%d  ", a[i-1]);
//         // a[i]를 출력하면 이상한 값이 나옴.
//         // a[i-1]부터 값을 저장하는데 a[i]부터 출력하면
//         // 기존에 a[i]에 저장돼있던 쓰레기값이 출력됨.
//     }
//     printf("\n");
//     for (i = 9; i >= 0; i--)
//     {
//         printf("%d  ", a[i]);
//     }
//     return 0;
// }

// 문제 3. 배열 요소 거꾸로 뒤집기
// 요소 10개 모두 출력돼야하는 거 아닌가? 뭐지? 내가 잘못 이해했나?
// #include <stdio.h>
// int main(void)
// {
//     int i, a[10], b[10];

//     for (i = 1; i < 11; i++)
//     {
//         a[i-1] = i*10;
//         // printf("%d  ", a[i-1]);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         b[i] = a[9-i];
//         a[i] = b[i];
//         printf("%d  ", a[i]);
//     }
//     return 0;
// }

// 문제 4. 배열 요소 중 최댓값 구하기
// #include <stdio.h>
// int main(void)
// {
//     int a[10] = {91,90,78,35,65,9,97,54,62,90};
//     int i;
//     int max = a[0];    

//     for (i = 1; i < 10; i++)
//     {
//         printf("%d, ", a[i]);
//         max = (a[i] > max)? a[i] : max;
//     }
//     printf("\n최댓값 : %d\n", max);

//     return 0;
// }


// 문제 5. 배열 a 요소를 배열 b에 거꾸로 저장하기
// #include <stdio.h>
// int main(void)
// {
//     int i, a[10], b[10];

//     for (i = 0; i < 10; i++)
//     {
//         a[i] = i + 1;
//         printf("%d  ", a[i]);
//     }
//     printf("\n");
//     for (i = 0; i < 10; i++)
//     {
//         b[i] = a[9-i];
//         printf("%d  ", b[i]);
//     }
//     return 0;
// }


// 문제 6. 배열 요소를 반시계방향으로 한 칸 씩 이동하기
// #include <stdio.h>
// int main(void)
// {
//     int i, a[10], b[10];

//     for (i = 0; i < 10; i++)
//     {
//         a[i] = i + 1;
//         printf("%d  ", a[i]);
//     }
//     printf("\n");
//     for (i = 0; i < 10; i++)
//     {
//         b[i] = a[i+1];
//         b[9] = a[0];
//         // if (i == 9)
//         // {
//         //     b[i] = a[i-9];            
//         // }
//         printf("%d  ", b[i]);
//     }
//     return 0;
// }


// 심화문제 - 반복문(while, for)
// 문제 01. 최대공약수 구하기
// #include <stdio.h>
// int main(void)
// {
//     int i = 1;
//     int n1 = 0;
//     int n2 = 0; 
//     int max = 1;

//     printf("정수: ");
//     scanf("%d", &n1);
//     printf("정수: ");
//     scanf("%d", &n2);

//     while (n1 > i)
//     {
//         if (n1 % i == 0 && n2 % i == 0)
//         {
//             max = (i <= max)? max : i;            
//         }        
//         i++;
//     }
//     printf("최대공약수 %d\n", max);

//     return 0;
// }


// 문제 02. 숫자를 직각삼각형 모양으로 출력
// 첫번째 삼각형 왜케 안 만들어지니;
// #include <stdio.h>
// int main(void)
// {
//     int i, j;

//     for (i = 1; i < 6; i++)
//     {
//         for (j = 1; j < i+1; j++)
//         {
//             printf("%d ", i);    // i도 이 칸에 출력할 수 있단다...기억하자...^^
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int i, j;

//     for (i = 1; i < 6; i++)
//     {
//         for (j = 1; j < 7 - i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int i, j;

//     for (i = 1; i < 6; i++)
//     {
//         for (j = 6 - i; j > 0; j--)
//         {            
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 문제 03. 소수 판별하기
// #include <stdio.h>
// int main(void)
// {
//     int n;

//     printf("정수 : ");
//     scanf(" %d", &n);
//     while (2 < n)
//     {
//         if (n % )
//     }
// }