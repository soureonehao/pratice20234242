#include<stdio.h>
struct time {
	int year;
	int month;
	int day;
};
struct xinxi {
	char xuehao[15];
	char name[15];
	int math, english, chengxu;
	struct time date;
}Stu[2];
void main() {
	int i, box = 0;
	printf("��������Ϣ��");
	for (i = 0; i < 2; i++) {
		printf("�������%d��ͬѧ����Ϣ��", i + 1);
		printf("������ѧ�ţ�");
		scanf_s("%s", Stu[i].xuehao, 15);
		printf("\n������������");
		scanf_s("%s", Stu[i].name, 15);
		printf("\n��������������գ�");
		while (1) {
			scanf_s("%d%d%d", &Stu[i].date.year, &Stu[i].date.month, &Stu[i].date.day);
			if (Stu[i].date.year < 1989 || Stu[i].date.year > 2007) {
				printf("�����������������������룺");
				continue;
			}
			if (Stu[i].date.month < 1 || Stu[i].date.month > 12) {
				printf("��������·��������������룺");
				continue;
			}
			if (Stu[i].date.day < 1 || Stu[i].date.day > 30) {
				printf("������������������������룺");
				continue;
			}
			break;
		}
	
		printf("\n��������ѧ�ɼ���Ӣ��ɼ�������ɼ���");
		scanf_s("%d%d%d", &Stu[i].math, &Stu[i].english, &Stu[i].chengxu);
	}
	for (i = 0; i < 2; i++) {
		printf("��%d��ͬѧ����Ϣ��ѧ�ţ�%s ������%s �������£� %d-%d-%d Ӣ��ɼ���%d ��ѧ�ɼ���%d ����ɼ���%d", i + 1, Stu[i].xuehao, Stu[i].name, Stu[i].date.year, Stu[i].date.month, Stu[i].date.day, Stu[i].english, Stu[i].math, Stu[i].chengxu);
	}
}