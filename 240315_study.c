// 반복문, 조건문 p.306~
// #include <stdio.h>
// #define PERIOD '.'
// int main(void)
// {
//     int ch;
//     int charcount = 0;

//     while ((ch = getchar()) != PERIOD)
//     {
//         if (ch != '"' && ch != '\'') {
//             charcount++;
//         }
//     }
//     printf("따옴표는 빼고, 문자 %d개가 들어 있습니다.\n", charcount);

//     return 0;    
// }


// #include <stdio.h>
// #include <ctype.h>
// #include <stdbool.h>
// #define STOP '|'
// int main(void)
// {
//     char c;                 // 현재 읽은 문자
//     char prev;              // 바로 전에 읽은 문자
//     long n_chars = 0L;      // 문자 수
//     int n_lines = 0;        // 라인 수
//     int n_words = 0;        // 단어 수
//     int p_lines = 0;        // 불완전 라인 수
//     bool inword = false;    // c가 여전히 한 단어 안에 속해 있으면 true

//     printf("분석할 영문 텍스트를 입력하시오(끝내려면 |):\n");
//     prev = '\n';        // 완전한 라인을 식별하는 데 사용한다
//     while ((c = getchar()) != STOP)
//     {
//         n_chars++;            // 문자를 카운트한다
//         if (c == '\n') {
//             n_lines++;        // 라인을 카운트한다
//         }
//         if (!isspace(c) && !inword) {    // 공백이 아니면(inword가 false면)
//             inword = true;           // 새 단어를 시작한다
//             n_words++;               // 단어를 카운트한다
//         }
//         if (isspace(c) && inword) {    // c가 공백이면(inword가 true면)
//             inword = false;          // 단어의 끝에 도달했다
//         }
//         prev = c;                   // 문자의 값을 보관한다
//     }
//     if (prev != '\n') {
//         p_lines = 1;
//     }
//     printf("문자 수 = %ld, 단어 수 = %d, 라인 수 = %d,",
//     n_chars, n_words, n_lines);
//     printf("불완전 라인 수 = %d\n", p_lines);

//     return 0;    
// }


// #include <stdio.h>
// #define COVERAGE 350      // 페인트 한 통으로 칠할 수 있는 평방피트
// int main(void)
// {
//     int sq_feet;
//     int cans;

//     printf("페인트로 칠할 면적을 평방피트 단위로 입력하시오:\n");
//     while (scanf("%d", &sq_feet) == 1)
//     {
//         cans = sq_feet / COVERAGE;
//         cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
//         printf("페인트 %d통(%s)을 구입해야 한다.\n", cans,
//         cans == 1 ? "can" : "cans");
//         printf("다음 값을 입력하시오(끝내려면 q):\n");
//     }
//     return 0;
// }

// switch문 p.325~ 
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
//     char ch;

//     printf("알파벳 글자를 입력하시오.\n");
//     printf("그러면 내가\n그 글자로 시작하는 동물 이름을 하나 대겠습니다.\n");
//     printf("글자를 하나 입력하시오(끝내려면 #):\n");
//     while ((ch = getchar()) != '#') {
//         if ('\n' == ch) {
//             continue;
//         }
//         if (islower(ch)) {
//             switch (ch) {
//                 case 'a' :{
//                     printf("argali, 아시아의 야생 양\n");
//                     break;
//                 }
//                 case 'b' :{
//                     printf("babirusa, 말레이 반도의 야생 돼지\n");
//                     break;
//                 }
//                 case 'c' :{
//                     printf("coati, 미국 너구리\n");
//                     break;
//                 }
//                 case 'd' :{
//                     printf("desman, 물에 사는, 두더지 비슷한 동물\n");
//                     break;
//                 }
//                 case 'e' :{
//                     printf("echidna, 바늘두더지\n");
//                     break;
//                 }
//                 case 'f' : {
//                     printf("fisher, 갈색을 띤 담비\n");
//                     break;
//                 }
//                 default : {        // 일치하는 값이 없을 때 출력하는 기본값
//                     printf("에이, 너무 어렵다!\n");
//                 }
//             }        // switch의 끝
//         }
//         else {
//             printf("나는 소문자만 알아듣는다.\n");
//         }
//         while (getchar() != '\n') {
//             continue;
//         }
//         printf("다른 글자를 하나 입력하시오(끝내려면 #):\n");
//     }        // while 루프의 끝
//     printf("안녕!\n");
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     char ch;
//     int a_ct, e_ct, i_ct, o_ct, u_ct;
//     a_ct = e_ct = i_ct = o_ct = u_ct = 0;

//     printf("간단한 영문 텍스트를 입력하시오(끝내려면 #):\n");
//     while ((ch = getchar()) != '#') {
//         switch (ch)
//         {
//         case 'a' :
//         case 'A' : a_ct++; 
//                    break;
//         case 'e' :
//         case 'E' : e_ct++; 
//                    break;
//         case 'i' :
//         case 'I' : i_ct++; 
//                    break;
//         case 'o' :
//         case 'O' : o_ct++; 
//                    break;
//         case 'u' :
//         case 'U' : u_ct++; 
//                    break;
//         default : break;
//         }
//     }
//     printf("모음의 수: A    E    I    O    U\n ");
//     printf("       %4d %4d %4d %4d %4d\n", 
//     a_ct, e_ct, i_ct, o_ct, u_ct);

//     return 0;
// }