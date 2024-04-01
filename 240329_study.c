// 챕터14 구조체 p.711~
// DosomethingDuedate(year, month, day)
// DosomethingDuedate(2024, 3, 29)
// DosomethingDuedate(3, 29, 2024)
// DosomethingDuedate(29, 3, 2024)
// <- 컴파일 상으로는 문제가 없는 형식

// #include <stdio.h>
// #include <string.h>
// #define MAXTITLE 41
// #define MAXAUTL 31
// char* s_gets(char* st, int n);

// struct book {
//     char title[MAXTITLE];
//     char author[MAXAUTL];
//     float value;
// };

// int main(void)
// {
//     struct book library;

//     printf("도서 제목을 입력하시오.\n");
//     s_gets(library.title,MAXTITLE);
//     printf("저자명을 입력하시오.\n");
//     s_gets(library.author,MAXAUTL);
//     printf("정가를 입력하시오.\n");
//     scanf("%f", &library.value);
//     printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
//     printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
//     printf("종료.\n");

//     return 0;
// }

// char* s_gets(char* st, int n)
// {
//     char* ret_val;
//     char* find;

//     ret_val = fgets(st, n, stdin);
//     if (ret_val)
//     {
//         find = strchr(st, '\n');    // 개행을 찾는다
//         if (find)                   // 주소가 NULL이 아니면
//         {
//             *find = '\0';           // NULL 문자를 거기에 둔다
//         }
//         else
//         {
//             while (getchar() != '\n')
//             continue;
//         }
//     }
//     return ret_val;
// }


// #include <stdio.h>
// #include <string.h>
// char* s_gets(char* st, int n);
// #define MAXTITLE 41
// #define MAXAUTL 31
// #define MAXBKS 100

// struct book {
//     char title[MAXTITLE];
//     char author[MAXAUTL];
//     float value;
// };

// int main(void)
// {
//     struct book library[MAXBKS];
//     int count = 0;
//     int index;

//     printf("도서 제목을 입력하시오.\n");
//     printf("끝내려면 라인의 시작 위치에서 [enter] 키를 누르시오.\n");
//     while (count < MAXBKS && s_gets(library[count].title, MAXTITLE) != NULL 
//            && library[count].title[0] != '\0')
//     {
//         printf("저자명을 입력하시오.\n");
//         s_gets(library[count].author,MAXAUTL);
//         printf("정가를 입력하시오.\n");
//         scanf("%f", &library[count++].value);
//         while (getchar() != '\n')
//         {
//             continue;
//         }
//         if (count < MAXBKS)
//         {
//             printf("다음 타이틀을 입력하시오.\n");
//         }
//     }
    
//     if (count > 0)
//     {
//         printf("다음은 소장하고 있는 도서들의 목록입니다:\n");
//         for (index = 0; index < count; index++)
//         {
//             printf("%s by %s: $%.2f\n", library[index].title,
//             library[index].author, library[index].value);
//         }
//     }
//     else
//     {
//         printf("책이 한 권도 없어요? 야, 장하다 장해.\n");
//     }

//     return 0;
// }

// char* s_gets(char* st, int n)
// {
//     char* ret_val;
//     char* find;

//     ret_val = fgets(st, n, stdin);
//     if (ret_val)
//     {
//         find = strchr(st, '\n');    // 개행을 찾는다
//         if (find)                   // 주소가 NULL이 아니면
//         {
//             *find = '\0';           // NULL 문자를 거기에 둔다
//         }
//         else
//         {
//             while (getchar() != '\n')
//             continue;
//         }
//     }
//     return ret_val;
// }


// 출력 이상하게 됨; 다시 확인할 것
// #include <stdio.h>
// #define LEN 20
// const char* msgs[5] = {" 훌륭한 저녁 대접에 감사드립니다.", 
//                        "당신의 직업이 ",
//                        "라는 점은 당신이 정말 특별한 분이라는 것을 증명합니다.",
//                        "우리는 맛있는 ", 
//                        "를 먹고 약간 웃는 것 이상으로 함께했음에 틀림이 없습니다."};

// struct names {char first[LEN];
//               char last[LEN];};

// struct guy {struct names handle;
//             char favfood[LEN];
//             char job[LEN];
//             float income};

// int main(void)
// {
//     struct guy fellow = {{"Ewen", "Villard"}, "훈제 연어", "성격 코치", 68112.00};

//     printf("친애하는 %s, \n\n", fellow.handle.first);
//     printf("%s%s\n", msgs[0], fellow.handle.first);
//     printf("%s\n", msgs[2]);
//     printf("%s%s%s", msgs[3], fellow.favfood,msgs[4]);
//     if (fellow.income > 150000.0)
//     {
//         puts("!!");
//     }
//     else if (fellow.income > 75000.0)
//     {
//         puts("!");
//     }
//     else
//     {
//         puts(".");
//     }
//     printf("\n%40s%s\n", " ", "또 뵈어요,");
//     printf("%40s%s\n", " ", "Shalala");

//     return 0;
// }


// 구조체를 가리키는 포인터 p.727~
// #include <stdio.h>
// #define LEN 20

// struct names {char first[LEN];
//               char last{LEN};};

// struct guy {struct names handle;
//             char favfood[LEN];
//             char job[LEN];
//             float income;};

// int main(void)
// {
//     struct guy fellow[2] = {
//         {{"Ewen", "Villard"}, "grilled salmon", "personality coach", 68112.00},
//         {{"Rodney", "Swillbelly"}, "tripe", "tabloid editor", 232400.00}};
//     struct guy * him;

//     printf("주 소  #1: %p #2: %p\n", &fellow[0], &fellow[1]);
//     him = &fellow[0];
//     printf("포인터 #1: %p #2: %p\n", him, him + 1);
//     printf("him->income은 $%.2f: (*him).income은 $%.2f\n", him->income, (*him).income);
//     him++;
//     printf("him->favfood는 %s: him->handle.last는 %s\n", him->favfood, him->handle.last);

//     return 0;
// }


// 구조체를 가리키는 포인터를 전달하는 예제
// #include <stdio.h>
// #define FUNDLEN 50

// struct funds {
//     char   bank[FUNDLEN];
//     double bankfund;
//     char   save[FUNDLEN];
//     double savefund;
// };

// double sum(const struct funds*);    // 전달인자가 포인터다

// int main(void)
// {
//     struct funds stan = {
//         "국민은행",
//         3024.72,
//         "동아상호신용금고",
//         9237.11
//     };
//     printf("Stan씨의 총 잔고는 $%.2f입니다.\n", sum(&stan));

//     return 0;
// }

// double sum(const struct funds* money)
// {
//     return (money->bankfund + money->savefund);
// }


// 구조체를 전달하는 예제
// #include <stdio.h>
// #define FUNDLEN 50

// struct funds {
//     char   bank[FUNDLEN];
//     double bankfund;
//     char   save[FUNDLEN];
//     double savefund;
// };

// double sum(struct funds moolah);    // 전달인자가 구조체다

// int main(void)
// {
//     struct funds stan = {
//         "국민은행",
//         4032.27,
//         "동아상호신용금고",
//         8543.94
//     };
//     printf("Stan씨의 총 잔고는 $%.2f입니다.\n", sum(stan));

//     return 0;
// }

// double sum(struct funds moolah)
// {
//     return (moolah.bankfund + moolah.savefund);
// }



// 구조체를 가리키는 포인터를 사용
// #include <stdio.h>
// #include <string.h>

// #define NLEN 30
// struct namect {
//     char fname[NLEN];
//     char lname[NLEN];
//     int letters;
// };

// void getinfo(struct namect*);
// void makeinfo(struct namect*);
// void showinfo(const struct namect*);
// char* s_gets(char* st, int n);

// int main(void)
// {
//     struct namect person;

//     getinfo(&person);
//     makeinfo(&person);
//     showinfo(&person);
// 
//     return 0;
// }

// void getinfo(struct namect* pst)
// {
//     printf("이름을 입력하시오.\n");
//     s_gets(pst->fname, NLEN);
//     printf("성씨를 입력하시오.\n");
//     s_gets(pst->lname, NLEN);
// }

// void makeinfo(struct namect* pst)
// {
//     pst->letters = strlen(pst->fname) + strlen(pst->lname);
// }

// void showinfo(const struct namect* pst)
// {
//     printf("%s %s, 당신의 성명은 %d개의 글자를 가지고 있습니다.\n",
//            pst->fname, pst->lname, pst->letters);
// }

// char* s_gets(char* st, int n)
// {
//     char* ret_val;
//     char* find;

//     ret_val = fgets(st, n, stdin);
//     if (ret_val)
//     {
//         find = strchr(st, '\n');
//         if (find)
//         {
//             *find = '\0';
//         }
//         else
//         {
//         while (getchar() != '\n')
//         {
//             continue;
//         }
//         }
//     }    
//     return ret_val;
// }



// 윤성우 열혈C언어 p.474~
// #include <stdio.h>

// struct point
// {
//     int xpos;
//     int ypos;
// };

// typedef struct point Point;

// typedef struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// } Person;

// int main(void)
// {
//     Point pos = {10, 20};
//     Person man = {"이승기", "010-1212-0001", 21};
//     printf("%d %d \n", pos.xpos, pos.ypos);
//     printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//     return 0;
// }


// 원 교재 p.744~
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81
struct namect {
    char* fname;
    char* lname;
    int letters;
};

void getinfo(struct namect*);
void makeinfo(struct namect*);
void showinfo(const struct namect*);
void cleanup(struct namect*);
char* s_gets(char* st, int n);

int main(void)
{
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);
    
    return 0;
}

void getinfo(struct namect* pst)
{
    char temp[SLEN];
    printf("이름을 입력하시오.\n");
    s_gets(temp, SLEN);
    pst->fname = (char*)malloc(strlen(temp) + 1);
    strcpy(pst->fname, temp);
    printf("성씨를 입력하시오.\n");
    s_gets(temp, SLEN);
    pst->lname = (char*)malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
}

void makeinfo(struct namect* pst)
{
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect* pst)
{
    printf("%s %s, 당신의 성명은 %d개의 글자를 가지고 있습니다.\n",
            pst->fname, pst->lname, pst->letters);
}

void cleanup(struct namect* pst)
{
    free(pst->fname);
    free(pst->lname);
}

char* s_gets(char* st, int n)
{
    char* ret_val;
    char* find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
        while (getchar() != '\n')
        {
            continue;
        }
        }
    }    
    return ret_val;
}