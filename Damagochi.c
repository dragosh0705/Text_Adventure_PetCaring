#define _CRT_SECURE_NO_WARNINGS
# define DELAY 500
# include <stdio.h>
#include <windows.h>
# include <stdarg.h>


int feeding;
int walking;
int playing;
int nfeeding;
int nwalking;
int nplaying;
int health = 80;
char answer[10];
char yes[5];
char no[5];
int bef;

int work() {
	feeding = health + 15;
	walking = feeding - 30;
	playing = walking - 5;
	nfeeding = health - 10;
	nwalking = health +5 ;
	nplaying = health - 3;
	answer == yes || no;
	bef == feeding;

}

void main() {
	char pet[10];
	char name[10];
	char shitzu[10];
	char darkshund[10];
	char yorksher[10];

	while (1) {
		printf("안녕하세요 CMD 강아지 다마고치 입니다.\n");
		Sleep(2000);
		printf("무슨 종류를 입양하시겠어요 ? (shitzu, darkshund, yorksher) \n");
		Sleep(2000);
		scanf("%s", &pet);
		printf("%s 종을 입양하실건가요? (yes or no) : ", pet);
		scanf("%s", &answer);

		work();

		if (strcmp(answer,"yes")==0) {
			printf("%s를 입양하셨습니다.\n", pet);
			Sleep(2000);
			printf("현재 % s의 체력은 80 / 100입니다.\n", pet);
			Sleep(2000);
			printf(" % s의 이름을 지어주세요.\n 이름 : ", pet);
			scanf("%s", &name);
			printf("%s의 이름을 %s로 지었습니다.\n", pet, name);
			Sleep(2000);
			printf("%s에게 밥을 줄까요?\n", name);
			scanf("%s", &answer);

			if (strcmp(answer, "yes") == 0) {
				printf("%s에게 밥을 줬습니다. 체력이 15 올라갑니다.\n", name);
				Sleep(1000);
				printf("체력 : %d\n", feeding);
				Sleep(2000);

				printf("%s가 산책을 나가고 싶어합니다. 산책을 나갈까요? : (yes or no)\n", name);
				scanf("%s", &answer);

				if (strcmp(answer, "yes") == 0) {
					printf("산책을 나갔습니다. 체력이 30 감소합니다.\n");
					Sleep(1000);
					printf("체력 : %d\n", walking);
					Sleep(2000);
				}

				if (strcmp(answer, "no") == 0) {
					printf("산책을 나가지 않았습니다. 체력이 5 증가합니다.\n");
					Sleep(1000);
					printf("체력 : %d\n", nwalking);
					Sleep(2000);
				}
			}
			if (strcmp(answer, "no") == 0) {
				printf("밥을 주지 않았습니다. 체력이 10 감소합니다.\n");
				Sleep(1000);
					printf("체력 : %d\n", nfeeding);
					Sleep(2000);

					printf("%s가 산책을 나가고 싶어합니다. 산책을 나갈까요? : (yes or no)\n", name);
					scanf("%s", &answer);

					if (strcmp(answer, "yes") == 0) {
						printf("산책을 나갔습니다. 체력이 30 감소합니다.\n");
						Sleep(1000);
						printf("체력 : %d\n", walking);
						Sleep(2000);
					}

					if (strcmp(answer, "no") == 0) {
						printf("산책을 나가지 않았습니다. 체력이 5 증가합니다.\n");
						Sleep(1000);
						printf("체력 : %d\n", nwalking);
						Sleep(2000);
					}
			}
			break;
		}
		if (strcmp(answer,"no")==0) {
			printf("다시 선택하세요.\n");
			Sleep(2000);
			continue;
		}
	}
	/*
		printf("%s가 산책을 나가고 싶어합니다. 산책을 나갈까요? : (yes or no)\n", name);
		scanf("%s", &answer);

		if (strcmp(answer, "yes") == 0) {
			printf("산책을 나갔습니다. 체력이 30 감소합니다.\n");
			Sleep(1000);
			printf("체력 : %d\n", walking);
			Sleep(2000);
		}

		if (strcmp(answer, "no") == 0) {
			printf("산책을 나가지 않았습니다. 체력이 5 증가합니다.\n");
			Sleep(1000);
			printf("체력 : %d\n", nwalking);
			Sleep(2000);
		}

		printf("%s가 공놀이를 하고 싶어합니다. 공놀이를 할까요? : (yes or no) \n", name);
		scanf("%s", &answer);
		*/



}






/*
void main() {
	char pet[10];
	char dog[10];
	char cat[10];
	char parrot[10];
	int health = 80;
	char answer1[10];
	char answer2[10];
	char answer3[10];
	char answer4[10];
	char name[10];
	char yes1[7];
	char no1[7];
	char yes2[7];
	char no2[7];
	char yes3[7];
	char no3[7];
	char yes4[7];
	char no4[7];

	printf("안녕하세요 CMD 다마고치입니다.\n");
	while (1) { printf("무슨 동물을 입양하시겠어요 ? : (dog, cat, parrot) \n"); 
		scanf("%s", &pet);
		printf("%s를 입양하시겠어요? : (yes1 or no1)\n", pet);
		scanf("%s", &answer1);

		if (strcmp(answer1, "yes1") == 0) {
			printf("%s를 입양하셨습니다.\n 현재 %s의 체력은 80/100입니다.\n %s의 이름을 지어주세요.\n 이름 : ", pet, pet, pet);
			scanf("%s", &name);
			printf("%s의 이름을 %s로 지었습니다.\n", pet, name);
			printf("%s에게 밥을 줄까요? : (yes2 or no2)\n", name);
			scanf("%s", answer2);

			if (strcmp(answer2, "yes2") == 0) {
				printf("밥을 줬습니다. 체력이 20 % 증가합니다.\n");
				printf("체력 : %d/100\n", health = health + 20);
			}

			if (strcmp(answer2, "no2") == 0) {
				printf("체력이 그대로입니다.\n");
				printf("체력 : %d/100\n", health);
			}

			printf("%s가 산책을 나가고 싶어합니다. 나가시겠습니까? : (yes3 or no3) \n", name);
			scanf("%s", &answer3);

			if (strcmp(answer3, "yes3") == 0) {
				printf("산책하고 왔습니다. 체력이 30% 감소합니다.\n");
				printf("체력 : %d/100\n", health = health - 30);
			}

			if (strcmp(answer3, "no3") == 0) {
				printf("산책하지 않았습니다.\n");
				printf("체력 : %d/100\n", health);
			}

			printf("%s가 공놀이를 하고 싶어합니다. 놀아줄까요 ? : (yes4 or no4)\n", name);
			scanf("%s", &answer4);

			if (strcmp(answer4, "yes4") == 0) {
				printf("공놀이를 하였습니다. 체력이 5% 감소합니다.\n");
				printf("체력 : %d/100", health = health - 5);
			}
			
			if (strcmp(answer4, "no4") == 0) {
				printf("놀지 않았습니다. 체력이 그대로입니다.\n"); 
				printf("체력 : %d/100", health);
			}

			break;
		}

		if (strcmp(answer1, "no1") == 0) {
			printf("다시 고르세요.\n");
			continue;
		}
	}
}
*/