#include<stdio.h>
main()
{
	int rno,s1,s2,s3,tot;
	char name[20];
	float avg;
	printf("\n enter roll no:");
	scanf("%d",&rno);
	printf("\n enter student name:");
	scanf("%s",&name);
	printf("\n enter s1,s2,s3:");
	scanf("%d%d%d",&s1,&s2,&s3);
	tot=s1+s2+s3;
	avg=(float)tot/3;
	printf("\n rollno: %d",rno);
	printf("\n student name:%s",name);
	printf("\n total:%d",tot);
	printf("\n average:%f",avg);
}
