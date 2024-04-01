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

    srand((unsigned int)time(NULL));
    exp1 = 0; 
    exp3 = 0;
    level = 1;
    turn = 0;
    exp[0]= 0;
    exp[1]= 30000;
    for(i = 2; i<100; i++)
    {
        exp[i]= exp[i-1] * ((float)(rand()%7)+18)/10;;
    }

    printf("--------- 짝크소울 게임을 시작합니다 ---------\n");
    printf("\n사용자 이름을 입력하세요: \n");
    scanf("%s", name);
    printf("%s님으로 진행하시겠습니까? (1번(예) / 2번(아니오))\n", name);
    scanf("%d", &next1); // 게임 진행 여부 입력
    printf("게임이 시작되면 중도포기 할 수 없으며, 1렙미만으로 떨어질시 '사망'하게 됩니다.\n그래도 진행하시겠습니까? (1번(예) / 2번(아니오))\n");
    next = scanf("%d", &next1); // 게임 시작 여부 입력
    printf("★☆★☆★☆ 게임 입장 ★☆★☆★☆\n");
    printf("⡁⠄⠂⡀⣂⣀⢄⣀⣁⣀⣀⣀⣀⣀⣀⡁⠀⠀⠀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⣀⢀⣀⣀⣀⣀⣀⣀⣀⣀⠀⠄⠀⠄⠀⢀⠀⠠⠀⠄⠠⠐⢀⠐⢀⠂\n");
    printf("⡀⢂⠐⢰⡯⡍⢭⢩⠱⡩⢩⠩⡩⢩⠩⡗⠀⢀⡾⢩⠩⡉⡪⡉⡪⢑⢹⣏⠪⡉⡪⠩⡊⠍⡍⠷⣄⠀⠀⠀⠀⠀⠀⢀⣿⠩⡩⢩⢑⠍⡪⠩⡉⡪⡑⢽⠀⠀⠀⠀⠠⠀⠀⠄⠂⠀⠂⠐⢀⠐⢀⠂\n");
    printf("⠐⠀⠄⢽⣟⢌⢆⢕⢑⢌⢆⠣⡊⡢⡑⡧⢠⡞⢅⠕⢌⠢⡒⢌⠢⡑⢼⣇⠣⡊⢔⢑⢌⠪⡐⡑⡌⡳⡤⡤⡤⡤⡤⡴⣿⢈⠢⡑⢔⢑⠌⡊⡢⡑⢌⢺⠀⠀⠀⠂⠀⠀⠂⠀⠐⠈⠀⡁⠠⠐⢀⠐\n");
    printf("⢁⠈⡀⣺⣯⠢⡱⢨⠢⣻⡿⠻⠿⡻⠿⣷⢏⢌⠢⡡⠅⣵⢈⠢⡑⢌⢺⡧⡑⢌⠢⡑⣲⡇⡊⡢⢊⢔⢐⢅⠪⡐⢌⢜⣿⢐⢑⢌⠢⢲⣷⣾⣶⣾⣶⣿⠀⠀⠀⢀⠀⠁⢀⠈⠀⠄⠁⡀⠐⠈⡀⠐\n");
    printf("⠄⠂⡀⢺⡷⡑⡅⢕⠅⣿⡇⢕⠱⡨⢂⣿⡢⢡⢑⢌⢊⢍⠢⡑⡌⠆⢽⡗⡌⡢⡑⢌⢾⡇⡪⡐⢅⢢⣑⡔⡑⢌⠢⢪⣿⠐⢅⠢⡑⢍⠍⢝⡟⠟⠟⠇⠀⠀⠀⠀⢀⠠⠀⠀⠂⠀⠂⠀⠌⠀⠄⢁\n");
    printf("⠄⠂⡀⢽⣟⢌⢜⢰⠡⣻⡇⢅⠣⡊⡢⣿⢌⠢⡑⢔⢡⣢⢑⢌⠢⡑⣹⡗⢌⠢⡊⡂⣿⡇⠢⡊⡢⠡⣿⡇⢌⠢⡑⣑⣿⠨⡂⡣⢡⢱⣨⣪⡇⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠐⠀⠁⠈⡀⠂⢁⠐⢀\n");
    printf("⠄⠂⡀⢺⣯⡢⡱⡐⢕⢽⡇⢕⢑⢌⠢⣿⡊⡌⡌⢆⢪⣿⢐⠔⡑⢌⢼⡏⢆⠕⢌⠢⢽⡇⠕⢌⠢⡑⣿⡇⢅⠕⢌⢢⣿⠨⡂⣊⠢⢺⣿⢿⡥⣤⢤⣤⠀⠀⠀⢀⠠⠀⠂⠀⠂⠁⠀⠄⠐⢀⠐⢀\n");
    printf("⡀⠂⡀⠹⣿⣿⡔⢅⠣⡢⡑⡱⡐⢅⠪⣿⠢⡊⢔⠡⢪⣿⠠⡑⢌⠢⢺⣏⠢⡡⡑⢌⣻⡇⡑⢅⠕⢌⣿⡇⢕⠨⠢⣑⣿⢐⢅⠢⡑⢅⠢⡑⢌⠔⡡⢺⠀⠀⠀⠀⠀⠀⠀⡀⠂⠀⢁⠠⠈⢀⠐⠀\n");
    printf("⠐⢀⠐⠀⡙⣿⣿⣮⣘⣔⡑⠔⢜⢐⢅⣿⣱⡨⣢⣑⣱⣿⣨⣨⣂⣣⣹⣇⣣⣢⣡⣑⣼⣇⣊⣢⣡⣑⣿⣇⣢⣃⣕⣔⣿⣐⣔⣑⣌⣢⣑⣌⣢⣑⣌⣺⠀⠀⠀⠠⠀⠂⠀⢀⠀⢈⠀⢀⠐⠀⠄⠡\n");
    printf("⠂⠄⠂⠁⠀⠈⢿⣿⣿⣿⣇⣍⣢⣑⣔⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⢀⠠⠀⠀⠄⠀⠄⢀⠁⡐⢀\n");
    printf("⠐⠀⠂⠁⠈⠀⠈⠉⠉⣽⣿⣿⣿⣿⣿⡏⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠁⠀⠀⠀⠐⠈⠀⠀⠀⠠⠐⠀⠂⠠⠀⠄⠐\n");
    printf("⠄⡁⢈⠀⡁⠈⢀⠠⠀⠈⠉⠉⠉⠉⢉⣖⢓⢓⢚⢒⢓⢚⢒⣷⡚⡒⡓⡚⡒⡓⡚⡒⡓⡚⣲⠀⠀⢀⡖⡓⡚⡒⡓⡚⡒⡓⣾⢒⢓⢚⢒⢓⢚⢒⠳⣄⡀⢰⡟⡚⣚⢚⡚⣓⢓⠗⣛⢚⠳⡗⢀⠁\n");
    printf("⡀⠐⠀⠄⢀⠈⠀⠀⠀⠠⠀⠀⠀⣠⢞⢐⠅⠕⢌⠢⡑⢅⢅⣿⢌⠢⡑⢌⠢⡑⢌⠢⡑⢌⢺⡀⣰⢏⢌⠢⡑⢌⠢⡑⢌⢌⣿⢌⠢⡑⢌⠢⡑⢌⠪⠨⡛⢾⡇⢕⠰⡡⠪⡐⡅⡣⢢⠣⡩⣏⠀⡈\n");
    printf("⠄⡈⠄⠂⠀⠄⠂⠁⠀⠠⠀⠀⣴⠫⠢⡡⡑⣵⣥⣵⣬⣦⣦⣿⣦⣧⣮⢢⢑⠌⢆⢣⣮⣦⣽⣴⠫⡐⢔⢑⠌⡆⠕⢌⠢⡢⣿⠢⡑⢌⠢⡱⣬⢂⠣⡱⠨⣺⣧⣧⣵⡜⢌⠆⡕⢜⣴⣵⣵⡇⢂⠀\n");
    printf("⠠⠀⠄⠂⠁⡀⠄⠀⠂⠀⠀⣺⡯⡊⡪⡐⡢⢛⢛⡛⣛⢛⠻⡿⡿⢿⣿⠢⡑⢌⠢⡹⡿⡿⣿⡧⡑⢌⠢⡑⢜⠣⡑⢅⠕⡐⣿⡑⢌⠢⡑⢜⢛⠔⡑⡌⡪⣸⢿⢿⢿⡏⢆⠕⢜⠰⣽⢿⢿⠃⠠⠈\n");
    printf("⠁⡐⠀⠂⠁⠀⠀⠄⠂⠈⠀⢼⣯⠢⡊⡔⡌⡪⡐⡌⡢⢡⢑⡗⠀⠀⣿⠱⡨⢂⠣⢺⡅⠀⢼⡗⢌⠢⡑⢌⢢⢑⢌⠢⡡⡑⣿⢌⠢⡑⡌⠆⠕⢌⠢⠪⣶⣼⠀⠀⢽⡏⢆⠣⢣⢑⢿⠀⠀⠄⢁⠐\n");
    printf("⠁⠄⢈⠠⠈⠀⠁⢀⠀⠠⠀⣹⣿⣿⣿⣿⣿⣿⣿⠰⡨⢂⠆⣏⠀⠀⣿⡑⢌⠢⡑⣹⠆⠀⢺⣏⠢⡑⢜⢐⢽⡇⡢⡑⢌⢌⣿⠢⡑⢌⠢⡱⣍⢢⢑⠕⢌⢻⠀⠀⢽⡏⢆⢍⢆⠕⣿⠀⠐⢀⠂⠠\n");
    printf("⡐⠈⡀⠠⠀⡁⠈⠀⢀⠀⠀⢸⣯⠩⢍⠭⡩⢍⢍⠕⢌⠢⡑⡧⠀⠀⣿⡘⢔⠡⡑⢜⡇⠀⣹⡧⡑⢌⠢⡡⣻⡇⡢⢊⠢⠢⣿⡑⢌⠢⡑⢜⣿⢐⠅⡊⢆⢽⠈⠀⢽⡏⢆⠕⢔⠱⣽⠀⢈⠀⠄⠁\n");
    printf("⡂⠐⢀⠐⢀⠀⠂⠁⠀⢀⠈⢼⣗⢅⠣⡊⢔⠡⠢⡑⢅⣱⣾⠇⠀⠀⣿⢌⠢⡑⡌⣺⡅⠀⢼⡗⢌⠢⡃⠆⣿⡇⢌⠢⡑⢕⣿⠌⡢⡑⢌⢪⣿⢐⠅⢕⠡⣺⠀⡀⢽⡏⢆⠣⡣⡑⣿⠀⠠⠐⠈⡀\n");
    printf("⠄⡈⠠⠐⠀⡀⠂⢀⠁⠀⠀⣺⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⣿⢌⠪⡐⠢⢺⠆⠀⢺⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣷⣿⣿⣷⣿⣿⣿⡿⡠⢃⠅⡕⢼⠀⠀⣺⡯⡘⢌⠆⡕⣿⠀⠐⢀⠁⠄\n");
    printf("⡂⠄⠂⠠⠁⢀⠐⠀⢀⠐⠀⠚⠛⠛⠛⠛⠛⠛⠛⠛⠋⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⡃⠀⠙⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⢻⣿⣿⣿⣿⣿⣿⠐⠀⣺⣿⣿⣿⣿⣾⡟⢀⠈⠠⠐⠀\n");
    printf("⡂⠐⢈⠀⠂⠠⠀⠂⢀⠀⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⠛⠛⠛⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⠛⠛⠛⠛⠃⠀⠀⠚⠛⠛⠛⠛⠛⠃⠀⠄⢁⠨⠀\n");
    
    while(next == 1)
    {
        printf("===========================================================================\n");
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
        printf("===========================================================================\n");
        if(exp3 >= exp[level])
        {
            exp3 = exp3 - exp[level];
            level++;
            printf("레벨업 했습니다 현재 레벨은 %d입니다.\n", level);
printf("⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⣠⣳⡣⡂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⢀⢜⢮⣺⡪⣗⠕⠀⢀⠀⠀⡀⡀⡀⠀⠀⡀⡀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⡳⡵⡽⡀⠀⠀⢸⠀⠀⠐⠀⠐⡐⠀⡂⠂⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⢝⡮⣫⠂⠀⠀⢀⡠⣀⠄⢀⡠⣠⣀⢄⡄⡄⢀⢀⠄⠀⠀\n");
printf("⠀⠀⠀⡳⣝⣞⠄⠀⠀⢸⢝⣞⠄⠰⣝⢮⢮⡳⣝⡖⡧⡥⠀⠄⠀\n");
printf("⠀⠀⠀⣝⢮⣺⠄⠀⠀⢸⢵⣳⠁⢸⢕⣯⢓⢉⠬⡪⣟⣤⠂⠀⠀\n");
printf("⠀⠀⠀⣞⣽⣺⠄⠀⠀⢸⣽⣺⡡⢨⣗⡯⡷⡽⡮⣯⢗⡗⠁⠀⠀\n");
printf("⠀⠀⠀⣞⣾⣺⠅⠀⠀⣸⣞⡾⠁⢫⣺⡽⡽⠯⠻⠝⠉⠀⠀⠀⠀\n");
printf("⠀⠀⠀⢸⣞⢷⣏⣣⢶⡗⣏⡶⠁⢸⣺⣽⢎⠔⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⢀⠔⢸⠟⠾⢽⣟⠾⠓⠁⠀⢞⢿⡺⠔⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠄⠥⠉⠀⠀⠀⠀⠀⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀    \n");        
            if(exp3 >= exp[level])
            {
                exp3 = exp3 - exp[level];
                level++;
                printf("보물을 얻었습니다. 레벨이 두번이나 올랐습니다!!! 현재 레벨은 %d입니다.\n", level);
            }
            if(level == 99)
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
            printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢄⠠⠀⣀⡀⠀⢀⡄⠀⠀\n");
            printf("⠀⠀⠀⣀⠀⢀⣀⣰⢤⠴⠲⢠⡄⠀⣰⡝⢓⡯⣛⡁⡉⢁⣟⠂⠀⠀\n");
            printf("⠀⠀⣜⠇⠀⣀⡴⣯⡲⠒⠀⢸⣎⢼⠓⠰⣯⠛⢑⠁⢀⢾⠅⠀⡀⠀\n");
            printf("⠀⣸⠞⠀⠀⢨⣻⢤⡴⠤⠤⣞⣾⠁⢠⢼⠺⠝⠋⡉⣽⠽⠚⠋⠉⠁\n");
            printf("⡴⡽⠝⠋⠋⠟⠈⠥⢤⢄⡀⣨⢒⣤⢂⣅⡖⡾⣔⠇⠡⠀⠀⠀⠀⠀\n");
            printf("⠈⠀⠀⠀⠀⠀⠀⢀⣗⠴⠹⠅⠎⠼⠋⠞⠘⠁⠃⠀⠀⠀⠀⠀⠀⠀\n");
            printf("⠀⠀⠀⠀⠀⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀     \n");
            if(level <= 0)
            {
                printf("YOU DIE... %d턴을 소모하였습니다.\n", turn);
                printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⣤⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⠀⠀⢀⣠⣶⡿⠟⠋⠉⠀⠀⠀⠈⢌⠉⠓⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⠀⣠⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠄⠡⠀⠀⠉⢦⠀⠀⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⢰⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⠀⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⢼⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠨⡆⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⢺⣿⡇⠀⠀⢤⠀⠠⡄⠀⠀⣤⠀⠀⢠⠀⢠⡄⠀⠠⡇⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⣹⣿⡇⠀⠀⢸⣀⡠⠏⠀⠀⣿⠀⠀⢸⣀⡸⠃⠀⠠⡇⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⢼⣿⡇⠀⠀⢸⠀⠘⣦⠀⠀⣿⠀⠀⢸⠀⠀⠀⠀⠠⡇⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⢢⠀⣺⣿⡇⠀⠀⠉⠁⠀⠈⠁⠈⠈⠁⠀⠁⠁⠀⠀⠀⠠⡇⢀⠀⠀⠀⠀\n");
                printf("⠀⠠⡀⢣⢺⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⡇⣄⢀⠔⠁⠀\n");
                printf("⠀⠀⠈⢞⣿⣿⡇⠀⠀⠀⠀⠀⠀⢀⣀⣄⠀⠀⠀⠀⠀⠀⠀⠐⣇⢇⠎⠀⠀⠀\n");
                printf("⠀⠀⠀⠘⠿⣿⡇⠀⠀⠀⢀⣠⠖⠉⠀⠀⠳⣄⣀⡤⠤⠤⢄⠈⣿⠏⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⠀⠐⠉⠁⠉⠒⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠒⠛⠤⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⠀⠀⠀⠀⠐⠒⠁⠀⠀⠀⠀⣀⠤⠤⠤⣀⣀⣀⡠⠔⠈⠈⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀     \n");           
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
                printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⣤⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⠀⠀⢀⣠⣶⡿⠟⠋⠉⠀⠀⠀⠈⢌⠉⠓⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⠀⣠⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠄⠡⠀⠀⠉⢦⠀⠀⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⢰⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⠀⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⢼⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠨⡆⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⢺⣿⡇⠀⠀⢤⠀⠠⡄⠀⠀⣤⠀⠀⢠⠀⢠⡄⠀⠠⡇⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⣹⣿⡇⠀⠀⢸⣀⡠⠏⠀⠀⣿⠀⠀⢸⣀⡸⠃⠀⠠⡇⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⢼⣿⡇⠀⠀⢸⠀⠘⣦⠀⠀⣿⠀⠀⢸⠀⠀⠀⠀⠠⡇⠀⠀⠀⠀⠀\n");
                printf("⠀⠀⢢⠀⣺⣿⡇⠀⠀⠉⠁⠀⠈⠁⠈⠈⠁⠀⠁⠁⠀⠀⠀⠠⡇⢀⠀⠀⠀⠀\n");
                printf("⠀⠠⡀⢣⢺⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⡇⣄⢀⠔⠁⠀\n");
                printf("⠀⠀⠈⢞⣿⣿⡇⠀⠀⠀⠀⠀⠀⢀⣀⣄⠀⠀⠀⠀⠀⠀⠀⠐⣇⢇⠎⠀⠀⠀\n");
                printf("⠀⠀⠀⠘⠿⣿⡇⠀⠀⠀⢀⣠⠖⠉⠀⠀⠳⣄⣀⡤⠤⠤⢄⠈⣿⠏⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⠀⠐⠉⠁⠉⠒⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠒⠛⠤⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⠀⠀⠀⠀⠐⠒⠁⠀⠀⠀⠀⣀⠤⠤⠤⣀⣀⣀⡠⠔⠈⠈⠀⠀⠀⠀\n");
                printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀     \n");                
                break;
            }
        }
        else
        {
            printf("레벨업 하지 못하였습니다.\n");
        }
        printf("닉네임 : %s\n", name);
        printf("레벨 : %d 턴 : %d 총 경험치 : %.1f 보유 경험치 : %d \n", level, turn, exp[level], exp3);
        printf("진행하려면 숫자를 입력하면 다음 던전을 탐색합니다. (탈출할려면q) : \n");
        next = scanf("%d", &next1);
    }
    printf("게임이 종료되었습니다.\n");
    
    return 0;
}
