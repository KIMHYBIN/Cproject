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
    int next; //턴 진행
    int next1; //턴 진행 입력
    int i; // 배열 반복문 위한 변수
    float exp[100]; // 1~99레벨까지 경험치양 저장

    srand((unsigned int)time(NULL));    // 겹치지 않는 랜덤 숫자 출력을 위해 사용
    exp1 = 0; 
    exp3 = 0;
    level = 1;
    turn = 0;
    exp[0]= 0;
    exp[1]= 30000;    // 레벨 1일 때 총 추가 경험치는 30000으로 시작
    for(i = 2; i < 100; i++){
        exp[i]= exp[i-1] * ((float)(rand()%7)+18)/10;    // 레벨이 오를 때마다 추가 경험치가 1.8~2.5배로 랜덤 증가 
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
            exp2 = (rand()%7000)-3500;    // 1턴 당 생성되는 5번의 랜덤 경험치
            exp1 = exp1 + exp2;    // 랜덤 경험치들을 모두 더해줌
            printf("던전에서 경험치를 얻습니다. %d구역 경험치 : %d\n", num, exp2);
        }
        event = (float)(rand()%40+10)/10;    // 5번의 랜덤 경험치들을 합하여 1.0~5.0배 곱해줌
        printf("이벤트가 발생하였습니다. 이번 던전에서 얻은 경험치를 %.1f배 합니다.\n", event);
        exp1 = exp1 * event;    // 한 턴 당 종 추가 경험치
        exp3 = exp3 + exp1;    // 추가 경험치를 합친 총 누적 경험치
        printf("이번 던전에서 얻은 총 경험치 : %d\n", exp1);
        exp1 = 0;    // 추가 경험치 초기화
        turn++;
        if(exp3 >= exp[level])    // 각 레벨 별 경험치 양보다 누적 경험치가 많거나 같을 때
        {
            exp3 = exp3 - exp[level];    // 누적 경험치에서 레벨 별 경험치 빼주기
            level++;
            printf("레벨업 했습니다 현재 레벨은 %d입니다.\n", level);
            if(exp3 >= exp[level])
            {
                // exp3 = exp3 - exp[level];
                level++;
                printf("보물을 얻었습니다. 레벨이 두번이나 올랐습니다!!! 현재 레벨은 %d입니다.\n", level);
            }
            if(level == 10)
            {
                printf("YOU WIN!!! %d레벨이 되었습니다. %d턴을 소모하였습니다.\n", level, turn);
                break;
            }
        }
        else if(exp3 < 0)
        {
            level--;
            exp3 = exp[level] + exp3;
            printf("이런! 레벨이 다운되었습니다. 현재 레벨은 %d입니다.\n", level);
            if(level <= 0)
            {
                printf("YOU DIE... %d턴을 소모하였습니다.\n", turn);
                break;
            }
            if(exp3 < 0)
            {
                level--;
                exp3 = exp[level] + exp3;
                printf("이런이런! 레벨이 두번이나 다운되었습니다... 현재 레벨은 %d입니다.\n", level);
            }
            if(level <= 0)
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
        printf("레벨 : %d 턴 : %d 총 경험치 : %.1f 보유 경험치 : %d \n", level, turn, exp[level], exp3);
        printf("숫자를 입력하면 다음 던전을 탐색합니다. (탈출할려면q) : \n");
        next = scanf("%d", &next1);
    }
    printf("게임이 종료되었습니다.\n");
    
    return 0;
}