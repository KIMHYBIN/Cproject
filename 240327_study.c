
// 문자열과 문자열 함수 챕터11
// #include <stdio.h>
// #define MSG "I am symbolic string constant."
// #define MAXLENGTH 81
// int main(void)
// {
//     char words[MAXLENGTH] = "I am a string in an array.";
//     const char * pt1 = "Something is pointing at me.";
//     puts("Here are some strings:");
//     puts(MSG);
//     puts(words);
//     puts(pt1);
//     words[8] = 'p';
//     puts(words);

//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     printf("%s, %p, %c\n", "We", "are", *"spaces fares");

//     return 0;
// }


// #include <stdio.h>
// #define SLEN 40
// #define LIM 5
// int main(void)
// {
//     const char *mytalents[LIM] = {"Adding numbers swiftly",
//                                   "Multiplying accurately",
//                                   "Stashing data",
//                                   "Following instructions to the letter",
//                                   "Understanding the C language"};
//     char yourtalents[LIM][SLEN] = {"Walking in a straight line",
//                                    "Sleeping", "Watching television",
//                                    "Mailing letters", "Reading email"};
//     int i;
    
//     puts("Let's compare talents.");
//     printf("%-36s %-25s\n", "My Talents", "Your Talents");
//     for (i = 0; i < LIM; i++)
//     {
//         printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
//     }
//     printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",
//            sizeof(mytalents), sizeof(yourtalents));

//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     const char * mesg = "섣불리 판단하지 말라!";
//     const char * copy;

//     copy = mesg;
//     printf("%s\n", copy);
//     printf("mesg = %s; &mesg = %p; 값 = %p\n", mesg, &mesg, mesg);
//     printf("copy = %s; &copy = %p; 값 = %p\n", copy, &copy, copy);

//     return 0;
// }


// #include <stdio.h>
// #define STLEN 14
// int main(void)
// {
//     char words[STLEN];

//     puts("문자열을 입력하세요.");
//     fgets(words, STLEN, stdin);
//     printf("당신의 문자열 두 번 (puts(), 그리고 나서 fputs()):\n");
//     puts(words);
//     fputs(words, stdout);
//     puts("다른 문자열을 입력하세요.");
//     fgets(words, STLEN, stdin);
//     printf("당신의 문자열 두 번 (puts(), 그리고 나서 fputs()):\n");
//     puts(words);
//     fputs(words, stdout);
//         puts("Done.");
//         return 0;
// }


// #include <stdio.h>
// #define STLEN 10
// int main(void)
// {
//     char words[STLEN];
//     puts("문자열을 입력하세요 (탈출하려면 빈 행):");
//     while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//     {
//         fputs(words, stdout);
//     }
//     puts("종료.");

//     return 0;
// }


// #include <stdio.h>
// #define STLEN 10
// int main(void)
// {
//     char words[STLEN];
//     int i;

//     puts("문자열을 입력하세요 (탈출하려면 빈 행):");
//     while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//     {
//         i = 0;
//         while (words[i] != '\n' && words[i] != '\0')
//         {
//             i++;
//         }
//         if (words[i] == '\n')
//         {
//             words[i] = '\0';
//         }
//         else
//         {
//             while (getchar() != '\n')
//             {
//                 continue;
//             }
//         }
//         puts(words);        
//     }
//     puts("종료.");
//     return 0;
// }

// gets()
// 문자 최대 개수 필요 없음
// 개행문자를 읽은 후 그냥 버림 -> puts에서 개행을 출력에 추가해주기 때문

// fgets()
// 읽을 문자 최대 개수 필요
// 개행 문자('\n')을 읽어서 문자열에 저장
// 세 번째 전달인자가 필요함

// puts() 개행을 출력에 추가 -> gets에서 개행문자를 읽고 그냥 버리기 때문
// fputs() 개행을 출력에 추가하지 않음



// s_gets라는 함수 만들어보기
// char* s_gets(char* st, int n)
// {
//     char* ret_val;
//     int i = 0;
//     ret_val = fgets(st, n, stdin);
//     if (ret_val)
//     {
//         while (st[i] != '\n' && st[i] != '\0')
//         {
//             i++;
//         }
//         if (st[i] == '\n')
//         {
//             st[i] = '\0';
//         }
//         else{
//             while (getchar() != '\n')
//             {
//                 continue;
//             }
//         }
//     }
//     return ret_val;
// }


// #include <stdio.h>
// int main(void)
// {
//     char side_a[] = "Side A";    
//     char dont[] = {'W', 'O', 'W', '!'};
//     char side_b[] = "Side B";

//     puts(dont);

//     return 0;
// }




// 빙고 문제 풀이 도전! - 힌트: 빙고가 성립되는 줄의 총합은 0이다!
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void print2(int a[5][5]);
int main()
{
    int i;
    int j;
    int randNum;
    int userNum;
    int count;
    int temp[5][5];
    int bingo[5][5];
    srand((unsigned int)time(NULL));
    
    while (count < 25)
    {
        randNum = (rand () % 25) + 1;

        if (temp[i][j] != randNum)
        {
            temp[i][j] = randNum;
            bingo[i][j] = randNum;
        }
        else
        {
            continue;
        }


        // for (i = 0; i < 5; i++)
        // {            
        //     for (j = 0; j < 5; j++)
        //     {
                
        //         if (temp[i][j] != randNum)
        //         {
                    
        //         }
                
        //         // printf("%5d", temp[i][j]);
        //         // printf("%5d", bingo[i][j]);
        //     }
        // }
        print2(temp);
        printf("\n");
        print2(bingo);
        printf("\n");
        

        printf("빙고판에 있는 숫자 중 하나를 입력하세요 : ");
        scanf(" %d", &userNum);
        if (temp[i][j] == userNum)
        {
            bingo[i][j] = 0;
        }
        print2(bingo); 

    }
    return 0;
}

void print2(int a[5][5])
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {            
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}
