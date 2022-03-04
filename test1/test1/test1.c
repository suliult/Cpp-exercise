
#include <stdio.h>
int Add(int a, int b)
{
	return(a + b);
}
/*主函数*/
main()
{
	int x, y, sum = 0;
	printf("Input two integers:");
	scanf_s("%d%d", &x, &y);/*调用两个整形数x和y的和*/
	sum = Add(x, y);/*调用函数Add计算x和y相加之和*/
	printf("sum = %d\n", sum);/*计算x和y相加之和*/
}