#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// 전역 변수들 ( 밑의 함수를 돌리기 위해 임시로 지정해 놓은 값들 )

int hp = 3000;
int c_hp = 2500;
int m_hp;
int atk_user;
int atk_m;
int item;
char name[40] = "노주영";
char m_name[40] = "zl존최GANG_MR_BOK_E";

// 승리시 리턴값 1 , 도주시 2, 죽을시 3,  [ Bok-E 승리시 4 ]

// 현재 유저 체력 및 몬스터 체력, 공격력을 따로 정의하지 안았음!!

int main(void)
{
    m_hp = 0;
    srand((unsigned int)time(NULL));
    m_hp = hp*(rand()%3+1);
    atk_user = c_hp/2*rand()%3+1;
    atk_m = 600000;
    // atk_m = hp*(rand()%26+5)/10;

    printf("유저 이름 : %s \t  \t",name);
    printf("체력 : %d/%d\n",c_hp,hp);
    printf("몬스터 이름 : %s \t \t",m_name);
    printf("체력 : %d\n",m_hp);


    while ( 1 )
    {
        int u_sel; // 유저 행동 결정값 ( choice )
        printf("\n행동을 결정해 주세요!!\n");
        printf(" 1. 공격 \t 2. 아이템 \t 3. 도주\n");
        scanf("%d",&u_sel);

        // 1. 공격 선택시
        if (u_sel == 1)
        {
            printf("\"指.銃\"\n");
            printf("데미지!! 뭐뭐퍼센트1!1\n");
            m_hp = m_hp-atk_user;
            if(m_hp <= 0)
            {
                printf("괴물 DIE\n");
                return 1;
            }
        }
        
        // 2. 아이템
        else if (u_sel == 2)
        {
            int item_sel; // 아이템 선택 값
            int letmealone = 99999999; // 만렙 무기
            printf("행동을 결정해 주세요!!\n");
            printf("1. 포션\t2.공격 아이템\t3.처음으로");
            scanf("%d",&item_sel);

            // 아이템 1번 선택
            if(item_sel == 1)
            {
                float potion = (float)((rand()%6+3)/10);
                printf("포션을 사용하여 회복했습니다\n");
                c_hp = c_hp+hp*potion;
                if(c_hp >= hp)
                {
                    printf("최대체력까지 회복했습니다.\n");
                    c_hp = hp;
                }
            }

            // 아이템 2번 선택
            else if(item_sel == 2)
            {
                printf("당신의 의지로 구현된 불러온 WIND가 ENEMY을 DISTORY.\n");
                printf(" 맥댐!!!\n");
                m_hp = m_hp - letmealone;
                if(m_hp <= 0)
                {
                    printf("괴물 DIE\n");
                    return 1;
                }
            }
            else if(item_sel == 3)
            {
                printf("다시 선택지로 돌아갑니다\n");
                continue;
            }
            else
            {
                printf("올바른 값을 다시 입력해주세요!\n");
                continue;
            }
        }
        else if(u_sel == 3)
        {
            printf("빤스까지 벗고 줄기차게 도망갔습니다...\n");
            return 2;
        }
        else
        {
            printf("올바른 값을 다시 입력해주세요!\n");
            continue;
        }
        printf("=================\n");
        printf("BOK_E의 TURN!!\n");

        printf("MR_BOK_E는(은) \"과제제출\"을(를) 사용했다!!\n");
        printf("효과는 엄청났다!!\n");
        printf("Emotional Damage!!\n");
        c_hp = c_hp-atk_m;
        if(c_hp <= 0 )
        {
            printf("죽어버리다니 한심하구나. 허접~ ♥\n");
            return 3;
        }
    }   
}