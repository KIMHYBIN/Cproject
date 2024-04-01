// 포인터로 최댓값과 최솟값 가리키기
// #include <stdio.h>
// void MaxMin(int** max, int** min);
// int main(void)
// {
//     int num1 = 13;
//     int num2 = 9;

//     int* max = &num1;
//     int* min = &num2;

//     MaxMin(&max, &min);
    
//     printf("max: %d\n", *max);
//     printf("min: %d\n", *min);
//     return 0;
// }

// void MaxMin(int** max, int** min)
// {
//     int temp;
    
//     if (**max < **min)
//     {
//         temp = **max;
//         **max = **min;
//         **min = temp;
//     }
// }

// 실전달인자로 max와 min의 주소가 전달되어야 한다
// 이에 따라 형식매개변수도 이중 포인터로 받아야 한다.

// #include <stdio.h>
// void PointMax(int a[5]);
// void main(void)
// {
//     int ary[5] = {1,6,3,9,4};
//     int* max = NULL;

//     PointMax(ary[5]);

//     printf("max: %d\n", *max);
// }

// void PointMax(int a[5])
// {
//     int i = 0;
//     int Max = 0;
//     int a[5] = {0, 1, 2, 3, 4};

//     while (i < 5)
//     {
//         Max = (a[i] > a[i+1])? a[i] : a[i+1];
//         printf("%d\n", Max);
//         i++;
//     }
// }



// #include <stdio.h>
// double CalVag(int a[][3], int n, double b[3]);
// int main(void)
// {
//     int score[5][3] = {{100,90,80},
//                        {60,70,85},
//                        {76,79,70},
//                        {100,100,95},
//                        {85,80,90}};
//     double average[3];
//     CalVag(score, 5, average);

//     printf("국어 평균 : %f\n",average[0]);
//     printf("수학 평균 : %f\n",average[1]);
//     printf("영어 평균 : %f\n",average[2]);

//     return 0;
// }

// double CalVag(int a[][3], int n, double b[3])
// {

// }




// 챕터12 - 저장 클래스, 연계, 메모리 관리 p.600~
// (다른 참고교재: 윤성우의 열렬C프로그래밍 p.500~?)
// stack메모리는 선입후출의 특징 가짐.

// 코드영역
// 데이터영역 
// 힙 영역
// 스택 영역 - 함수 내에 선언된 지역변수들이 저장되는..? 
//            return 등을 만나면 자동적으로 사라짐

// static 변수 -> 글로벌과 유사한 개념

// #include <stdio.h>

// void SimpleFunc(void)
// {
//     static int num1 = 0;    // 초기화하지 않으면 0 초기화
//     int num2 = 0;    // 초기화하지 않으면 쓰레기 값 초기화
//     num1++, num2++;
//     printf("static: %d. local: %d \n", num1, num2);
// }

// int main(void)
// {
//     int i;
//     for (i = 0; i < 3; i++)
//     {
//         SimpleFunc();
//     }
//     return 0;
// }


// 댕글링 포인터: 어떤 함수 내에 사용된 지역변수,,,없는 주소를 가리키는 것?

// void* malloc(size_t size);
// void* 는 매개변수 안에 무엇을 어떤 용도로 쓸지 몰라 주소값만 반환하겠다는 것.
// malloc 함수는 메모리 올로케이션. 성공 시 할당된 메모리의 주소값, 실패 시 NULL 반환

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int* ptr1 = (int*)malloc(sizeof(int));
//     int* ptr2 = (int*)malloc(sizeof(int)*7);
//     int i;

//     *ptr1 = 20;
//     for(i = 0; i < 7; i++)
//     {
//         ptr2[i] = i + 1;
//     }
//     printf("%d \n", *ptr1);
//     for (i = 0; i < 7; i++)
//     {
//         printf("%d ", ptr2[i]);
//     }
//     free(ptr1);
//     free(ptr2);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// char* ReadUserName(void)
// {
//     char* name = (char*)malloc(sizeof(char)*30);
//     printf("What's your name? ");
//     gets(name);
//     return name;
// }

// int main(void)
// {
//     char* name1;
//     char* name2;
//     name1 = ReadUserName();
//     printf("name1: %s \n", name1);
//     name2 = ReadUserName();
//     printf("name2: %s \n", name2);

//     printf("again name1: %s \n", name1);
//     printf("again name2: %s \n", name2);
//     free(name1);
//     free(name2);
//     return 0;
// }


// calloc - 메모리 공간을 정해주는...?? 정해진 만큼 할당하는...?? 함수
// realloc - 메모리 공간 확장 함수

// 원 교재 p.647~648
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int static_store = 30;
// const char* pcg = "String Literal";
// int main(void)
// {
//     int auto_store = 40;
//     char auto_string[] = "Auto char Array";
//     int* pi;
//     char* pcl;

//     pi = (int*)malloc(sizeof(int));
//     *pi = 35;
//     pcl = (char*)malloc(strlen("Dynamic String") + 1);
//     strcpy(pcl, "Dynamic String");

//     printf("static_store: %d at %p\n", static_store, &static_store);
//     printf("  auto_store: %d at %p\n", auto_store, &auto_store);
//     printf("         *pi: %d at %p\n", *pi, pi);
//     printf("  %s at %p\n", pcg, pcg);
//     printf(" %s at %p\n", auto_string, auto_string);
//     printf("  %s at %p\n", pcl, pcl);
//     printf("   %s at %p\n", "Quoted String", "Quoted String");
//     free(pi);
//     free(pcl);

//     return 0;
// }


// 저녁 추가 보강~~!!
// #include <stdio.h>
// int main(void)
// {
//     int a = 10;
//     double b = 3.5;
//     void *vp;

//     vp = &a;
//     printf("a : %d\n", *(int*)vp);

//     vp = &b;
//     printf("b : %.1f\n", *(double*)vp);

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int* pi;    // 동적 할당 영역을 연결할 포인터
//     int i, sum = 0;    //반복 제어 변수와 누적 변수

//     pi = (int*)malloc(5*sizeof(int));    // 저장 공간 20바이트 할당
//     if (pi == NULL)
//     {
//         printf("메모리가 부족합니다.\n");
//         exit(1);
//     }
//     printf("다섯 명의 나이를 입력하세요 : ");
//     for (i = 0; i < 5; i++)    // i는 0부터 4까지 5번 반복
//     {
//         scanf("%d", &pi[i]);    // 배열 요소에 입력
//         sum += pi[i];    // 배열 요소의 값 누적
//     }
//     printf("다섯 명의 평균 나이 : %.1f\n", (sum / 5.0));    // 평균 나이 출력
//     free(pi);    // 할당한 메모리 영역 반환

//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// void InputScores(int* base,int asize); //asize 명의 성적을 입력받는 함수
// void ViewScores(int base, int asize); //asize 명의 성적을 출력하는 함수
// int InputScore(int num); //num 번의 학생 성적을 입력받는 함수

// int main()
// {
//     int base = 0;  //동적으로 할당받아 학생들의 성적을 관리할 메모리의 시작 주소
//     int max_stu = 0;   //관리할 학생 수
//     printf("최대 관리할 학생 수를 입력하세요.\n");
//     scanf("%d",&max_stu);
//     base = (int*)malloc(sizeof(int) * max_stu); //성적을 보관할 메모리를 할당
//     InputScores(base, max_stu); //학생들의 성적 입력 요청
//     ViewScores(base, max_stu); //학생들의 성적 출력
//     free(base); //동적으로 할당한 메모리 해제
//     return 0;
// }

// void InputScores(int* base, int asize)
// {
//     int i = 0;
//     for (i = 0; i < asize; i++)
//     {
//         base[i] = InputScore(i+1);    // i+1번 학생의 성적을 입력 받아 base에 저장
//     }
// }

// int InputScore(int num)
// {
//     int score;
//     printf("학생들의 성적을 입력하세요 : ");
//     scanf(" %d", &score);
//     return score;
// }

// void ViewScores(int base, int asize)
// {
//     int i;
//     for (i = 0; i < asize; i++)
//     {
//         printf("%d번 학생의 성적은 %d입니다.\n", i+1, base[i]);
//     }
// }



#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *pi;
    int size = 5;
    int cnt = 0;
    int num;
    int i;

    pi = (int*)calloc(size, sizeof(int));
    while (1)
    {
        printf("양수를 입력하세요 => ");
        scanf(" %d", &num);    // 데이터 입력
        if (num <= 0) break;    // 0 또는 음수이면 종료
        if(cnt < size)    // 저장 공간이 남아 있으면
        {
            pi[cnt++] = num;    // 입력한 값 저장
        }
        else    // 저장 공간이 부족하면
        {
            size += 5;    // 크기를 늘려서 재할당
            pi = (int*)realloc(pi, size*sizeof(int));
            pi[cnt++] = num;    // 재할당한 공간에 값 대입
        }
    }
    for (i = 0; i < cnt; i++)
    {
        printf("%5d", pi[i]);    // 입력한 데이터 출력
    }
    free(pi);    // 동적 할당 저장 공간 반납

    return 0;
}