// 이름(입력) // 1턴 -> 랜덤 5회 이벤트 1회(1턴 당 1회)
// 1레벨로 시작 // 다음 레벨 되려면 경험치 3만이 필요
// 2레벨부터 경험치는 1.8배~2.5배 랜덤
// 현재 레벨, 경험치 총 수치, 현재 수치가 모두 보이게 구성하기
// 발생하는 경험치는 -3500 ~ +3500 으로 1회당 랜덤 발생
// 이벤트는 발생한 경험치의 1.0배수~5.0배수 랜덤 발생
// 1턴 결과 사용자에게 보여준 후 다음 턴 진행 여부 묻고 (y/n)
// 99레벨이 되면 끝! 몇 턴 만에 성공했는지 보여주고 축하 메시지 출력
//  경험치 수치가 계속 마이너스되어 1레벨 이하 되면 배드엔딩

// 변수: 사용자 이름, 턴, 랜덤 수치(5번), 이벤트, (현재)레벨, 
// 발생한 경험치, 현재 경험치, 총 경험치, 

// 1 count 당 new_EXP 발생 (-3500 ~ +3500 랜덤)
// 5 count 후 event 발생. 1 turn 당 1 event
// event = 발생한 경험치의 1.0~5.0배수
// 발생한 경험치? 5카운트 동안 생긴 new_EXP의 합인가??

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(void)
// {
//     char NAME[40];
//     int a = 1;
//     int NUM;    // 턴을 돌리기 위한 랜덤 횟수
//     int TURN = 1;    // 턴 수
//     int EXP1;    // 한 턴에 발생한 총 경험치 수 (이벤트까지 더한 경험치 양)
//     int EXP2;    // 매번 발생하는 경험치 양 (랜덤 5번 돌려서 나온 경험치 양)
//     int EXP3;    // 누적 경험치. 현재까지의 총 경험치 양
//     int MEXP1;    // 다음 레벨에 필요한 경험치 양 (1.8~2.5배 하고 난 후의 경험치 양)
//     int MEXP2;    // 레벨 다운 됐을 때 이전 레벨의 경험치 양(경험치가 줄어들면 다음 레벨에 도달하기 위한 경험치도 달라지니까)
//     int LEVEL;    // 현재 레벨
//     int i;    // 다음 레벨 업을 위해 필요한 총 경험치 (이전 경험치에 곱해주는 랜덤 수)
//     float EVENT;    // 이벤트 


// EXP1 = EXP1 + E; // 
// EXP3 = EXP3 + EXP1;
// if (EXP3 > 0)

// if (MEXP1 < EXP3)    // 다음 레벨에 필요한 경험치의 양보다 현재 총 경험치가 많으면
// LEVEL++;    // 레벨 업!
// MEXP2 = MEXP1;    // 레벨이 올라갔으니 이전 레벨의 경험치 양도 올라간 레벨에 맞춰 저장
// MEXP1 = MEXP1*i// 그 다음 레벨 경험치

// else if (MEXP1 > EXP3)    // 이전 레벨 경험치 양보다 현재 총 경험치가 적을 때 
// LEVEL--;
// TURN++;

// if (LEVEL < 1)
// printf("죽었다");

// if (LEVEL == 99)
// printf("%d턴 만에 만렙 달성!", TURN);

// else
// printf("다음 턴으로!");


//     printf("사용자 이름을 입력해주세요 : ");
//     scanf("%s", NAME);

//     while (scanf("%d", &a) == 1) {
//         i = (float) (rand () % 7 + 18) / 10;
//         EVENT = (float) (rand () % 40 + 10) / 10;
        
//         for (NUM = 1; NUM < 6; NUM++) {
//             srand((unsigned int)time(NULL));
//             EXP2 = (rand () % 7000) - 3500;
//             EXP1 = EXP1 + EXP2;
//             EXP2 = 0;
//         }
//         EXP1 = EXP2*NUM*EVENT;
//         EXP3 = EXP3 + EXP1;
//             if (MEXP1 < EXP3) {
//                 LEVEL++;                
//                 MEXP1 = MEXP1*i;
//                 MEXP2 = MEXP1;
//                 printf("레벨 업! 현재 레벨은 %d 입니다.\n", LEVEL);
//             }
                
//             if (LEVEL == 99) {
//                 printf("~~Happy Ending~~ %d턴 만에 만렙 달성!\n", TURN);
//                 break;
//             }
//             // else if (MEXP1 > EXP3) {
//             // LEVEL--;
//             // if (LEVEL < 1) {
//             //     printf("~~Bad Ending~~ 게임이 종료되었습니다.\n");
//             //     break;
//             // }
//             // }
//         if (MEXP1 > EXP3) {
//             LEVEL--;
//             if (LEVEL < 1) {
//                 printf("~~Bad Ending~~ 게임이 종료되었습니다.\n");
//                 break; }
//         TURN++;
//         printf("%d턴 || %d레벨 || 현재 경험치 %d || 총 경험치 %d\n", 
//         TURN, LEVEL, EXP3, MEXP1);
        
//     }
//     return 0;   
// }


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    char NAME[40];
    int NEXT = 1;
    int NUM;    // 턴을 돌리기 위한 랜덤 횟수
    int TURN = 0;    // 턴 수
    int EXP1 = 0;    // 한 턴에 발생한 총 경험치 수 
    int EXP2;    // 매번 발생하는 경험치 양 (랜덤 5번 돌려서 나온 경험치 양)
    long long EXP3 = 0;    // 누적 경험치. 현재까지의 총 경험치 양
    long long MEXP1 = 30000;    // 다음 레벨에 필요한 경험치 양 (1.8~2.5배 하고 난 후의 경험치 양)
    long long MEXP2 = 0;    // 레벨 다운 됐을 때 이전 레벨의 경험치 양(경험치가 줄어들면 다음 레벨에 도달하기 위한 경험치도 달라지니까)
    long long MEXP3 = 0;
    int LEVEL = 1;    // 현재 레벨
    int i;    // 다음 레벨 업을 위해 필요한 총 경험치 (이전 경험치에 곱해주는 랜덤 수)
    float EVENT;
    srand((unsigned int)time(NULL));

    printf("사용자 이름을 입력해주세요 : ");
    scanf("%s", NAME);

    printf("\n== 시작 : %d턴 || 레벨 %d || 현재 경험치 %lld || 총 경험치 %lld ==\n",
        TURN, LEVEL, EXP3, MEXP2);   
    
    printf("1. 턴을 진행한다. 2. 턴을 그만둔다.\n숫자 입력 : ");
    while (scanf("%d", &NEXT) == 1) {
        TURN++;
        
        for (NUM = 1; NUM < 6; NUM++)
        {        
        EXP2 = (rand () % 7000) - 3500;
        printf("%d턴에 발생한 %d경험치는 %d입니다.\n", TURN, NUM, EXP2);
        EXP1 = EXP1 + EXP2;
        }

        EVENT = (float) (rand () % 40 + 10) / 10;
        printf("(이번 턴에서 발생한 이벤트는 %.1f배입니다.)\n", EVENT);
        EXP1 = EXP1*EVENT;
        EXP3 = EXP3 + EXP1;
        EXP1 = 0;

        printf("\n== 현재 %d턴 || 레벨 %d || 현재 경험치 %lld || 총 경험치 %lld ==\n", 
            TURN, LEVEL, EXP3, MEXP1); 

        if (EXP3 >= MEXP1) {      
            for (MEXP1 = MEXP1; MEXP1 < EXP3; MEXP1*i) {               
            printf("\n레벨이 올랐습니다! 총 경험치도 증가했습니다.\n");            
            i = (float) (rand () % 7 + 18) / 10;   
            MEXP3 = MEXP2;
            MEXP2 = MEXP1;
            MEXP1 = MEXP1*i;
            ++LEVEL;
            printf("\n== 현재 %d턴 || 레벨 %d || 현재 경험치 %lld || 총 경험치 %lld ==\n", 
            TURN, LEVEL, EXP3, MEXP1);
            }
            if (LEVEL == 99) {
                printf("\n~Happy Ending~\n>>만렙 달성! 축하합니다!<<\n");
            }
        }
        if (EXP3 < MEXP1) {
            if (EXP3 < 0) {
                printf("\n~Bad Ending~\n>>게임이 종료되었습니다.<<\n");
                break;
            }
            else if (EXP3 > 0) {
                continue;
            }
            else if (EXP3 <= MEXP2) {
                printf("레벨이 다운되었습니다. 총 경험치도 감소했습니다.\n");
                LEVEL--;
                printf("\n== 현재 %d턴 || 레벨 %d || 현재 경험치 %lld || 총 경험치 %lld ==\n", 
                TURN, LEVEL, EXP3, MEXP3);
            }
            printf("\n1. 턴을 진행한다. 2. 턴을 그만둔다.\n숫자 입력 : ");
        }                  
    }
    return 0;
}