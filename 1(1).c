#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char name[40]; // 닉네임
    int num; // 랜덤한 게임수 
    float event; // 턴마다 발생하는 이벤트
    int turn; // 턴 수
    int exp1; // 총 추가 경험치
    int exp2; // 매번 발생하는 경험치
    int exp3; // 누적 경험치
    int level; // 레벨
    // int mexp1; // 초기 경험치양 -> 필요 경험치양
    int next; //턴 진행
    int next1; //턴 진행 입력
    int i; // 배열 반복문 위한 변수
    float exp[100]; // 1~99레벨까지 경험치양 저장

    srand((unsigned int)time(NULL));
    exp1 = 0; 
    exp3 = 0;
    // mexp1 = 30000;
    level = 1;
    turn = 0;
    exp[0]= 0;
    exp[1]= 30000;
    for(i = 2; i<100; i++){
        exp[i]= exp[i-1] * ((float)(rand()%7)+18)/10;
    }

    printf("캐릭터를 생성합니다. 이름을 지어주세요. : ");
    scanf("%s", name);
    printf("게임을 시작하겠습니다. \n");
    printf("숫자를 입력하세요.(게임종료 q) : ");
    next = scanf("%d", &next1);

    while(next == 1)
    {
        for(num = 1; num<6; num++)
        {
            exp2 = rand()%7000-3500;
            exp1 = exp1 + exp2;
            printf("던전에서 경험치를 얻습니다. %d구역 경험치 : %d\n", num, exp2);
        }
        event = (float)(rand()%40+10)/10;
        printf("이벤트가 발생하였습니다. 이번 던전에서 얻은 경험치를 %.1f배 합니다.\n", event);
        exp1 = exp1 * event;
        exp3 = exp3 + exp1;
        printf("이번 던전에서 얻은 총 경험치 : %d\n", exp1);
        exp1 = 0;
        turn++;

        if(exp3 >= exp[level])
        {
            level++;
            exp3 = exp3 - exp[level];
            // mexp1 = exp[level];
            printf("레벨업 했습니다 현재 레벨은 %d입니다.\n", level);
            if(level == 10)
            {
                printf("YOU WIN!!! %d레벨이 되었습니다. %d턴을 소모하였습니다.\n", level, turn);
                break;
            }
        }
        else if(exp3<0)
        {
            level--;
            // mexp1 = exp[level];
            exp3 = exp[level] + exp3;
            printf("이런! 레벨이 다운되었습니다. 현재 레벨은 %d입니다.\n", level);
            if(level == 0)
            {
                printf("YOU DIE... %d턴을 소모하였습니다.\n", turn);
                break;
            }
        }
        else
        {
            printf("레벨업 하지 못하였습니다.\n");
        }
        printf("닉네임 : %s\n", name);
        printf("레벨 : %d 턴 : %d 총 경험치 : %d 보유 경험치 : %d \n", level, turn, exp[level], exp3);
        printf("숫자를 입력하면 다음 던전을 탐색합니다. (탈출할려면q) : \n");
        next = scanf("%d", &next1);
    }
    printf("게임이 종료되었습니다.\n");
    
    return 0;
}
