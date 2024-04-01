#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int fight(char m_name[],char name[], int* hp, int* c_hp, int itemlist[]);
int fight_boss(char m_name[],char name[], int* hp, int* c_hp, int itemlist[]);
void item_process(int a[],int b,int c);
void Death(void);
void Happy(void);

int main(void)
{
    int itemlist1[3]={3,1,1};
    int hp1 = 3000;
    int * hp = &hp1;
    int c_hp1 = 3000;
    int m = 0;
    int n = 0;
    int k = 0;
    int l = 0;
    char m_name[10] = {0};
    int a;
    char wasd; // 방향키 입력
    char map[25][25]; //맵 크기
    for(m = 0; m<25; m++)
    {
        for(n = 0; n<25; n++)
        {
            map[m][n] = '_';
        }
    }

    int i = 0;
    int j = 0; //맵 이동을 위한 변수
    int appear_m; //몬스터 등장 카운트
    srand((unsigned int)time(NULL));
    char mons[28][10] = {{"노주영"}, {"임석현"}, {"황운하"}, {"김혜빈"}, {"조세빈"}, {"김승수"}, {"서훈"}, {"오은지"}, {"이은승"}, {"김영곤"},
                        {"김민아"}, {"권철민"}, {"조대정"}, {"박장미"}, {"박희정"}, {"박민건"}, {"김재신"}, {"김성근"}, {"이동준"}, {"류홍걸"},
                        {"유시온"}, {"황은비"}, {"박선후"}, {"안광민"}, {"이철"}, {"이준호"}, {"김건"}, {"강진영"}};

    char name[10] = {0};
    char boss[10] = {"대복이"};
    printf("유저 이름을 입력하세요.\n");
    scanf("%s", name);
    int z = 0;
    int count = 0;

    
    for(m = 0; m < 28; m++)
    {
        for(n = 0; n < 10; n++)
        {
            if(mons[m][n] == name[n])
            { 
                count++;
            }
            if(count == 10)
            {
                if(m != 0)
                {
                    for(n = 0; n<10; n++)
                    {
                        mons[m][n] = mons[m-1][n];
                    }
                }
                else
                {
                    for(n = 0; n<10; n++)
                    {
                        mons[m][n] = mons[m+1][n];
                    }
                }
            }
        }
        count = 0;
    }
    for(m = 0; m < 28; m++)
    {
        for(n = 0; n < 10; n++)
        {
            printf("%c", mons[m][n]);
        }
        printf("\n");
    }
    int count1 = 0;
    printf("%s\n", name);
    for(m = 0; m < 25; m++)
        {
            for(l = 0; l < 25; l++)
            {
                printf("%5c", map[m][l]);
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
            map[i][j]='X';
            if(i==0){
                printf("탐험할 수 없는 곳입니다 뒤로 돌아가 주세요.\n");
                i++;
            }
            i--;
            if(map[i][j]=='_')
            {
                appear_m = rand()%5;

                if(appear_m == 2)
                {
                    count1 = rand()%10;
                    
                    if(count1 == 1)
                    {
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        z = fight_boss(boss, name, &hp1, &c_hp1, itemlist1);
                        if(z == 4)
                        {
                            usleep(1000000);
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");                           
                            Happy();
                            break;
                        }
                        else if(z==2)
                        {
                            printf("당신은 느껴본적 없는 공포감에 뒤로 달려나갔습니다...\n");
                            continue;
                        }
                        else
                        {
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            Death();
                            break;
                        }
                    }
                    else
                    {
                        for(n = 0; n<10; n++)
                        {
                            m_name[n]= mons[a][n];
                        }
                        z = fight(m_name, name, &hp1, &c_hp1, itemlist1);
                        if(z == 1)
                        {
                            printf("당신은 여정을 이어가기로 합니다...\n");
                            continue;
                        }
                        else if(z==2)
                        {
                            printf("당신은 느껴본적 없는 공포감에 뒤로 달려나갔습니다...\n");
                            continue;
                        }
                        else
                        {
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            Death();
                            break;
                        }
                    }
                    count1 = 0;
                }
            }
            else{
                printf("이미 지나온 길입니다...다시 가도 아무것도 없을 것 같습니다...\n");
            }
        }
        else if(wasd == 'a')
        {
            map[i][j]='X';
            if(j==0){
                printf("앞이 막혀 갈 수 없어 보입니다.. 다시 뒤로 돌아갑니다...\n");
                j++;
            }
            j--;
            if(map[i][j]=='_')
            {
                appear_m = rand()%3;
                if(appear_m == 2)
                {
                    count1 = rand()%10;

                    if(count1 == 1)
                    {
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        z = fight_boss(boss, name, &hp1, &c_hp1, itemlist1);
                        if(z == 4)
                        {
                            usleep(1000000);
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            Happy();
                            break;
                        }
                        else if(z==2)
                        {
                            usleep(1000000);
                            printf("당신은 느껴본적 없는 공포감에 뒤로 달려나갔습니다...\n");
                            continue;
                        }
                        else
                        {
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            Death();
                            break;
                        }
                    }
                    else
                    {
                        for(n = 0; n<10; n++)
                        {
                            m_name[n]= mons[a][n];
                        }
                        z = fight(m_name, name, &hp1, &c_hp1, itemlist1);
                        if(z == 1)
                        {
                            usleep(1000000);
                            printf("당신은 여정을 이어가기로 합니다...\n");
                            continue;
                        }
                        else if(z==2)
                        {
                            usleep(1000000);
                            printf("당신은 느껴본적 없는 공포감에 뒤로 달려나갔습니다...\n");
                            continue;
                        }
                        else
                        {
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            Death();
                            break;
                        }
                    }
                    count1 = 0;
                }
            }
            else{
                printf("이미 지나온 길입니다...다시 가도 아무것도 없을 것 같습니다...\n");
            }
        }
        else if(wasd == 's')
        {
            map[i][j]='X';
            if(i==24){
                printf("앞이 막혀 갈 수 없어 보입니다.. 다시 뒤로 돌아갑니다...\n");
                i--;
            }
            i++;
            if(map[i][j]=='_')
            {
                appear_m = rand()%3;
                if(appear_m == 2)
                {
                    count1 = rand()%10;
                    if(count1 == 1)
                    {
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        z = fight_boss(boss, name, &hp1, &c_hp1, itemlist1);
                        if(z == 4)
                        {
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            usleep(1000000);
                            Happy();
                            break;
                        }
                        else if(z==2)
                        {
                            usleep(1000000);
                            printf("당신은 느껴본적 없는 공포감에 뒤로 달려나갔습니다...\n");
                            continue;
                        }
                        else
                        {
                            usleep(1000000);
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            Death();
                            break;
                        }
                    }
                    else
                    {
                        for(n = 0; n<10; n++)
                        {
                            m_name[n]= mons[a][n];
                        }
                        z = fight(m_name, name, &hp1, &c_hp1, itemlist1);
                        if(z == 1)
                        {
                            usleep(1000000);
                            printf("당신은 여정을 이어가기로 합니다...\n");
                            continue;
                        }
                        else if(z==2)
                        {
                            usleep(1000000);
                            printf("당신은 느껴본적 없는 공포감에 뒤로 달려나갔습니다...\n");
                            continue;
                        }
                        else
                        {
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            Death();
                            break;
                        }
                    }
                    count1 = 0;
                }
            }
            else{
                printf("이미 지나온 길입니다...다시 가도 아무것도 없을 것 같습니다...\n");
            }
        }
        else if(wasd == 'd')
        {
            map[i][j]='X';
            if(j==24){
                printf("앞이 막혀 갈 수 없어 보입니다.. 다시 뒤로 돌아갑니다...\n");
                j--;
            }
            j++;
            if(map[i][j]== '_')
            {
                appear_m = rand()%3;
                if(appear_m == 2)
                {
                    count1 = rand()%10;
                    if(count1 == 1)
                    {
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        z = fight_boss(boss, name, &hp1, &c_hp1, itemlist1);
                        if(z == 4)
                        {
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            Happy();
                            break;
                        }
                        else if(z==2)
                        {
                            printf("당신은 느껴본적 없는 공포감에 뒤로 달려나갔습니다...\n");
                            continue;
                        }
                        else
                        {
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            Death();
                            break;
                        }
                    }
                    else
                    {
                        for(n = 0; n<10; n++)
                        {
                            m_name[n]= mons[a][n];
                        }
                        z = fight(m_name, name, &hp1, &c_hp1, itemlist1);
                        if(z == 1)
                        {
                            usleep(1000000);
                            printf("당신은 여정을 이어가기로 합니다...\n");
                            continue;
                        }
                        else if(z==2)
                        {
                            printf("당신은 느껴본적 없는 공포감에 뒤로 달려나갔습니다...\\n");
                            continue;
                        }
                        else
                        {
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            Death();
                            break;
                        }
                    }
                    count1 = 0;
                }
            }
            else{
                printf("이미 지나온 길입니다...다시 가도 아무것도 없을 것 같습니다...\n");
            }
        }
        else
        {
            printf("당신은 다시 생각해보기로 합니다...\n");
        }
        for(m = 0; m<25; m++)
        {
            for(l = 0; l < 25; l++)
            {
                printf("%5c", map[m][l]);
            }
            printf("\n");
        }
    }

    return 0;
}


void item_process(int a[3],int b,int c);  // 아이템 증감 함수. -134 line 


int fight_boss(char m_name[],char name[], int* hp, int* c_hp, int itemlist[])
{
    int m_hp;                               // 몬스터 체력
    int attack;                             // 유저 공격력
    float m_attack;                         // 몬스터 공격력
    int run ;                               // 도망갈 확률
    int item ;                              // 아이템 선택 입력 받는 변수
    int sword = 999999999;                       // 필살기 무기
    int defenceshield = 0;                  // 방패 사용 여부 판별
    *c_hp =  *hp;
    srand(time(NULL));
    m_attack = *hp * ((rand()%30+5)/10);    // 몬스터 공격력 계산
    m_hp = *hp * (rand()% 3+5);              // 몬스터 체력 계산       
    usleep(2000000);
    printf("\n\n\n\n\n\n\n\n\n\n\n당신은... 갑자기 나타난 눈 앞의 존재에게서 형용할 수 없는 공포심을 느낍니다...\n\n\n\n\n\n");
    usleep(2000000);
    printf("\n\n\n\n\n\n\n\n\n\n\n당신은... 눈 앞의 존재에게서 벗어날 수 없음을 느낍니다..\n\n\n\n\n\n");
    usleep(2000000);
    printf("\n\n\n\n\n\n\n\n\n\n\n기나긴 여정의 끝이 다가왔음을 직감합니다..\n\n\n\n\n\n");
    usleep(2000000);
    while(1)
    {
        attack = (*c_hp/2)* (rand()% 4+1) ;      // 유저 공격력 계산
        printf("\n\n\n\n\n");
        printf("=========================================================================================================\n");
        printf("=========================================================================================================\n\n\n");     
        printf("\n당신은 눈 앞에 나타난 미지의 공포에게 맞서싸워야 합니다...\n");
        printf("[ %s ]  \t\t 적 체력 %d 적 공격력 %.1f\n",m_name,m_hp,m_attack);
        printf("당신\"%s\"의 \t 현재 체력 [ %d ]  공격력 [ %d ]  최대체력 [ %d ]\n",name,*c_hp, attack, *hp);
        printf("1. 공격 \t \t 2. 아이템 \t \t 3. 도망간다..\n");      
        usleep(1000000);        
        int choice = 0;                      // 행동 선택 입력
        scanf("%d", &choice); 
        switch (choice) 
        {
            case 1:                          // 공격 선택시
            {

                printf("\n\n\n\n\n");
                printf("당신의 칼날이 적의 몸에 파고듭니다...\n");
                usleep(1000000);
                m_hp -= attack;
                printf("적의 체력은 %d 만큼 남았습니다.\n",m_hp);
                if (m_hp <= 0) 
                {
                    usleep(1000000);
                    printf("괴물은 공허로 다시 돌아갔습니다...\n");
                    usleep(1000000);
                    printf("\n\n\n");
                    return 4;
                }            
                break;
            }

            case 2:                          // 아이템 선택시
            {
                printf("\n\n\n\n\n");
                printf("=========================================================================================================\n");
                printf("=========================================================================================================\n\n\n");                   
                printf("당신은 고심에 빠집니다...\n");
                printf("1. 포션 \t \t 2. 指.銃 \t \t 3. 조잡한 방패 \t \t 4.처음으로...\n");
                scanf("%d", &item); 
                switch (item)
                {
                    case 1:                                        // 포션 선택
                    {
                        usleep(1000000);
                        printf("포션의 쓴맛이 당신의 온몸으로 퍼져나갑니다...\n");
                        usleep(1000000);
                        item_process(itemlist,item,0);
                        int temp_hp = *c_hp;                        // 체력 임시저장
                        float potion = *hp * (rand() % (8+3)) / 10; // 포션 회복 변수
                        *c_hp += potion;                            // 회복 됨
                        if ( *c_hp >= *hp )                          // 최대체력 이상 회복시
                        {
                            *c_hp = *hp;
                        }
                        printf("당신은 흩어질것 같은 정신을 다시 붙잡습니다.\n");
                        usleep(500000);
                        printf("체력 증가량 %.1f \t\t 체력 %d → %d\n",potion,temp_hp,*c_hp);
                        break;
                        
                    }
                    case 2:                                        // 필살 무기 선택
                    {
                        usleep(1000000);
                        printf("\n\n\n");
                        printf("\"指.銃\"\n");
                        m_hp = 0;
                        if (m_hp <= 0) 
                        {
                            usleep(1000000);
                            printf("적이 쓰러집니다...\n");
                            usleep(1000000);
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            usleep(1000000);
                            return 4;
                        }
                    }
                    case 3:                                        // 방패 선택
                    {
                        if(itemlist[2]==0)
                        {
                            usleep(100000);
                            printf("당신의 몸을 지켜줄 방패가 존재하지 않습니다\n");
                            usleep(100000);
                            printf("다른 방법을 모색해야 할 것 같습니다.\n");
                            continue;
                        }
                        usleep(1000000);
                        printf("\n\n\n");
                        printf("당신은 조잡한 방패를 들어 적의 공격을 막습니다.\n");
                        item_process(itemlist,item,0);
                        defenceshield = 1;
                        break;
                    }
                    case 4:                                        // 아이템 초기화
                    {
                        printf("\n\n\n");
                        printf("당신은...다시..생각해보기로 합니다...\n");
                        usleep(1000000);
                        continue;
                    }
                    default:
                        usleep(1000000);
                        printf("좋지 않은 선택같습니다...\n");
                        usleep(100000);
                        printf("다시 한번 더 생각해 보기로 합니다.\n\n\n");
                        usleep(1000000);
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
                     usleep(1000000);
                    return 2;
                }
                else
                {
                    usleep(1000000);
                    printf("당신은 적의 시야로부터 달아나려 했지만,");
                    usleep(1000000);
                    printf(" 적의 시야로부터 벗어날 수는 없었습니다...\n");
                    usleep(1000000);
                    printf("\n\n\n");
                    printf(" === 강제 전투에 돌입합니다 === \n");
                    usleep(1000000);
                    break;
                }
                
                
            }
            default:                          // 잘못 입력시
            {   
                usleep(1000000); 
                printf("좋지 않은 선택같습니다...\n");
                usleep(100000);
                printf("다시 한번 더 생각해 보기로 합니다.\n\n\n");
                usleep(1000000);
                continue;
            }
        }
        usleep(1000000);
        printf("\n적의 턴.\n");
        usleep(500000);
        printf("%s의 공격!\n",m_name);
        usleep(1000000);
        if ( defenceshield == 1)
        {
            *c_hp -= m_attack /2;
            usleep(1000000);
            printf("방패를 사용해 치명상을 피했습니다.\n");
            defenceshield = 0;
        }
        else
        {
            *c_hp -= m_attack;
            usleep(1000000);
            printf("적의 공격이 당신의 살갗을 파고 듭니다.\n");
        }
        
        
        if (*c_hp <=0)
        {
            return 3;
        }
        else
        {
            usleep(100000);
            printf("체력이  %d 남았습니다...\n",*c_hp);
            usleep(1000000);
        }
    } 

    return 0;

}

int fight(char m_name[],char name[], int* hp, int* c_hp, int itemlist[])
{
    int m_hp;                               // 몬스터 체력
    int attack;                             // 유저 공격력
    float m_attack;                         // 몬스터 공격력
    int run ;                               // 도망갈 확률
    int item ;                              // 아이템 선택 입력 받는 변수
    int sword = 999999999;                       // 필살기 무기
    int defenceshield = 0;                  // 방패 사용 여부 판별
    int lucky;
    *c_hp =  *hp;
    srand(time(NULL));
    m_attack = *hp * ((rand()%30+5)/10);    // 몬스터 공격력 계산
    m_hp = *hp * (rand()% 3+1);              // 몬스터 체력 계산
    int p = 0;


    while(1)
    {
        attack = (*c_hp/2)* (rand()% 4+1) ;      // 유저 공격력 계산

        printf("\n\n\n\n\n=========================================================================================================\n");
        printf("=========================================================================================================\n\n\n");
        printf("\n당신은 눈 앞에 나타난 미지의 존재에게 대처해야 합니다...\n\n\n");
        usleep(100000);
        printf("적 %s 출현. \t\t적체력 %d 적 공격력 %.1f\n\n\n",m_name,m_hp,m_attack);
        usleep(100000);
        printf("당신의 현재 \t 체력 [ %d ]  공격력 [ %d ]  최대체력 [ %d ]\n",*c_hp, attack, *hp);
        printf("1. 공격 \t \t 2. 아이템 \t \t 3. 도망간다..\n");
       
        
        int choice = 0;                      // 행동 선택 입력
        scanf("%d", &choice); 
        switch (choice) 
        {
            case 1:                          // 공격 선택시
            {
                printf("당신의 칼날이 적의 몸에 파고듭니다...\n");
                usleep(100000);
                m_hp -= attack;
                printf("적의 체력은 %d 만큼 남았습니다.\n",m_hp);
                usleep(100000);
                if (m_hp <= 0) 
                {
                    usleep(100000);
                    printf("괴물은 공허로 다시 돌아갔습니다...\n");
                    usleep(1000000);
                    *hp = *hp*(rand()%13+12)/10;
                    *c_hp += *hp; // 수정필요
                    p = rand()%10+1;
                    itemlist[0]=itemlist[0]+p;
                    if(itemlist[0]>=300)
                    {
                        itemlist[0]=300;
                    }
                    printf("포션을 %d개 얻었습니다.\n", p);
                    lucky = rand()%20;
                    if(lucky == 10)
                    {
                        itemlist[2]=itemlist[2]+1;
                        printf("방패를 1개 얻었습니다.\n");
                    }
                    printf("낡은 가방에 포션이 %d개 방패가 %d개 남았습니다.\n", itemlist[0], itemlist[2]);
                    usleep(100000);
                    return 1;
                }            
                break;
            }

            case 2:                          // 아이템 선택시
            {
                usleep(100000);
                printf("당신은 고심에 빠집니다...\n");
                usleep(100000);
                printf("1. 포션 \t \t 2. 指.銃 \t \t 3. 조잡한 방패 \t \t 4.처음으로...\n");
                scanf("%d", &item); 
                switch (item)
                {
                    case 1:                                        // 포션 선택
                    {
                        usleep(100000);
                        printf("포션의 쓴맛이 당신의 온몸으로 퍼져나갑니다...\n");
                        item_process(itemlist,item,0);
                        int temp_hp = *c_hp;                        // 체력 임시저장
                        float potion = *hp * (rand() % (8+3)) / 10; // 포션 회복 변수
                        *c_hp += potion;                            // 회복 됨
                        if ( *c_hp >= *hp )                          // 최대체력 이상 회복시
                        {
                            *c_hp = *hp;
                        }
                        usleep(100000);
                        printf("당신은 흩어질것 같은 정신을 다시 붙잡습니다.\n");
                        usleep(100000);
                        printf("체력 증가량 %.1f \t\t 체력 %d → %d\n",potion,temp_hp,*c_hp);
                        usleep(100000);
                        break;
                        
                    }
                    case 2:                                        // 필살 무기 선택
                    {
                        usleep(100000);
                        printf("\"指.銃\"\n");
                        usleep(100000);
                        m_hp = 0;
                        if (m_hp <= 0) 
                        {
                            printf("적이 쓰러집니다...\n");
                            usleep(100000);
                            *hp = *hp*(rand()%13+12)/10;
                            *c_hp += *hp;
                            p = rand()%10+1;
                            itemlist[0]=itemlist[0]+p;
                            if(itemlist[0]>=300)
                            {
                                itemlist[0]=300;
                            }
                            printf("포션을 %d개 얻었습니다.\n", p);
                            lucky = rand()%20;
                            if(lucky == 10)
                            {
                                itemlist[2]=itemlist[2]+1;
                                printf("방패를 1개 얻었습니다.\n");
                            }
                            printf("낡은 가방에 포션이 %d개 방패가 %d개 남았습니다.\n", itemlist[0], itemlist[2]);
                            usleep(100000);
                            return 1;
                        }
                    }
                    case 3:                                        // 방패 선택
                    {
                        if(itemlist[2]==0)
                        {
                            usleep(100000);
                            printf("당신의 몸을 지켜줄 방패가 존재하지 않습니다\n");
                            usleep(100000);
                            printf("다른 방법을 모색해야 할 것 같습니다.\n");
                            continue;
                        }
                        usleep(100000);
                        printf("당신은 조잡한 방패를 들어 적의 공격을 막습니다.\n");
                        item_process(itemlist,item,0);
                        defenceshield = 1;
                        break;
                    }
                    case 4:                                        // 아이템 초기화
                    {
                        usleep(100000);
                        printf("당신은...다시..생각해보기로 합니다...\n");
                        usleep(100000);
                        continue;
                    }
                    default:
                        usleep(100000);
                        printf("좋지 않은 선택같습니다...\n");
                        usleep(100000);
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
                    usleep(100000);
                    printf("도망에 성공했습니다.\n");
                    return 2;
                }
                else
                {
                    usleep(100000);
                    printf("당신은 적의 시야로부터 달아나려 했지만,");
                    usleep(100000);
                    printf(" 적의 시야로부터 벗어날 수는 없었습니다...\n");
                    usleep(100000);
                    printf(" === 강제 전투에 돌입합니다 === \n");
                    break;
                }
                
                
            }
            default:                          // 잘못 입력시
            {    
                usleep(100000);
                printf("좋지 않은 선택같습니다...\n");
                usleep(100000);
                printf("다시 한번 더 생각해 보기로 합니다.\n\n\n");
                while(getchar() != '\n')
                	continue;
                continue;
            }
        }
        usleep(100000);
        printf("\n적의 턴.\n");
        usleep(100000);
        printf("%s의 공격!\n",m_name);
        if ( defenceshield == 1)
        {
            *c_hp -= m_attack /2;
            usleep(100000);
            printf("방패를 사용해 치명상을 피했습니다.\n");
            defenceshield = 0;
        }
        else
        {
            *c_hp -= m_attack;
            usleep(100000);
            printf("적의 공격이 당신의 살갗을 파고 듭니다.\n");
            usleep(1000000);
        }
        
        
        if (*c_hp <=0)
        {
            return 3;
        }
        else
        {
            usleep(100000);
            printf("체력이  %d 남았습니다...\n",*c_hp);
            usleep(1000000);
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
            usleep(1000000);
            break;
        }
        case 2 :
        {
            a[1] -= 1; 
            printf("지건이(를) %d개 남았습니다...\n",a[1]);
            usleep(1000000);
            break;
        }
        case 3 :
        {
            a[2] -= 1;
            printf("조잡한 방패가 %d개 남았습니다...\n",a[2]);
            usleep(1000000);
            break;
        }
        case 4 :
        {
            a[0] += c;
            printf("포션을(를) %c개 얻었습니다...\n",a[0]);
            usleep(1000000);
            break;
        }
        case 5 :
        {
            a[2] += c;
            printf("당신은 주변에서 조금씩 잔해들을 모아 방패로 만들었습니다...\n");
            usleep(1000000);
            break;
        }
        case 6 :
        {
            a[1] += c;
            printf("당신은 주변에서 조금씩 잔해들을 모아 방패로 만들었습니다...\n");
            usleep(1000000);
            break;
        }        
        default:
            printf("잘못된 아이템 선택입니다...\n");
            usleep(1000000);
            break;
    }
}

void Death(void)
{
    usleep(100000);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠤⠀⠐⠂⠀⠈⠉⠉⠉⠀⠀⠐⠂⠠⠄⠀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠄⠂⢈⠀⠀⠀⡀⠄⠂⠀⠂⠐⠀⠂⠀⠂⠁⠠⠀⠄⠠⠀⡀⠀⠈⠁⠂⠠⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);   
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠄⠂⠁⠀⡀⠐⠀⠠⠈⢀⠀⠠⠐⠈⠀⢁⠀⡁⠈⡀⢈⠀⠄⠂⠀⠂⠀⠄⠁⠐⠀⠂⠀⡈⠐⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⡠⠂⠀⢀⠠⠐⠀⡀⠂⠁⡀⠂⢀⠐⠀⠄⠂⠈⢀⠀⡆⠁⠀⡀⠄⠀⠂⠁⡀⢁⠠⠈⢀⠈⡀⠁⢀⠠⠀⠄⠑⢄⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠠⠊⠀⢀⠐⠀⡀⠄⠠⠀⠐⢀⠠⠐⠀⡀⠂⠠⠐⠈⠀⠀⢣⠀⠂⢀⠠⠈⠀⠄⠠⠀⡀⠄⠠⠀⠠⠐⠀⡀⠄⠀⠂⠀⠱⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⢠⠁⠀⠄⠠⠀⠂⢀⠠⠀⠂⠁⢀⠀⠄⠠⠀⠐⠀⠄⠂⠈⡀⡪⠠⠈⠀⠀⠄⠈⡀⠄⠂⠀⠠⠐⠀⠂⠀⠂⢀⠠⠈⠀⡁⠀⣡⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⡼⡔⠡⠀⠂⠀⠂⡀⠠⠀⠂⠁⢀⠠⠀⠂⢀⠁⠐⠀⠄⠁⠀⢗⠀⠄⠁⠐⠀⠁⢀⠀⠄⠈⡀⠄⠂⠈⡀⠁⡀⠀⠄⠁⠀⡬⡷⡇⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⢟⡺⢅⢅⠄⠁⠄⠠⠀⠂⠐⠈⠀⠀⠄⠈⡀⣀⢁⠄⡂⡤⡣⡦⡓⠒⠈⠄⠌⡀⠄⢄⠐⠀⡀⠠⠐⠀⠠⠀⠄⠂⠠⡨⠮⢲⠽⢅⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⢀⠕⣧⢱⢑⠀⠄⠂⠀⠂⡀⣁⣤⡸⣔⠵⢷⠗⢇⣃⡝⢂⡳⢭⠇⢒⡘⡸⢰⢀⠭⣭⠤⣔⣤⢤⡤⠴⢬⣀⠠⠀⠂⢸⡪⢩⢊⡧⢽⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠰⣇⡎⣵⣹⠂⠀⠄⠁⢄⠜⢻⣲⡪⢌⢃⡥⢈⡗⢫⠮⡳⡐⡜⡗⣡⠢⡾⡭⠵⡳⣇⢕⣳⠔⠕⣍⣮⡎⡕⡥⣔⢀⡘⡴⢕⢥⢧⢿⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⢰⡎⣯⡛⢀⢤⡲⢎⢿⣻⢿⡶⢖⣾⢾⢓⢾⡵⡾⡒⡢⣑⢌⢦⡇⣅⠯⡕⡊⡼⣖⡓⡝⡯⢻⣛⣚⣜⡚⠺⣝⡶⡄⣑⢌⣷⢣⡪⡋⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⣗⣿⢾⣱⢵⣻⠬⣷⢺⣞⢝⢷⢺⣯⣥⣗⢪⢳⠹⣌⡗⣞⡳⢿⣝⣮⡊⢮⢣⣟⢱⢳⣸⣥⡢⡰⢱⣘⡭⢢⢙⣯⡹⣪⡼⣣⣝⠃⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠞⡁⠈⣾⣇⢯⣚⢐⣯⠳⡧⠽⣏⡿⠿⣿⣿⣿⣯⠣⠥⠁⠕⢔⡣⡣⢭⢯⢽⣲⣷⡿⣿⢻⡱⠺⡐⣔⡏⣭⣯⡯⢿⣝⣧⡱⡙⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⢀⢟⠄⡜⡗⡾⡞⣜⢆⣳⢫⢕⡇⡪⢫⡧⡮⣟⣿⣪⢗⠁⢀⢁⢑⡸⢬⠩⢯⢝⠿⣷⣆⡌⣦⢹⠚⡎⡬⡛⣆⢕⢽⣏⢳⡞⣑⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⡄⡞⠐⢁⣣⠩⣇⣳⢣⣛⢖⣰⣶⢵⡯⣹⡜⣯⠽⣋⠥⢀⡔⣵⣍⣫⡷⣎⠯⣛⠮⣳⣊⢱⠹⢝⡷⣵⣩⡳⣍⣮⡔⡕⣝⡸⣞⡡⠢⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⢰⡳⠰⠔⠥⡪⢂⠤⡘⢑⠭⠯⡵⠏⠛⢚⣈⡥⣶⣻⠂⡰⣸⠏⣾⡏⢼⣿⢽⡹⡰⠓⣢⢏⠝⣎⢎⢪⠪⠟⠏⠽⠵⠘⢚⣉⠨⢶⠨⡂⣲⠐⠀⠀\n");
    usleep(100000);
    printf("⠀⠘⣊⠙⠆⡂⡺⣧⣿⠳⢯⡧⡫⡻⣫⣓⣳⡳⢝⢾⠅⣰⢽⣾⣵⣿⡯⣾⣿⣿⣿⢧⡷⡸⠌⢯⢓⡞⢖⢏⢻⣩⢝⣝⣸⣼⣺⣓⢗⡕⢵⢣⠃⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠑⢕⡓⡍⡮⡚⡼⡭⡵⣸⡑⠖⣞⡸⡚⣪⠥⡏⢡⢺⣱⣪⣿⣿⣳⢽⣿⣯⢮⣖⣷⡪⡑⣣⢱⢚⣻⡐⡝⡮⡝⢵⠱⡖⡔⡭⢒⢣⡳⠃⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠈⠉⠺⣞⢣⢻⢱⢗⣺⢭⡰⡓⣍⡞⡧⡧⡹⣍⢟⣿⣻⢿⢸⢿⣻⡶⡿⣻⠢⣵⣎⢲⢹⢽⢪⡲⣉⢧⠭⢎⣧⡣⡕⠞⠊⠁⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢋⣗⡕⡎⣾⠱⢮⠼⠌⠺⠝⠵⢜⣁⢷⢧⢙⢜⣩⠪⢬⢓⠕⡭⡓⣮⡝⠊⠀⠀⠉⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡎⡿⠆⠃⣝⠃⡌⡢⠉⠁⠠⣈⡭⣎⢎⢮⢢⡓⡾⡗⢕⣏⠬⡮⣒⡳⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡗⡇⡔⢰⡂⢐⠛⡃⢪⣂⢍⣂⡧⡣⣛⢗⢓⢡⡍⢼⠼⡺⡜⢔⣖⠡⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢷⣸⢸⠂⡇⠒⡝⠀⢦⡎⢍⢵⠇⢎⠘⢽⢡⣰⡏⣅⡮⢳⡪⢂⠇⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠹⠢⡫⢤⠙⠱⠹⠠⡤⣀⡾⠉⡀⢫⠄⠩⡤⣀⣍⢽⠺⠓⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠘⠋⠽⠐⠦⠷⠼⠤⠜⠶⠓⠁⠈⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n");
    usleep(100000);
    printf("\n\n\t    당신의 여정은 여기까지였습니다...\n");
    usleep(1000000);
    printf("\t  아무도 찾을 수 없는 곳에서 천천히..\n");
    usleep(1000000);
    printf("\t  당신은 한 줌의 흙으로 돌아갑니다...\n\n\n");
    usleep(1000000);
    printf(" \t          === BAD ENDING ===\n");
}

void Happy(void)
{
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣔⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⡤⡽⣧⡀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢐⣞⣿⣻⡳⣝⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠪⣞⢷⣻⢮⢮⡳⡅⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣐⢐⢄⢕⢕⢕⡕⡕⡕⡝⡜⡜⢔⢄⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢱⢕⢮⡪⣪⣪⣚⢮⢎⢎⢮⡪⡪⡪⡪⡪⡢⡡⡱⡱⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢎⢮⣳⡳⣝⢮⣺⡪⡯⣮⡳⡯⣮⡳⣝⡮⣗⢵⣱⢱⡱⡱⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣸⣪⣗⢵⣫⣞⣗⢷⢝⣽⣺⣺⡽⣳⡯⣗⣽⣞⡷⣕⡇⡯⣺⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢢⣗⢷⣽⣟⣞⡷⣷⣻⡽⣞⣗⣯⢯⣻⡽⡯⣞⢎⢞⣯⢧⣕⢧⡫⡢⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢜⣵⢏⣿⢾⣯⣷⢿⣻⡷⣯⢷⣳⡯⣯⢷⣻⢽⢧⣣⡳⣽⣟⣮⢷⡝⡜⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢨⣺⣽⣟⡷⣟⣿⣻⣯⢿⡽⣯⢯⡯⣟⣞⣯⣟⡮⣾⣻⣽⣯⢿⢵⡱⡱⡠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢕⣿⣻⣞⡷⣻⡯⢣⣻⣞⣿⣽⢯⡿⣽⣳⣳⣳⡳⡯⣟⢷⣻⡾⣯⡳⣝⡮⣪⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣯⢷⣻⢾⣽⠋⠀⠢⣗⣟⡾⡾⡽⣽⣺⣺⡺⣮⣻⢽⡣⠁⢯⣟⣷⣻⣲⣽⡳⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(100000);
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢌⣿⣽⢾⣻⡗⠀⢀⣀⢮⣗⡿⣽⡽⣺⣺⣺⢽⣺⣪⢧⠡⠀⠀⣟⣷⣻⣽⢞⠍⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    usleep(2000000);       
    printf("\n\n\t당신은 오랜 역경을 딛고 마침내 끝에 도달하였습니다..\n\n");
    usleep(2000000);
    printf("\t   당신이 찾아 헤매던 것은 그곳에는 없지만...\n\n");
    usleep(2000000);
    printf("\t그래도 당신은 마음 한구석이 채워진걸 느낍니다...\n\n");
    usleep(2000000);
    printf("\t\t        축하드립니다.\n");
    usleep(2000000);
    printf("\n\n\n");
    printf("\t\t    === HAPPY ENDING ===\n");
}