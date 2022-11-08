#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int com;
    int user;
    int cnt=0;
    int play;

    srand(time(NULL));
    com=rand()%100+1;
    play=rand()%8+3;

    while(play==1,cnt)
    {
        printf("%d 만큼 기회남음\n",cnt);
        printf("1~100사이의 수를 입력.\n");
        scanf("%d",&user);

        while(user>100&&user<1)
        {
            printf("\n 잘못된 입력입니다.\n 다시 입력해주세요\n");
            scanf("%d",&user);
        }
        if(user<100&&user>1)
        {
            if(user>com)
            {
                printf("down!\n");
                cnt--;
            }
        else if(user<com)
        {
            printf("up!\n");
            cnt--;
        }
        else if(com==user)
        {
            cnt--;
            printf("정답!\n %d 번만에 맞춤.\n",cnt);
            play=0;
        }
    }
}
}