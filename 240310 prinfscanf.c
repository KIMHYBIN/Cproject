// 프로그래밍 언어에서 중요한 것
// 1) 변수/조건문 설정 : 여태 풀었던 문제 보며 어떤 식으로 변수 설정했는지 분석
//                     (필요하면 순서도 그려보기)
// 2) 2차원 리스트 회전 : 교수님 풀이랑 주영씨 풀이 암기하기



// 주석 설정하는 법 : //
// 범위 정해서 주석 지정 : 주석 시작 /* ~코드~ */ 주석 끝

#include <stdio.h>

int main()
{
/* #include <stdio.h>    // include : 라이브러리 호출 명령어. 꼭 적어줘야 한다. 
                      // <stdio.h> : Standard input/output.Header의 약자
int main()    */        // main 이라는 함수 사용
/* {                   // 중괄호 필수
    int age;        // 변수 age가 정수일 것이라고 선언 
    age = 12;       // age 값 지정

    printf("%d\n", age);    // printf는 출력함수.
    return 0;              // 세미콜론 ; 은 모든 문장 끝에 필수
}                   // 중괄호 필수
 */


    /* float f = 46.5f;
    printf("%.2f\n", f);
    double d = 4.428;
    printf("%.2lf\n", d); */

    // const int YEAR = 2000;    // const를 붙이면 상수(항상 고정된 수?)가 됨
    // printf("출생년도: %d\n", YEAR);
    // int YEAR = 2001;       // 변수 YEAR에 다른 값을 저장하면 오류 발생
    // printf("출생년도: %d\n", YEAR);

    // int add = 3 + 7;          // 변수에 숫자 연산을 넣어도 그 결괏값이 출력됨
    // printf("3+7은 %d\n", add);
    // printf("%d + %d = %d\n", 30, 79, 30 * 79);

    // scanf : 키보드 입력을 받아서 저장 == 파이썬의 input과 유사한 개념
    // int input;
    // printf("값을 입력하세요 : ");
    // scanf("%d", &input);
    // printf("입력값 : %d\n", input);

    // int one, two, three;

    // printf("3개의 정수를 입력하세요 : ");
    // scanf("%d %d %d", &one, &two, &three);
    // printf("첫 번째 값 : %d\n", one);
    // printf("두 번째 값 : %d\n", two);
    // printf("세 번째 값 : %d\n", three);

    // char c = 'a';
    // printf("%c\n", c);

    // char str[256];
    // scanf("%s", str, sizeof(str));    // sizeof를 통해 256보다 큰 문자열이 들어오지 않도록 크기를 제한(?)해줘야함
    // printf("%s\n", str);        // 문자열 입력 시 공백을 넣으면 공백 앞까지만 입력됨

    // 프로젝트
    // 경찰관이 범죄자의 정보를 입수 (조서 작성)
    // 이름, 나이, 몸무게, 키, 범죄명
    char name[256];
    printf("이름이 뭐예요? ");
    scanf("%s", name, sizeof(name));    // 변수(입력값)이 문자열이면 그냥 변수 이름만 기재(문자열의 크기 제한해주기)

    int age;
    printf("몇 살이에요? ");
    scanf("%d", &age);    // 변수(입력값)이 숫자(정수, 실수 등)면 변수 이름 앞에 & 붙여주기 

    float weight;
    printf("몸무게는 몇 kg이에요? ");
    scanf("%f", &weight);

    double height;
    printf("키는 몇 cm예요? ");
    scanf("%lf", &height);

    char what[256];
    printf("무슨 범죄를 저질렀나요? ");
    scanf("%s", what, sizeof(what));    

    // 조서 내용 출력
    printf("\n----- 범죄자 정보 -----\n");
    printf("이름        : %s\n", name);
    printf("나이        : %d\n", age);
    printf("몸무게      : %.2f\n", weight);
    printf("키          : %.2lf\n", height);
    printf("범죄명      : %s\n", what);
    printf("------------------------\n");

    // int a = 10;
    // printf("a는 %d\n", a);
    // a++;                     // a++ -> a += 1 과 같음
    // printf("a는 %d\n", a);
    // a++;
    // printf("a는 %d\n", a);
    
    // int b = 20;
    // printf("b는 %d\n", ++b);    // ++b는 b+1이므로 21 출력
    // printf("b는 %d\n", b++);    // b++는 b값을 출력 후 1을 더함. 21 출력 후 다음 값에 1을 더함
    // printf("b는 %d\n", b);    // b는 위에서 출력 후 1 더한 값이므로 22 출력

    // return 0;
}
