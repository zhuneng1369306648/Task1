#include<stdio.h>
#include <stdlib.h>  
#include <math.h>  
#inc  
lude <string.h>  
//没有实现括号的运算  混合运算都能行  
int main()
{
	int a1, a2, a3;
	char op1, op2, op3;

	//为了保证结构，在最开始加上一个0+   设置初始a1值
	a1 = 0;
	op1 = '+';
	while (op1 != '=')
	{
		scanf("%d %c", &a2, &op2);    
		//计算乘除  
		while (op2 == '*' || op2 == '/')
		{
			scanf("%d %c", &a3, &op3);
			if (op2 == '*')
				a2 *= a3;
			else if (op2 == '/')
				a2 /= a3;
			op2 = op3;     //先算乘除  再算加减  
		}
		//将两项相加（减）  
		if (op1 == '+')
			a1 += a2;
		else if (op1 == '-')
			a1 -= a2;
		op1 = op2;    //
	}

	printf("%d", a1);//输出结果

	return 0;
}