#include<stdio.h>

int main(void)
{
    int kor = 3, eng = 5, mat = 4;                     //국어,영어,수학의 학점 초기화
    int credits;                                       //전체 학점을 저장할 변수
    int res;                                           //연산 결과를 저장할 변수
    double kscore = 3.8, escore = 4.4, mscore = 3.9;   //각 과목의 평점 초기화
    double grade;                                      //평점의 평균을 저장할 변수

    credits = (kor+eng+mat);                           //전체 학점 계산
    grade = (kscore+escore+mscore);                    //평점의 평균 계산

    if((credits>=10) && (grade>4.0))res = 1;
    else res = 0;

    printf("%d", res);                                 //결과 출력

    return 0;
}