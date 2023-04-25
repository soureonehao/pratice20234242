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
	printf("请输入信息：");
	for (i = 0; i < 2; i++) {
		printf("请输入第%d个同学的信息：", i + 1);
		printf("请输入学号：");
		scanf_s("%s", Stu[i].xuehao, 15);
		printf("\n请输入姓名：");
		scanf_s("%s", Stu[i].name, 15);
		printf("\n请输入出生年月日：");
		while (1) {
			scanf_s("%d%d%d", &Stu[i].date.year, &Stu[i].date.month, &Stu[i].date.day);
			if (Stu[i].date.year < 1989 || Stu[i].date.year > 2007) {
				printf("您输入的年份有误，请重新输入：");
				continue;
			}
			if (Stu[i].date.month < 1 || Stu[i].date.month > 12) {
				printf("您输入的月份有误，请重新输入：");
				continue;
			}
			if (Stu[i].date.day < 1 || Stu[i].date.day > 30) {
				printf("您输入的日期有误，请重新输入：");
				continue;
			}
			break;
		}
	
		printf("\n请输入数学成绩，英语成绩，程序成绩：");
		scanf_s("%d%d%d", &Stu[i].math, &Stu[i].english, &Stu[i].chengxu);
	}
	for (i = 0; i < 2; i++) {
		printf("第%d个同学的信息：学号：%s 姓名：%s 出生年月： %d-%d-%d 英语成绩：%d 数学成绩：%d 程序成绩：%d", i + 1, Stu[i].xuehao, Stu[i].name, Stu[i].date.year, Stu[i].date.month, Stu[i].date.day, Stu[i].english, Stu[i].math, Stu[i].chengxu);
	}
}