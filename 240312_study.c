// #include <stdio.h>

// int main()
// {
//     printf("char형의 크기: %zd바이트\n", sizeof(char));
//     printf("char*형의 크기: %zd바이트\n", sizeof(char*));
//     printf("int형의 크기: %zd바이트\n", sizeof(int));
//     printf("short형의 크기: %zd바이트\n", sizeof(short));
//     printf("long형의 크기: %zd바이트\n", sizeof(long));
//     printf("long long형의 크기: %zd바이트\n", sizeof(long long));
//     printf("float형의 크기: %zd바이트\n", sizeof(float));
//     printf("double형의 크기: %zd바이트\n", sizeof(double));
//     printf("long double형의 크기: %zd바이트\n", sizeof(long double));
//     return 0;
// }

// 프로그램이 실행 전에 코드에서 구문 오류가 나는 경우 - 신택스 에러
// -> main 함수, entry point
// 변수의 저장 공간(=크기)를 미리 지정해줄 수 있음 -> 이걸 type이라고 함
// type에는 실수, 정수, 문자형이 있음

// 프로그램 실행 도중 발생하는 에러: 런타임 에러

// 문자열 p.119~
//talkback.c -- 수다스럽지만, 정보를 주는 프로그램
// #include <stdio.h>
// #include <string.h>    // strlen() 프로토타입을 사용하기 위해
// #define DENSITY 62.4    // 신체밀도(입방피트 당 파운드 수) <- 중요한 내용을 표시할 때 전처리기 사용

// int main(void)
// {
//     float weight, volume;
//     int size, letters;
//     char name[40];    // name은 영문자로 40개를 넣을 수 있는 배열이다
// // type  name len 순서
// //자료형 변수명 크기 순서로 선언

//     printf("안녕! 이름이 뭐예요?\n");
//     scanf("%s", name);    // scanf에서 배열을 넣을 때는 & 빼고 변수 이름만 쓴다 
//     printf("%s씨, 몸무게는 몇 파운드나 나가요?\n", name);
//     scanf("%f", &weight);
//     size = sizeof name;    // 입력 받은 name이 확보한 크기
//     letters = strlen(name);    // 입력 받은 name의 길이(갯수)
//     volume = weight / DENSITY;
//     printf("옳거니, %s씨의 몸은 %2.2f입방피트를 차지합니다.\n", name, volume);
//     printf("그리고 이름이 %d글자니까,\n", letters);
//     printf("저장하려면 %d바이트가 필요합니다.\n", size);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define PRAISE "You are an extraordinary being."
// int main()
// {
//     char name[40];
//     printf("실례지만 성함이 어떻게 되시는지?\n");
//     scanf("%s", name);
//     printf("반갑습니다, %s씨. %s\n", name, PRAISE);

//     return 0;
// }

// #include <stdio.h>
// #define PI 3.14159
// int main(void)
// {
//     float area, circum, radius;

//     printf("피자의 반지름이 얼마냐?\n");
//     scanf("%f", &radius);
//     area = PI * radius * radius;
//     circum = 2.0 * PI * radius;
//     printf("피자의 기본 매개변수는 다음과 같다:\n");
//     printf("circumference = %1.2f, area = %1.2f\n", circum, area);

//     return 0;
// }

// define과 const의 차이:
// d는 전처리(함수 입력 전에 선언). con은 함수 내에서 그때그때 사용 가능

// #include <stdio.h>
// #include <limits.h>
// #include <float.h>
// int main(void)
// {
//     printf("이 시스템이 표현하는 수의 한계:\n");
//     printf("int형 최댓값: %d\n", INT_MAX);
//     printf("long long형 최솟값: %lld\n", LLONG_MIN);
//     printf("이 시스템에서 1바이트는 %d비트이다.\n", CHAR_BIT);
//     printf("double형 최댓값: %e\n", DBL_MAX);
//     printf("float형 최솟값: %f\n", FLT_MIN);
//     printf("float형 정밀도는 소수점 아래 %d자리까지\n", FLT_DIG);
//     printf("float형 epsilon = %e\n", FLT_EPSILON);

//     return 0;
// }

// #include<stdio.h>
// #define PAGES 959
// int main(void)
// {
//     printf("*%d*\n", PAGES);
//     printf("*%2d*\n", PAGES);
//     printf("*%10d*\n", PAGES);
//     printf("*%-10d*\n", PAGES);

//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     const double RENT = 3852.99;

//     printf("*%f*\n", RENT);
//     printf("*%e*\n", RENT);
//     printf("*%4.2f*\n", RENT);
//     printf("*%3.1f*\n", RENT);
//     printf("*%10.3f*\n", RENT);
//     printf("*%10.3E*\n", RENT);
//     printf("*%+4.2f*\n", RENT);
//     printf("*%010.2f*\n", RENT);

//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     printf("%x %X %#x\n", 31, 31, 31);
//     printf("**%d**% d**% d**\n", 42, 42, -42);
//     printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);

//     return 0;
// }

// #include <stdio.h>
// #define BLURB "Authentic imitation!"
// int main(void)
// {
//     printf("[%2s]\n", BLURB);
//     printf("[%24s]\n", BLURB);
//     printf("[%24.5s]\n", BLURB);
//     printf("[%-24.5s]\n", BLURB);

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     printf("이것은 긴 문자열을 출력하는 ");
//     printf("첫 번째 방법이다.\n");
//     printf("이것은 긴 문자열을 출력하는 \
// 두번째 방법이다. \n");
//     printf("이것은 긴 문자열을 출력하는 "
//     "가장 새로운 방법이다.\n");
    
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     unsigned width, precision;
//     int number = 256;
//     double weight = 242.5;

//     printf("필드 너비를 입력하시오: \n");
//     scanf("%d", &width);
//     printf("number:%*d:\n", width, number);
//     printf("필드 너비와 정밀도를 함께 입력하시오:\n");
//     scanf("%d %d", &width, &precision);
//     printf("Weght = %*.*f\n", width, precision, weight);
//     printf("종료!\n");

//     return 0;
// }


// 복습문제 p.163~
// 2번
// #include <stdio.h>
// #define Q "\"그의 햄릿은 저속하지 않고 재미있었다.\""
// int main()
// {
//     printf("그는 그 그림을 $%2.2f에 팔았다.\n", 2.345e2);
//     printf("%c%c%c\n", 'H', 105, '\41');
//     printf("%s\n는 %d 문자이다.\n", Q, strlen(Q));
//     printf("%2.2e은 %2.2f과 같으냐?\n", 1201.0, 1201.0);

//     return 0;
// }

// 4번 에러 찾기
// #include <stdio.h>
// #define B "거짓말"
// #define X 10
// int main()
// {
//     char name[10];    // 다 썼는데 배열 선언을 안 해서 값이 안 나왔다. [원소 수] 잊지 말기!
//     int age, xp;

//     printf("이름이 뭡니까? ");
//     scanf("%s", name);
//     printf("좋아요, %s씨, 나이는 얼마죠?\n", name);

//     scanf("%d", &age);
//     xp = age + X;
//     printf("%s! 최소한 %d세는 되어 보이는데.\n", B, xp);

//     return 0;
// }


// 5번. 정해진 결괏값을 출력하기 위한 코드 작성하기

// #include <stdio.h>
// #define BOOK "전쟁과 평화"
// int main(void)
// {
//     float cost = 12.99;
//     float percent = 80.0;
//     printf("신간 \"%s\"를 $%.2f에 드립니다.\n", BOOK, cost);
//     printf("그것은 정가의 %f%% 가격입니다.\n", percent);

//     return 0;
// }

// 6~10번, 12번 패스;
// 11. 잘못된 부분 수정하기
// #include <stdio.h>
// int main()
// {
//     printf("The double type is %zd byte...\n", sizeof(double));
//     return 0;
// }

// 프로그래밍 연습 p.166~167
// 01~02. 이름 요청 후 성 요청하고 성, 이름 순서로 출력하는 프로그램 작성
// #include <stdio.h>
// int main()
// {
//     char first[30], last[10];

//     printf("이름을 입력해주세요: \n");
//     scanf("%s", first);
//     printf("성을 입력해주세요: \n");
//     scanf("%s", last);

//     printf("입력하신 풀네임은 %s %s입니다.\n", last, first);

//     printf("이름: \"%s\"\n", first);
//     printf("이름: \"%20s\"\n", first);
//     printf("이름: \"%-20s\"\n", first);
//     // printf("이름: ");    // 무슨 뜻인지 모르겠음...

//     return 0;
// }

// 03. 하나의 부동소수점 수를 소수점 표기로 출력 후 지수 표기로 출력하는 프로그램 작성
// #include <stdio.h>
// int main()
// {
//     float a = 21.290;
//     printf("입력된 것은 %.1f 또는 %.2e이다.\n", a, a);    // 소숫점 자릿수를 정해주면 자동으로 반올림 후 그 뒤는 버림
//     printf("입력된 것은 %+2.3f 또는 %.3E이다.\n", a, a);
//     return 0;
// }

// 04. 키 입력 받아서 미터와 센티미터로 나누기. 했던 거라 패스.


// 05. 다운로드 속도가 초당 몇 메가비트인지, 파일 크기가 몇 메가바이트인지 입력을 요청하는 프로그램 작성하기.
// 1바이트는 8비트. float형 사용. 나눗셈 사용. 속도, 파일 크기, 다운로드 시간이라는 값 모두 소숫점 두 자리까지 출력.

// #include <stdio.h>
// int main()
// {
//     float MB;
//     double Mbs, time;

//     printf("다운로드 속도가 초당 몇 메가비트인지 입력하라 : ");
//     scanf("%lf", &Mbs);
//     printf("파일 크기가 몇 메가바이트인지 입력하라 : ");
//     scanf("%f", &MB);

//     time = (MB*8)/Mbs;    // 메가바이트에 8을 곱해 메가비트 단위로 통일시킨 후 속도로 나눔

//     printf("초당 %.2lf 메가비트, %.2f 메가바이트 파일을\n", Mbs, MB);
//     printf("%.2lf초에 다운로드 한다.\n", time);

//     return 0;
// }


// 06. 이름 요청 후 성을 요청. 책에 나온 대로 출력.
//  #include <stdio.h>
//  #include <string.h>
// int main()
// {
//     char first[30], last[30];
//     int F, L;

//     printf("이름을 입력하세요 : ");
//     scanf("%s", first);
//     printf("성을 입력하세요 : ");
//     scanf("%s", last);

//     F = strlen(first);
//     L = strlen(last);

//     printf("%s %s\n", last, first);
//     printf("%7d %8d\n", L, F);
//     printf("%-7d %-8d\n", L, F);
//     // printf("%7d %7d\n", sizeof first, sizeof last);

//     return 0;
// }

// 07번 패스

// 08. 주행한 거리는 마일. 소비한 휘발유의 양은 갤런. 갤런 당 마일 수 계산 후 소숫점 1자리까지 출력.
// 1갤런은 약 3.785리터. 1마일은 약 1.609킬로미터. 100킬로미터 당 리터 수로 변환. const 사용하기.
// #include <stdio.h>
// int main()
// {
//     const float g = 3.785;
//     const float m = 1.609;
//     float k, l, kl, mg;
    
//     printf("주행 거리를 입력하세요 : ");
//     scanf("%f", &k);
//     printf("소비한 휘발유의 양을 입력하세요 : ");
//     scanf("%f", &l);

//     kl = k/l;
//     printf("갤런 당 마일 수는 %.1f 입니다.\n", kl);

//     mg = (m/g)*100;
//     printf("100킬로미터 당 리터 수로 변환하면 값은 %.1f 입니다.\n", mg);    // 값은 출력했는데 이게 답인지는 모르겠다;

//     return 0;
// }


// 연산자 p.168~
// #include <stdio.h>
// #define ADJUST 7.31
// int main(void)
// {
//     const double SCALE = 0.333;
//     double shoe, foot; 

//     printf("신발 사이즈(남자용)\t발길이\n");
//     shoe = 3.0;
//     while (shoe < 18.5)
//     {
//         foot = SCALE * shoe * ADJUST;
//         printf("%10.1f %15.2f 인치\n", shoe, foot);
//         shoe = shoe + 1.0;
//     }
//     printf("그 신발이 발에 맞는다면, 그것을 신으세요.\n");

//     return 0;
// }


// #include <stdio.h>
// #define SQUARES 64
// int main(void)
// {
//     const double CROP=2E16;
//     double current, total;
//     int count = 1;

//     printf("네모칸     추가      누계      ");
//     printf("세계 수확량과의\n");
//     printf("번  호     낱알 수      낱알 수      ");
//     printf("상대 비율\n");
//     total = current = 1.0;
//     printf("%4d %13.2e %12.2e %12.2e\n", count, current, 
//     total, total/CROP);
//     while (count<SQUARES)
//     {
//         count = count + 1;
//         current = 2.0 * current;
//         total = total + current;
//         printf("%4d %13.2e %12.2e %12.2e\n", count, current, 
//     total, total/CROP);
//     }
//     printf("이제 끝이다.\n");

//     return 0;
// }


// 증가 연산, 감소 연산
// #include <stdio.h>
// int main(void)
// {
//     int a = 1, b = 1;
//     int a_post, pre_b;

//     a_post = a++;    // 후위 : 기존 값을 먼저 대입한 후 1을 더함
//     pre_b = ++b;    // 전위: 먼저 연산한 후 값을 사용
//     printf("a  a_post   b   pre_b  \n");
//     printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

//     return 0;
// }


// #include <stdio.h>
// #define MAX 100
// int main()
// {
//     int count = MAX + 1;    // count는 101로 시작

//     while (--count > 0)    // while ()안의 문장까지 수행한 값으로 적용되므로 101-1=100부터 시작
//     // while (count-- > 1)
//     {
//         printf("%d 병의 샘물이 냉장고에 있었네, "
//         "%d 병이!\n", count, count);
//         printf("그 중 한 병을 꺼내 마셨지,\n");
//         printf("%d 병의 샘물이 아직 남았네!\n\n", count-1);
//     }
//     return 0;
// }


// 연습문제
// #include <stdio.h>
// int main()
// {
//     int num1 = 0;
//     int num2 = 10;
//     int result1 = num1++ + num2;
//     printf("result1의 값은 %d입니다.\n", result1);

//     int result2 = ++num1 + num2++;
//     printf("result2의 값은 %d입니다.\n", result2);

//     int result3 = num1-- + num1-- - --num2;
//     printf("result3의 값은 %d입니다.\n", result3);

//     int result4 = num2++ * num1++ - --num2 + num1;
//     printf("result4의 값은 %d입니다.\n", result4);
//     printf("수행 후 num1은 %d, num2는 %d입니다.\n", num1, num2);

//     return 0;
// }

