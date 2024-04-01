#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int fight(char m_name[], char name[] , int* hp2, int* c_hp2);
int main()
{
    int hp1 = 3000;
    int c_hp1 = 3000;
    int m = 0;
    int n = 0;
    int k = 0;
    int l = 0;
    int count;
    char m_name[10];
    int a;
    char wasd; // 방향키 입력
    int map[25][25] = {0}; //맵 크기
    int i = 0;
    int j = 0; //맵 이동을 위한 변수
    int appear_m; //몬스터 등장 카운트
    srand((unsigned int)time(NULL));
    char mons[28][10] = {{"노주영"}, {"임석현"}, {"황운하"}, {"김혜빈"}, {"조세빈"}, {"김승수"}, {"서훈"}, {"오은지"}, {"이은승"}, {"김영곤"},
                    {"김민아"}, {"권철민"}, {"조대정"}, {"박장미"}, {"박희정"}, {"박민건"}, {"김재신"}, {"김성근"}, {"이동준"}, {"류홍걸"},
                    {"유시온"}, {"황은비"}, {"박선후"}, {"안광민"}, {"이철"}, {"이준호"}, {"김건"}, {"강진영"}};

    char name[10] = {0};
    char boss[10] = {"대복이"};
    scanf("%s", name);

    
    for(m = 0; m < 28; m++)
    {
        for(n = 0; n < 10; n++)
        {
            if(mons[m][n] == name[k])
            {
                count++;
                k++;
            }
            if(count == 10)
            {
                for(n = 0; n<10; n++)
                {
                    mons[m][n] =boss[l];
                    l++;
                }
                l = 0;
            }
        }
        k = 0;
        count = 0;
    }
    map[0][0] = 1;
    printf("%s\n", name);
    for(m = 0; m<25; m++)
        {
            for(l = 0; l < 25; l++)
            {
                printf("%5d", map[m][l]);\
            }
            printf("\n");
        }
    printf("게임을 시작합니다. 조작키를 입력해 주세요(비상탈출'q')\n");
    while((wasd = getchar()) != 'q')
    {
        a = rand()%28;
        if('\n' == wasd)
        {
            continue;
        }
        if(wasd == 'w')
        {
            if(i==0){
                printf("탐험할 수 없는 곳입니다 뒤로 돌아가 주세요.\n");
                i++;
            }
            i--;
            if(map[i][j]==0)
            {
                appear_m = rand()%3;

                if(appear_m == 2)
                {
                    for(m = 0; m<10; m++)
                    {
                        m_name[m] =mons[a][m] ;
                    }
                    n = fight(m_name, name, &hp1, &c_hp1);
                    
                    if(appear_m = 1)
                    {
                        ("누구누구와 전투합니다\n");
                    }
                    else
                    {
                        printf("복이와 전투합니다.\n");
                    }
                }
            }
            else{
                printf("이미 탐험한 곳입니다.\n");
            }
            map[i][j]=1;
        }
        if(wasd == 'a')
        {
            if(j==0){
                printf("탐험할 수 없는 곳입니다 뒤로 돌아가 주세요.\n");
                j++;
            }
            j--;
            if(map[i][j]==0)
            {
                appear_m = rand()%3;
                if(appear_m == 2)
                {
                    printf("괴물이다!!\n");
                }
            }
            else{
                printf("이미 탐험한 곳입니다 뒤로 돌아가 주세요.\n");
            }
            map[i][j]=1;
        }
        if(wasd == 's')
        {
            if(i==24){
                printf("탐험할 수 없는 곳입니다 뒤로 돌아가 주세요.\n");
                i--;
            }
            i++;
            if(map[i][j]==0)
            {
                appear_m = rand()%3;
                if(appear_m == 2)
                {
                    printf("괴물이다!!\n");
                }
            }
            else{
                printf("이미 탐험한 곳입니다 뒤로 돌아가 주세요.\n");
            }
            map[i][j]=1;
        }
        if(wasd == 'd')
        {
            if(j==24){
                printf("탐험할 수 없는 곳입니다 뒤로 돌아가 주세요.\n");
                j--;
            }
            j++;
            if(map[i][j]==0)
            {
                appear_m = rand()%3;
                if(appear_m == 2)
                {
                    printf("괴물이다!!\n");
                }
            }
            else{
                printf("이미 탐험한 곳입니다 뒤로 돌아가 주세요.\n");
            }
            map[i][j]=1;
        }
        for(m = 0; m<25; m++)
        {
            for(l = 0; l < 25; l++)
            {
                printf("%5d", map[m][l]);\
            }
            printf("\n");
        }
    }


    return 0;
}

int fight(char m_name[],char name[], int* hp, int* c_hp)
{

    int m_hp;
    int atk_user;
    int atk_m;
    int item;
    int u_sel; // 유저 행동 결정값 ( choice )

    m_hp = 0;
    srand((unsigned int)time(NULL));
    m_hp = *hp*(rand()%3+1);
    atk_user = *c_hp/2*rand()%3+1;
    atk_m = 600000;
    // atk_m = hp*(rand()%26+5)/10;

    printf("유저 이름 : %s \t  \t",name);
    printf("체력 : %d/%d\n",*c_hp,*hp);
    printf("몬스터 이름 : %s \t \t",m_name);
    printf("체력 : %d\n",m_hp);

    
    while (u_sel != 4)
    {
        printf("\n행동을 결정해 주세요!!\n");
        printf(" 1. 공격 \t 2. 아이템 \t 3. 도주\n");
        

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
                *c_hp = *c_hp+*hp*potion;
                if(*c_hp >= *hp)
                {
                    printf("최대체력까지 회복했습니다.\n");
                    *c_hp = *hp;
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
        *c_hp = *c_hp-atk_m;
        if(*c_hp <= 0 )
        {
            printf("죽어버리다니 한심하구나. 허접~ ♥\n");
            return 3;
        }
    }   
}