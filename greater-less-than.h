#ifndef GREATERORLESS_H
#define GREATERORLESS_H
int greaterOrless()
{
	int num1, num2;
	printf("Code works good!\n");
	printf("Enter 2 numbers: \n");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	if (num1 > num2)
	{
		return printf("%d is greater than %d", num1, num2);
	}
	else if (num1 < num2) {
		return printf("%d is less than %d", num1, num2);
	}
	else {
		return printf("%d and %d are both equals", num1, num2);
	}
}
#endif // GREATERORLESS_H