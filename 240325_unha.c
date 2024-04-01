#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
    srand(time(NULL));
    int hp = 3000; //밖에서
    int c_hp; 
    int m_hp;
    int attack;
    float m_attack;
    int run ; //도망갈 확률
    int item = 0; // 밖에서
    int defence_sheild = 0; // 전설의 방어구 밖에서
    char name[40]; 
    char m_name[40];
    c_hp = hp; // 현재 체력
    attack = (c_hp/2)* (rand()% 4+1) ; // 
    m_attack = hp * (rand()% (30+5))/10;
    m_hp = hp * (rand()% 3+1);


    printf("유저이름을 입력하세요.\n");
    scanf("%s",name);
    printf("몬스터 이름을 입력하세요.\n");
    scanf("%s",m_name);
    

    while(1)
    {
        printf("\n유저턴입니다.\n");
        printf("어떤 행동을 하시겠습니까?\n");
        printf("1. 공격한다. 2. 아이템을 사용한다. 3. 런친다.\n");
        printf("몬스터의 체력은 %d 입니다.\n",m_hp);
        printf("%s의 현재 공격력은 %d 입니다.\n", name, attack);
        
        int choice = 0;
        scanf("%d", &choice); 
        switch (choice) 
        {
            case 1:
                printf("공격합니다.\n");
                m_hp -= attack;
                printf("현재 몬스터의 체력은 %d 만큼 남았습니다.\n",m_hp);
                if (m_hp <= 0) 
                {
                    printf("몬스터를 물리쳤습니다.\n");
                    return 1;
                }            
                break;

            case 2:
                printf("아이템을 사용합니다.\n");
                printf("어떤 아이템을 사용하시겠습니까?\n");
                printf("1. 포션 사용 2. 집행검 사용 3. 전설의 방어구 사용.\n");
                scanf("%d", &item); 
                switch (item)
                {
                    case 1:
                        printf("포션을 한 개 사용합니다.\n");
                        c_hp += hp * (rand() % (8+3)) / 10;
                        printf("체력을 회복 했습니다. 현재 체력은 %d 입니다.\n",c_hp);

                        break;
                        

                    case 2:
                        printf("집행검을 사용하여 공격합니다.\n");
                        m_hp = 0;
                        if (m_hp == 0) 
                        {
                            printf("몬스터를 죽였습니다.\n");

                            return 1;
                        }
                    
                    case 3:
                        printf("전설의 방어구를 사용합니다.\n");
                        if (defence_sheild)
                        {
                            defence_sheild = +1;
                        }
                        break;
                        
                        
                    default:
                        printf("잘못된 아이템 선택입니다.\n");
                        break;
                }
                break;

            case 3:
                printf("도망갑니다.\n");
                run = rand()%9;
                if (run<3)
                {
                    printf("도망에 성공했습니다.\n");
                    return 2;
                }
                else
                {
                    printf("도망에 실패했습니다.\n");
                }
                
                

            default:
                printf("잘못된 선택입니다.\n");
                break;
        }
        printf("\n몬스타 턴입니다.\n");
        printf("%s의 공격!\n",m_name);
        if (defence_sheild != 0)
        {
            c_hp -= m_attack /2;
            printf("방어구를 착용한 상태로 공격을 입어 현재 체력이 %d 만큼 남았습니다.\n",c_hp);
        }
        else
        {
            c_hp -= m_attack;
            printf("공격을 입어 현재 체력이 %d 만큼 남았습니다.\n",c_hp);
        }
        
        
        if (c_hp <=0)
        {
            printf("you die\n");
            return 3;
        }
    } 


    return 0;

}
