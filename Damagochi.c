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
		printf("�ȳ��ϼ��� CMD ������ �ٸ���ġ �Դϴ�.\n");
		Sleep(2000);
		printf("���� ������ �Ծ��Ͻðھ�� ? (shitzu, darkshund, yorksher) \n");
		Sleep(2000);
		scanf("%s", &pet);
		printf("%s ���� �Ծ��Ͻǰǰ���? (yes or no) : ", pet);
		scanf("%s", &answer);

		work();

		if (strcmp(answer,"yes")==0) {
			printf("%s�� �Ծ��ϼ̽��ϴ�.\n", pet);
			Sleep(2000);
			printf("���� % s�� ü���� 80 / 100�Դϴ�.\n", pet);
			Sleep(2000);
			printf(" % s�� �̸��� �����ּ���.\n �̸� : ", pet);
			scanf("%s", &name);
			printf("%s�� �̸��� %s�� �������ϴ�.\n", pet, name);
			Sleep(2000);
			printf("%s���� ���� �ٱ��?\n", name);
			scanf("%s", &answer);

			if (strcmp(answer, "yes") == 0) {
				printf("%s���� ���� ����ϴ�. ü���� 15 �ö󰩴ϴ�.\n", name);
				Sleep(1000);
				printf("ü�� : %d\n", feeding);
				Sleep(2000);

				printf("%s�� ��å�� ������ �;��մϴ�. ��å�� �������? : (yes or no)\n", name);
				scanf("%s", &answer);

				if (strcmp(answer, "yes") == 0) {
					printf("��å�� �������ϴ�. ü���� 30 �����մϴ�.\n");
					Sleep(1000);
					printf("ü�� : %d\n", walking);
					Sleep(2000);
				}

				if (strcmp(answer, "no") == 0) {
					printf("��å�� ������ �ʾҽ��ϴ�. ü���� 5 �����մϴ�.\n");
					Sleep(1000);
					printf("ü�� : %d\n", nwalking);
					Sleep(2000);
				}
			}
			if (strcmp(answer, "no") == 0) {
				printf("���� ���� �ʾҽ��ϴ�. ü���� 10 �����մϴ�.\n");
				Sleep(1000);
					printf("ü�� : %d\n", nfeeding);
					Sleep(2000);

					printf("%s�� ��å�� ������ �;��մϴ�. ��å�� �������? : (yes or no)\n", name);
					scanf("%s", &answer);

					if (strcmp(answer, "yes") == 0) {
						printf("��å�� �������ϴ�. ü���� 30 �����մϴ�.\n");
						Sleep(1000);
						printf("ü�� : %d\n", walking);
						Sleep(2000);
					}

					if (strcmp(answer, "no") == 0) {
						printf("��å�� ������ �ʾҽ��ϴ�. ü���� 5 �����մϴ�.\n");
						Sleep(1000);
						printf("ü�� : %d\n", nwalking);
						Sleep(2000);
					}
			}
			break;
		}
		if (strcmp(answer,"no")==0) {
			printf("�ٽ� �����ϼ���.\n");
			Sleep(2000);
			continue;
		}
	}
	/*
		printf("%s�� ��å�� ������ �;��մϴ�. ��å�� �������? : (yes or no)\n", name);
		scanf("%s", &answer);

		if (strcmp(answer, "yes") == 0) {
			printf("��å�� �������ϴ�. ü���� 30 �����մϴ�.\n");
			Sleep(1000);
			printf("ü�� : %d\n", walking);
			Sleep(2000);
		}

		if (strcmp(answer, "no") == 0) {
			printf("��å�� ������ �ʾҽ��ϴ�. ü���� 5 �����մϴ�.\n");
			Sleep(1000);
			printf("ü�� : %d\n", nwalking);
			Sleep(2000);
		}

		printf("%s�� �����̸� �ϰ� �;��մϴ�. �����̸� �ұ��? : (yes or no) \n", name);
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

	printf("�ȳ��ϼ��� CMD �ٸ���ġ�Դϴ�.\n");
	while (1) { printf("���� ������ �Ծ��Ͻðھ�� ? : (dog, cat, parrot) \n"); 
		scanf("%s", &pet);
		printf("%s�� �Ծ��Ͻðھ��? : (yes1 or no1)\n", pet);
		scanf("%s", &answer1);

		if (strcmp(answer1, "yes1") == 0) {
			printf("%s�� �Ծ��ϼ̽��ϴ�.\n ���� %s�� ü���� 80/100�Դϴ�.\n %s�� �̸��� �����ּ���.\n �̸� : ", pet, pet, pet);
			scanf("%s", &name);
			printf("%s�� �̸��� %s�� �������ϴ�.\n", pet, name);
			printf("%s���� ���� �ٱ��? : (yes2 or no2)\n", name);
			scanf("%s", answer2);

			if (strcmp(answer2, "yes2") == 0) {
				printf("���� ����ϴ�. ü���� 20 % �����մϴ�.\n");
				printf("ü�� : %d/100\n", health = health + 20);
			}

			if (strcmp(answer2, "no2") == 0) {
				printf("ü���� �״���Դϴ�.\n");
				printf("ü�� : %d/100\n", health);
			}

			printf("%s�� ��å�� ������ �;��մϴ�. �����ðڽ��ϱ�? : (yes3 or no3) \n", name);
			scanf("%s", &answer3);

			if (strcmp(answer3, "yes3") == 0) {
				printf("��å�ϰ� �Խ��ϴ�. ü���� 30% �����մϴ�.\n");
				printf("ü�� : %d/100\n", health = health - 30);
			}

			if (strcmp(answer3, "no3") == 0) {
				printf("��å���� �ʾҽ��ϴ�.\n");
				printf("ü�� : %d/100\n", health);
			}

			printf("%s�� �����̸� �ϰ� �;��մϴ�. ����ٱ�� ? : (yes4 or no4)\n", name);
			scanf("%s", &answer4);

			if (strcmp(answer4, "yes4") == 0) {
				printf("�����̸� �Ͽ����ϴ�. ü���� 5% �����մϴ�.\n");
				printf("ü�� : %d/100", health = health - 5);
			}
			
			if (strcmp(answer4, "no4") == 0) {
				printf("���� �ʾҽ��ϴ�. ü���� �״���Դϴ�.\n"); 
				printf("ü�� : %d/100", health);
			}

			break;
		}

		if (strcmp(answer1, "no1") == 0) {
			printf("�ٽ� ������.\n");
			continue;
		}
	}
}
*/