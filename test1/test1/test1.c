
#include <stdio.h>
int Add(int a, int b)
{
	return(a + b);
}
/*������*/
main()
{
	int x, y, sum = 0;
	printf("Input two integers:");
	scanf_s("%d%d", &x, &y);/*��������������x��y�ĺ�*/
	sum = Add(x, y);/*���ú���Add����x��y���֮��*/
	printf("sum = %d\n", sum);/*����x��y���֮��*/
}