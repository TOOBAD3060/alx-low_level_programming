#include <stdio.h>
#include "0-object_like_macro.h"
#include "1-pi.h"
#include "4-sum.h"
#include "3-function_like_macro.h"

int main(void)
{
	printf("%f\n",SIZE + PI);
	printf("%d\n",ABS(-5));
	printf("%d",SUM(90,90));
	return (0);
}
