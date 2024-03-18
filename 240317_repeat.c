// #include <stdint.h>
// #define SPACE ' '
// int main()
// {
    // char ch;

    // ch = getchar();
    // while (ch != '\n')
    // {
    //     if (ch == SPACE) {
    //         putchar(ch);
    //     }
    //     else {
    //         putchar(ch + 1);
    //     }
    //     ch = getchar();
    // }
    // putchar(ch);



    // int a, b, max;

    // printf("a와 b의 값을 입력하세요.\n");
    // scanf("%d", &a);
    // scanf("%d", &b);
    
    // max = (a > b) ? a : b;
    // printf("더 큰 값은 %d입니다.", max);

//     return 0;
// }


// 복습 문제 p.339~342 (goto부분 제외)
// 3. 오류 수정 - 답지 확인 필요
// #include <stdio.h>
// int main()
// {
//     int weight, height;

//     printf("몸무게는 파운드 단위로, 키는 인치 단위로 입력하시오.\n");
//     scanf("%d %d", &weight, &height);
//     if (weight < 100 && height > 64) {
//         if (height >= 72) {
//             printf("몸무게에 비해 키가 너무 크네요.\n");
//         }
//         else /* if (height < 72 && height > 64) */ { // 그냥 else가 되어야함
//             printf("몸무게에 비해 키가 조금 크네요.\n");
//         }
//     }
//     else if (weight > 300 && height < 48) {
//         /* if (!(height >= 48)) */ {
//             printf("몸무게에 비해 키가 아주 작네요.\n");
//         }
//     }
//     else {
//         printf("이상적인 몸무게입니다.\n");
//     }
//     return 0;    
// }

// 5. 출력값 확인하기
// #include <stdio.h>
// int main()
// {
//     int num;

//     for (num = 1; num <= 11; num++) {
//         if (num % 3 == 0) {
//             putchar('$');
//         }
//         else {
//             putchar('*');
//             putchar('#');
//         }
//         putchar('%');
//     }
//     putchar('\n');
//     return 0;
// }

// 6. 출력값 확인하기
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i < 3)
//     {
//         switch (i++)
//         {
//         case 0 : printf("fat ");
//         case 1 : printf("hat ");
//         case 2 : printf("cat ");
//         default : printf("Oh no!");

//         }
//     putchar("\n");
//     }
//     return 0;
// }

// 7. 오류 수정하기
// #include <stdio.h>
// #include <ctype.h>    // 이 부분 추가해줘야 함
// int main()
// {
//     char ch;
//     int lc = 0;
//     int uc = 0;
//     int oc = 0;

//     printf("분석할 영문 텍스트를 입력하시오(끝내려면 #):\n");
//     while ((ch = getchar()) != '#')
//     {
//         if (islower(ch)) {        // 소문자 카운트
//             lc++;
//         }
//         else if (isupper(ch)) {        // 대문자 카운트
//             uc++;
//         }
//         else {
//             oc++;
//         }
//     }
//     printf("소문자 %d개, 대문자 %d개, 기타 문자 %d개\n", lc, uc, oc);
//     return 0;    
// }

// 8. 출력값 확인하기
// #include <stdio.h>
// int main()
// {
//     int age = 20;

//     while (age++ <= 65) {
//         if ((age % 20) == 0) {
//             printf("%d세입니다. 승진할 나이입니다.\n", age);
//         }
//         if (age == 65) {        // 대입 연산자와 관계 동등 연산자 구분하기!
//             printf("%d세입니다. 퇴직할 나이입니다.\n", age);
//         }
//     }
//     return 0;
// }


// 9~10. continue나 goto 제외하고 같은 출력값 나오도록 수정
// q
// c 
// h 
// b 
// #include <stdio.h>
// int main()
// {
//     char ch;

//     while ((ch = getchar()) != '#') {
//         if (ch == '\n') {
//             continue;;
//         }
//         printf("1단계\n");
//         if (ch == 'c') {
//             continue;;
//         }
//         else if (ch == 'b') {
//             break;
//         }
//         else if (ch == 'h') {
//             goto laststep;
//         }
//         printf("2단계\n");
//     laststep: printf("3단계\n");
//     }
//     printf("종료!\n");
//     return 0;    
// }


// 10번 내가 바꾼 답 ㅋㅋㅋㅋㅋ
// #include <stdio.h>
// int main(void)
// {
//     char ch;

//     while ((ch = getchar()) != '#')
//     {
//         switch (ch)
//         {
//         case '\n' :
//             break;
//         case 'c' :
//         case 'b' :
//             printf("1단계\n");
//             break;
//         case 'h' :
//             printf("1단계\n3단계\n");
//             break;
//         default:
//             printf("1단계\n2단계\n3단계\n");
//             break;
//         }
//     }
//     printf("종료!\n");
//     return 0;    
// }


// 교재 답안 - h 입력했을 때 출력값이 이상한데?
// #include <stdio.h>
// int main(void)
// {
//     char ch;

//     while ((ch = getchar()) != '#')
//     {
//         if (ch != '\n') {
//             printf("1단계\n");
//             if (ch == 'b') {
//                 break;
//             }
//             else if (ch != 'c') {
//                 if (ch != 'g') {
//                     printf("2단계\n");
//                     printf("3단계\n");
//                 }
//             }
//         }
//     }
//     printf("종료!\n");
//     return 0;    
// }



// 챕터6 프로그래밍 연습 p.280~
// 04. 중첩 루프 사용하여 결괏값 출력하기 - 03번 문제 활용하면 금방 풀린대,,,생각해보자

// #include <stdio.h>
// int main()
// {
//     const int U = 6;
//     char ch;
//     int i;

//     for (i = 1; i < U + 1; i++) {
//         for (ch = 'A'; ch < ('A' + i*2); ch = ch + i) {    
//             printf("%c", ch);                  
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void) 
// {
//     const int U = 7;
//     int i, j;
//     char ch;

//     for (i = 1; i < U; i++) {
//         for (ch = 'A'; ch > U - i; ch++) { 
//             printf("%c", ch);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void) 
// {
//     const int U = 21;
//     int i;
//     char ch;

//     for (i = 1; i < 7; i++) {
//         for (ch = 'A'+(U -i); ch < 'A'+U+i; ch++) {
//             printf("%c", ch);
//         }
//         printf("\n");
//     }
//     return 0;
// }

