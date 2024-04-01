
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    char mons[29] = {'김혜빈', '노주영', '황운하', '임석현'};
    char name;
    char move;    // 맵 이동
    int map[25][25] = {0}; 
    
    int i = 0;    // 맵 세로 위치
    int j = 0;    // 맵 가로 위치
    int n;
    int m;
    int l;
    int o;    // 탐험 시작
    map[0][0] = 1;
    int Hp = 3000;
    int posion = 3;

    // srand((unsigned int)time(NULL));

    printf("게임을 시작하시겠습니까? 1. 게임 시작 2. 게임 종료\n");
    scanf("%d", &o);
    printf("캐릭터 이름을 입력하세요: ");
    scanf("%c", &name); // name

    while(o == 1){
        scanf("%c", &move);
        if(move == 'w')
        {
            i--;
            if(map[i][j] == 0)
            {
                n = rand()%3;
                if(n == 2)
                {
                    printf("비상! %c를 마주쳤다!\n", mons[0]);
                    
                }
            }
            else{
                printf("gogo");
            }
            map[i][j]=1;
        }
        if(move == 'a')
        {
            j--;
            if(map[i][j]==0)
            {
                n = rand()%3;
                if(n == 2)
                {
                    printf("비상! %c를 마주쳤다!\n", mons[0]);

                }
            }
            else{
                printf("gogo");
            }
            map[i][j]=1;
        }
        if(move == 's')
        {
            i++;
            if(map[i][j]==0)
            {
                n = rand()%3;
                if(n == 2)
                {
                    printf("비상! %c를 마주쳤다!\n", mons[0]);
                }
            }
            else{
                printf("gogo");
            }
            map[i][j]=1;
        }
        if(move == 'd')
        {
            j++;
            if(map[i][j]==0)
            {
                n = rand()%3;
                if(n == 2)
                {
                    printf("비상! %c를 마주쳤다!\n", mons[0]);
                }
            }
            else{
                printf("gogo");
            }
            map[i][j]=1;
        }

        for(m = 0; m<25; m++)
        {
            for(l = 0; l < 25; l++)
            {
                printf("%5d", map[m][l]);
            }
            printf("\n");
        }
        scanf("%d", &o);

    }

    return 0;
}