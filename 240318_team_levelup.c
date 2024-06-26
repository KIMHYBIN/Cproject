
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    char NAME[40];
    int next = 1;
    int NUM;    // 턴을 돌리기 위한 랜덤 횟수
    int TURN = 0;    // 턴 수
    int EXP1 = 0;    // 한 턴에 발생한 총 경험치 수 
    int EXP2;    // 매번 발생하는 경험치 양 (랜덤 5번 돌려서 나온 경험치 양)
    int EXP3 = 0;    // 누적 경험치. 현재까지의 총 경험치 양
    int LEVEL = 1;    // 현재 레벨
    int i, j;    // 다음 레벨 업을 위해 필요한 총 경험치 (이전 경험치에 곱해주는 랜덤 수)
    float EVENT;
    float EXP[100];    // 1~99까지의 경험치 저장

    srand((unsigned int)time(NULL));

    
    printf("⣯⣿⣿⢿⢝⣎⢏⣮⢾⡫⡪⡪⣊⠪⡘⢜⢜⣕⣗⣯⣟⡾⡽⣮⡳⣕⠧⡣⡣⡕⡔⠅⠅⠅⡂⠅⠅⠪⡰⡰⣨⠱⡛⡗⡟⣽⢽⢾⣻⢞⡝⡜⡜⡼⣝⢗\n");
    printf("⣿⣿⡫⣏⢇⢗⠝⢕⠕⡕⡇⣇⢊⢱⣮⠖⣑⣞⡾⣗⣯⢯⣻⡺⡪⡪⢑⠕⡑⠕⠨⢈⠑⢧⡎⢜⢨⢐⠌⡊⠪⡈⠒⢲⡬⢊⠝⣝⢜⠕⡕⡅⡣⠣⠣⡓\n");
    printf("⣿⡳⣯⡺⡕⠕⢚⣦⡇⢕⣽⣺⡢⢪⣿⠐⡼⣞⢟⢯⢗⠫⠪⢙⢈⡨⠑⠓⡊⠚⣺⡎⠀⣺⣏⠐⠌⢘⣶⠑⠉⣾⡃⢸⡯⡀⡊⢄⠡⡑⡌⠆⠅⢁⠁⠄\n");
    printf("⡿⣽⡺⣽⣹⡑⡨⣿⡂⡳⣯⢷⡣⢪⣿⢄⣔⡰⠡⣑⣄⢍⣍⡪⣑⢄⠦⠑⡀⣜⠗⠠⠡⢸⣇⡢⡥⠐⣿⢀⡀⣿⡀⢰⣟⠘⡘⡐⡈⠈⠈⠂⠁⠀⡀⠂\n");
    printf("⣟⣗⣟⢾⢜⢌⠨⣿⠢⠨⡈⢅⢢⣸⢿⠈⢄⣕⣵⣐⢠⣲⠒⠘⢦⣂⠀⣔⠞⠉⢖⣌⠀⢽⡇⢠⢢⡂⡋⡡⡈⡀⡁⢰⡗⡐⠨⡐⠠⢈⠀⠄⠁⠀⠀⠀\n");
    printf("⣿⣳⣿⣯⢧⣃⡓⡛⢛⢋⢋⢍⡁⢸⣿⠨⣝⡯⡗⢗⠈⠻⣢⣠⠟⠅⠊⠠⢘⢜⣔⡍⠄⢺⡇⢱⡹⡪⡂⢌⣿⠀⢂⢁⢁⠂⠕⣌⢌⢐⠀⡂⠈⠀⠁⠄\n");
    printf("⣿⢽⣾⣻⣟⣷⣟⣾⣳⢽⣳⣷⡣⢸⣿⠀⣗⣕⠪⡒⡒⡒⠘⢓⠒⠕⡚⠚⢎⡺⣾⣯⢣⢹⠏⡢⡫⡝⠔⡀⠙⠘⠈⠊⢌⢃⠂⠄⠹⣶⣱⣄⢅⢂⣔⣔\n");
    printf("⣾⣿⣺⣗⣿⣺⣗⣿⣾⡿⣟⡟⡎⢸⠝⡁⡑⠳⣣⢂⢽⣎⢀⠅⢅⢑⠨⢪⣳⣻⣟⣾⡳⣜⢜⢮⢣⠃⢡⢈⡍⠮⣦⡡⡂⠕⡵⡣⠅⣻⣿⠄⡸⣸⡪⡮\n");
    printf("⢿⡻⣟⡿⣟⡷⡿⣿⣻⢯⡓⠬⣔⢄⡍⠚⢦⣳⠌⡮⣪⡩⣡⠩⡩⡡⡫⡪⣞⠮⡳⡱⢝⢮⢯⡺⡨⡸⡼⠀⠠⠠⢀⠹⡯⡦⡈⡊⠁⢼⣿⠂⡪⣗⢯⢭\n");
    printf("⢱⢨⢢⣨⠠⡑⡩⣐⢨⢐⡰⡀⠨⣿⡇⠀⢽⣿⠐⢝⢯⠿⡝⡝⡪⠫⠪⣑⢁⢁⠲⢔⡔⣄⠣⡕⡠⣪⣄⠀⠀⠤⡄⡀⣮⡮⠒⠒⠑⢳⣿⠠⡹⣾⣻⢿\n");
    printf("⣿⣖⣦⢌⠛⠯⢉⢈⢨⣿⠇⠐⠨⣿⡇⠀⢽⣿⢠⣡⠡⡩⢊⠒⠦⣅⡦⠈⢹⣶⠇⠀⣿⡇⢂⠂⠅⡹⢾⢌⡢⡡⢠⣪⠯⢃⢜⡜⡌⢼⣿⢁⢮⢿⣽⣟\n");
    printf("⣿⣿⢏⢇⢑⢁⠅⡁⡰⣿⢅⡈⡨⣿⡇⠀⣺⣿⠀⠠⣿⣏⠠⢐⢀⢿⡯⠀⢰⣿⡃⠀⣿⡏⢄⢣⢁⠢⡂⡅⠙⠙⠙⠒⢄⢣⡣⡣⡁⠼⡻⠀⡯⣿⣻⣿\n");
    printf("⣿⣿⢧⠅⢻⣶⠋⡉⡍⡩⡁⠍⠩⣿⡇⠀⢺⣿⠀⠄⣿⣏⠉⡉⠉⣿⣗⠓⢓⣿⡂⠀⣿⡇⡂⡇⡇⡏⣆⢧⠓⠵⣅⡦⠑⠽⡝⠌⠉⢷⣾⡈⢮⣿⢿⣯\n");
    printf("⣿⡿⣿⡑⡸⣿⡁⠪⠫⠪⡩⡡⠨⣿⡇⠀⢽⣿⠀⠐⣿⡧⠠⡈⡄⣿⡇⡀⢨⣿⠂⠀⣿⡇⢢⢳⡹⡜⣮⢯⠣⠨⣿⡧⡢⡕⡴⠬⢦⢽⣿⠀⢗⢿⢿⣟\n");
    printf("⣷⣯⣽⣘⢘⢿⢴⠬⠎⡚⢌⢂⠨⣿⡇⠀⢽⣿⠠⢡⢛⢉⠉⠉⡉⠙⡁⢀⢐⠿⢀⠐⢟⢃⠌⠓⡕⢑⢡⡱⠘⠨⣿⣇⣔⣐⡔⠴⠰⢺⣿⠁⠜⡸⢸⠰\n");
    printf("⣿⣿⣯⣷⣳⣢⣖⣴⣧⣯⡷⣇⢊⣿⡇⠀⢽⣿⠐⣲⣵⢕⠅⠓⠓⠓⠚⠒⠒⠃⠃⢳⣶⠇⢠⡽⢀⣶⣽⠀⠐⡙⣿⡵⠼⢬⣼⠬⠮⢾⡿⡑⡑⡨⠪⡪\n");
    printf("⣵⣻⣯⣿⣿⣿⣽⡿⣾⣿⣽⢮⢐⣿⠧⠀⢽⣿⢂⡳⣯⢗⢕⢥⣂⣂⣢⣂⣅⡢⣢⡸⡿⡅⢸⡿⣌⢿⣧⢧⠕⢊⠡⣢⠚⠊⡀⡄⡦⠕⡛⡨⡑⡑⡓⢎\n");
    printf("⣷⣻⣞⣿⢿⣻⣿⣽⢿⣟⣿⣳⡰⣩⢰⡡⡹⡂⣜⢾⡽⡝⠆⢐⣿⡗⠀⢄⢆⠢⠂⡀⢄⢄⢈⠳⣌⡌⢄⢄⣆⣣⣟⢠⡰⡕⢎⢑⢔⡕⣕⢕⢕⠕⠑⠔\n");
    printf("⣗⣗⡽⣞⡿⣿⣿⣿⣯⡻⣿⣿⣽⣾⣻⣞⣮⣾⣽⣿⣽⢭⡑⡓⠫⠯⠦⡲⡰⡬⢮⠼⠞⠖⡃⡍⣄⢌⢅⢅⢨⠻⡚⠅⣅⢦⡳⣝⢮⢺⠸⠈⡀⠠⠐⠀\n");
    printf("⣿⣺⡻⣝⢯⡳⡯⣟⣿⣿⣮⡚⢿⣾⣿⣿⣿⣟⣿⣿⣽⣿⣽⣾⣳⣵⣵⣢⣆⣆⣒⢜⣼⣺⣺⣞⡾⣝⡵⣕⢥⡣⣪⢮⣗⡯⣻⡪⢇⠃⠌⠀⠀⠀⠀⠀\n");

    printf("사용자 이름을 입력해주세요 : ");
    scanf("%s", NAME);

    EXP[0] = 30000;
    EXP[1] = 30000;
    for (j = 2; j < 100; j++)
    {
        EXP[j] = EXP[j-1] * ((float) ((rand () % 8) + 18) / 10);
    }

    printf("\n== 시작 : %d턴 || 레벨 %d || 현재 경험치 %d || 총 경험치 %.1f ==\n",
        TURN, LEVEL, EXP3, EXP[1]);   
    
    printf("1. 턴을 진행한다. 2. 턴을 그만둔다.\n숫자 입력 : ");
    while (scanf("%d", &next) == 1) {
        TURN++;
        
        for (NUM = 1; NUM < 6; NUM++)
        {        
        EXP2 = (rand () % 7001) - 3500;
        printf("%d턴에 발생한 %d경험치는 %d입니다.\n", TURN, NUM, EXP2);
        EXP1 = EXP1 + EXP2;
        }

        EVENT = (float) (rand () % 41 + 10) / 10;
        printf("(이번 턴에서 발생한 이벤트는 %.1f배입니다.)\n", EVENT);
        EXP1 = EXP1*EVENT;
        EXP3 = EXP3 + EXP1;
        EXP1 = 0;

        if (EXP3 >= EXP[LEVEL]) {      
            EXP3 = EXP3 - EXP[LEVEL];          
            printf("\n레벨이 올랐습니다! 총 경험치도 증가했습니다.\n");            
            ++LEVEL;
                    
            if (LEVEL == 99) {
                printf("\n~Happy Ending~\n>>만렙 달성! 축하합니다!<<\n");
                break;
            }
        }
        else if (EXP3 < 0) {
            printf("레벨이 다운되었습니다. 총 경험치도 감소했습니다.\n");
            LEVEL--;
            EXP3 = EXP3 + EXP[LEVEL];   
            printf("\n== 현재 %d턴 || 레벨 %d || 현재 경험치 %d || 총 경험치 %.1f ==\n", 
            TURN, LEVEL, EXP3, EXP[LEVEL]);
            if (LEVEL < 1)
            {
               printf("\n~Bad Ending~\n>>게임이 종료되었습니다.<<\n");
               break;
            }
        }
        else
        {
            printf("레벨이 오르지 못하였습니다.\n");
        }
        printf("\n== 현재 %d턴 || 레벨 %d || 현재 경험치 %d || 총 경험치 %.1f ==\n", 
            TURN, LEVEL, EXP3, EXP[LEVEL]); 
        printf("\n1. 턴을 진행한다. 2. 턴을 그만둔다.\n숫자 입력 : ");
    }     
    return 0;
}
