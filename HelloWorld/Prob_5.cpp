#include<stdio.h>
#include<stdlib.h>

#define MINCHESTSIZE 90    //최소값을 90으로 매크로정의
#define MAXCHESTSIZE 100   //최대값을 100으로 매크로정의

int main(void)
{
    int nCHESTSize = 0;   //가슴둘레의 크기를 저장할 변수
    char chCHESTSize;    //가슴둘레를 초기화

    printf("Input your chest size:\n"); //문자열"Input your chest size"출력
    scanf("%d" , & nCHESTSize);   //변수에 가슴둘레 값 입력

    if(nCHESTSize <= MINCHESTSIZE)  
    {
        chCHESTSize = 'S';  //가슴둘레사이즈가 최솟값보다 작거나같으면 S
    }
    else if((nCHESTSize > MINCHESTSIZE)&&(nCHESTSize<=MAXCHESTSIZE))
    {
        chCHESTSize = 'M';  //가슴둘레사이즈가 최소값보다 크고 최대값보다 작거나같으면 M
    }
    else
    {
        chCHESTSize = 'L';  //둘다 아니면 L
    }

    printf("Your chest is %c", chCHESTSize);  //if문으로 결정된 값 출력

    return 0;
}