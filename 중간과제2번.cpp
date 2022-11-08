#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int com;  // 컴퓨터에 의해 결정된 임의의 숫자를 저장하는 변수
int user; // 사용자가 입력한 번호를 저장하는 변수
int count = 0;
int play;

srand(time(NULL));
com = rand() % 100 + 1;
play = rand() % 8 + 3;

printf("Up & Down Game\n\n");
printf("%d chances in total\n", play);
printf("Exit when 0 is entered\n\n");
while (count < play) // 현재 시도 횟수가 최대 시도 횟수보다 적을 때만 반복
{
printf("Enter an integer between 1~100. : ");
scanf("%d", &user);
if (user == 0) // 입력한 숫자가 0인 경우 종료
{
printf("Game over.\n");
return 0;
}
else if (user < 0 || user > 100) // 입력한 번호가 범위를 벗어나면 다시 입력됩니다.
printf("Out of range.\n");
else
{
count++; // 정상 범위 내의 숫자를 입력할 때만 횟수 증가
if (user == com) // 입력한 숫자가 컴퓨터에 있는 번호와 같으면 이깁니다.
{
printf("The answer after %d attempts.\n", count);
return 0;
}
else // 동일하지 않은 경우 UP 또는 DOWN을 인쇄하여 사용자에게 전달합니다.
printf("%d Number of attempts : %s\n", count, (user > com ? "DOWN" : "UP"));
}
}
printf("Defeat. The answer is : %d\n", com); // 최대 시도 횟수 내에 승리하지 못하면 패배한다.
return 0;
}