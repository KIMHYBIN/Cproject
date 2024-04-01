#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int fight(char m_name[],char name[], int* hp, int* c_hp);
int fight_boss(char m_name[],char name[], int* hp, int* c_hp);
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
                appear_m = rand()%5;

                if(appear_m == 2)
                {
                    for(m = 0; m<10; m++)
                    {
                        m_name[m] =mons[a][m] ;
                    }
                    if(m_name)
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


void item_process(int a[3],int b,int c);  // 아이템 증감 함수. -134 line 


int fight(char m_name[],char name[], int* hp, int* c_hp)
{
    int itemlist[3]={3,1,1};
    // 1. 포션   2. 신살검    3.가죽방패  - 중간 무기 어떻게 될지 몰라서 남겨놈
    int m_hp;                               // 몬스터 체력
    int attack;                             // 유저 공격력
    float m_attack;                         // 몬스터 공격력
    int run ;                               // 도망갈 확률
    int item ;                              // 아이템 선택 입력 받는 변수
    int sword = 9999;                       // 필살기 무기
    int defenceshield = 0;                  // 방패 사용 여부 판별
    *c_hp =  *hp;
    srand(time(NULL));
    attack = (*c_hp/2)* (rand()% 4+1) ;      // 유저 공격력 계산
    m_attack = *hp * (rand()% (30+5))/10;    // 몬스터 공격력 계산
    m_hp = *hp * (rand()% 3+1);              // 몬스터 체력 계산
    
    while(1)
    {
        printf("\n당신은 눈 앞에 나타난 미지의 존재에게 대처해야 합니다...\n");
        printf("1. 공격 \t \t 2. 아이템 \t \t 3. 도망간다..\n");
       
        
        int choice = 0;                      // 행동 선택 입력
        scanf("%d", &choice); 
        switch (choice) 
        {
            case 1:                          // 공격 선택시
            {
                printf("당신의 칼날이 적의 몸에 파고듭니다...\n");
                m_hp -= attack;
                printf("적의 체력은 %d 만큼 남았습니다.\n",m_hp);
                if (m_hp <= 0) 
                {
                    printf("괴물은 공허로 다시 돌아갔습니다...\n");
                    return 1;
                }            
                break;
            }

            case 2:                          // 아이템 선택시
            {
                printf("당신은 고심에 빠집니다...\n");
                printf("1. 포션 \t \t 2. 指.銃 \t \t 3. 조잡한 방패 \t \t 4.처음으로...\n");
                scanf("%d", &item); 
                switch (item)
                {
                    case 1:                                        // 포션 선택
                    {
                        printf("포션의 쓴맛이 당신의 온몸으로 퍼져나갑니다...\n");
                        item_process(itemlist,item,0);
                        int temp_hp = *c_hp;                        // 체력 임시저장
                        float potion = *hp * (rand() % (8+3)) / 10; // 포션 회복 변수
                        *c_hp += potion;                            // 회복 됨
                        if ( *c_hp >= *hp )                          // 최대체력 이상 회복시
                        {
                            *c_hp = *hp;
                        }
                        printf("당신은 흩어질것 같은 정신을 다시 붙잡습니다.\n");
                        printf("체력 증가량 %.1f \t\t 체력 %d → %d\n",potion,temp_hp,*c_hp);
                        break;
                        
                    }
                    case 2:                                        // 필살 무기 선택
                    {
                        printf("\"指.銃\"\n");
                        m_hp -= sword;
                        if (m_hp <= 0) 
                        {
                            printf("적이 쓰러집니다...\n");
                            return 1;
                        }
                    }
                    case 3:                                        // 방패 선택
                    {
                        printf("당신은 조잡한 방패를 들어 적의 공격을 막습니다.\n");
                        item_process(itemlist,item,0);
                        defenceshield = 1;
                        break;
                    }
                    case 4:                                        // 아이템 초기화
                    {
                        printf("당신은...다시..생각해보기로 합니다...\n");
                        continue;
                    }
                    default:
                        printf("좋지 않은 선택같습니다...\n");
                        printf("다시 한번 더 생각해 보기로 합니다.\n\n\n");
                        continue;
                
                }
                break;
            }

            case 3:                           // 도주 선택시
            {    
                run = rand()%10;
                if ( run < 3)
                {
                    printf("도망에 성공했습니다.\n");
                    return 2;
                }
                else
                {
                    printf("당신은 적의 시야로부터 달아나려 했지만,");
                    printf(" 적의 시야로부터 벗어날 수는 없었습니다...\n");
                    printf(" === 강제 전투에 돌입합니다 === \n");
                    break;
                }
                
                
            }
            default:                          // 잘못 입력시
            {    
                printf("좋지 않은 선택같습니다...\n");
                printf("다시 한번 더 생각해 보기로 합니다.\n\n\n");
                continue;
            }
        }
        printf("\n적의 턴.\n");
        printf("%s의 공격!\n",m_name);
        if ( defenceshield == 1)
        {
            *c_hp -= m_attack /2;
            printf("방패를 사용해 치명상을 피했습니다.\n");
        }
        else
        {
            *c_hp -= m_attack;
            printf("적의 공격이 당신의 살갗을 파고 듭니다.\n");
        }
        
        
        if (*c_hp <=0)
        {
            printf("YOU DIE...\n");
            return 3;
        }
        else
        {
            printf("체력이  %d 남았습니다...\n",*c_hp);
        }
    } 


    return 0;

}

int fight_boss(char m_name[],char name[], int* hp, int* c_hp)
{
    int itemlist[3]={3,1,1};
    // 1. 포션   2. 신살검    3.가죽방패  - 중간 무기 어떻게 될지 몰라서 남겨놈
    int m_hp;                               // 몬스터 체력
    int attack;                             // 유저 공격력
    float m_attack;                         // 몬스터 공격력
    int run ;                               // 도망갈 확률
    int item ;                              // 아이템 선택 입력 받는 변수
    int sword = 9999;                       // 필살기 무기
    int defenceshield = 0;                  // 방패 사용 여부 판별
    *c_hp =  *hp;
    srand(time(NULL));
    attack = (*c_hp/2)* (rand()% 4+1) ;      // 유저 공격력 계산
    m_attack = *hp * (rand()% (30+5))/10;    // 몬스터 공격력 계산
    m_hp = *hp * (rand()% 3+5);              // 몬스터 체력 계산
    
    while(1)
    {
        printf("\n당신은 눈 앞에 나타난 미지의 존재에게 대처해야 합니다...\n");
        printf("1. 공격 \t \t 2. 아이템 \t \t 3. 도망간다..\n");
       
        
        int choice = 0;                      // 행동 선택 입력
        scanf("%d", &choice); 
        switch (choice) 
        {
            case 1:                          // 공격 선택시
            {
                printf("당신의 칼날이 적의 몸에 파고듭니다...\n");
                m_hp -= attack;
                printf("적의 체력은 %d 만큼 남았습니다.\n",m_hp);
                if (m_hp <= 0) 
                {
                    printf("괴물은 공허로 다시 돌아갔습니다...\n");
                    return 1;
                }            
                break;
            }

            case 2:                          // 아이템 선택시
            {
                printf("당신은 고심에 빠집니다...\n");
                printf("1. 포션 \t \t 2. 指.銃 \t \t 3. 조잡한 방패 \t \t 4.처음으로...\n");
                scanf("%d", &item); 
                switch (item)
                {
                    case 1:                                        // 포션 선택
                    {
                        printf("포션의 쓴맛이 당신의 온몸으로 퍼져나갑니다...\n");
                        item_process(itemlist,item,0);
                        int temp_hp = *c_hp;                        // 체력 임시저장
                        float potion = *hp * (rand() % (8+3)) / 10; // 포션 회복 변수
                        *c_hp += potion;                            // 회복 됨
                        if ( *c_hp >= *hp )                          // 최대체력 이상 회복시
                        {
                            *c_hp = *hp;
                        }
                        printf("당신은 흩어질것 같은 정신을 다시 붙잡습니다.\n");
                        printf("체력 증가량 %.1f \t\t 체력 %d → %d\n",potion,temp_hp,*c_hp);
                        break;
                        
                    }
                    case 2:                                        // 필살 무기 선택
                    {
                        printf("\"指.銃\"\n");
                        m_hp -= sword;
                        if (m_hp <= 0) 
                        {
                            printf("적이 쓰러집니다...\n");
                            return 1;
                        }
                    }
                    case 3:                                        // 방패 선택
                    {
                        printf("당신은 조잡한 방패를 들어 적의 공격을 막습니다.\n");
                        item_process(itemlist,item,0);
                        defenceshield = 1;
                        break;
                    }
                    case 4:                                        // 아이템 초기화
                    {
                        printf("당신은...다시..생각해보기로 합니다...\n");
                        continue;
                    }
                    default:
                        printf("좋지 않은 선택같습니다...\n");
                        printf("다시 한번 더 생각해 보기로 합니다.\n\n\n");
                        continue;
                
                }
                break;
            }

            case 3:                           // 도주 선택시
            {    
                run = rand()%10;
                if ( run < 3)
                {
                    printf("도망에 성공했습니다.\n");
                    return 2;
                }
                else
                {
                    printf("당신은 적의 시야로부터 달아나려 했지만,");
                    printf(" 적의 시야로부터 벗어날 수는 없었습니다...\n");
                    printf(" === 강제 전투에 돌입합니다 === \n");
                    break;
                }
                
                
            }
            default:                          // 잘못 입력시
            {    
                printf("좋지 않은 선택같습니다...\n");
                printf("다시 한번 더 생각해 보기로 합니다.\n\n\n");
                continue;
            }
        }
        printf("\n적의 턴.\n");
        printf("%s의 공격!\n",m_name);
        if ( defenceshield == 1)
        {
            *c_hp -= m_attack /2;
            printf("방패를 사용해 치명상을 피했습니다.\n");
        }
        else
        {
            *c_hp -= m_attack;
            printf("적의 공격이 당신의 살갗을 파고 듭니다.\n");
        }
        
        
        if (*c_hp <=0)
        {
            printf("YOU DIE...\n");
            return 3;
        }
        else
        {
            printf("체력이  %d 남았습니다...\n",*c_hp);
        }
    } 


    return 0;

}

void item_process(int a[3],int b,int c)  // 아이템 리스트 ( 감소, 증가 여기서 계산하면 편함 )
{                                        // 1.3. 포션,방패 감소 2. 검(변동x)  4.5.포션,방패 증가
    switch(b)                            // b가 선택지 결정 , c가 증가량
    {                                       
        case 1 :
        {
            a[0] -= 1;
            printf("포션을(를) %d개 남았습니다...\n",a[0]);
            break;
        }
        case 2 : break;
        case 3 :
        {
            a[2] -= 1;
            printf("조잡한 방패가 %d개 남았습니다...\n",a[2]);
        }
        case 4 :
        {
            a[0] += c;
            printf("포션을(를) %c개 얻었습니다...\n",a[0]);
            break;
        }
        case 5 :
        {
            a[2] += c;
            printf("당신은 주변에서 조금씩 잔해들을 모아 방패로 만들었습니다...\n");
            break;
        }
    }
}