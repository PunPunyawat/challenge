#include <stdio.h>
#include <math.h>
int main() {

	int num1{}, num2{}, num3{}, letters = 0;
	double ans{}, ans1{}, ans2{}, ave{}, ans3{};
	scanf_s("%d%d", &num1, &num2);

	if (num1 < num2) {

		for (int i = num2; num1 <= num2; num1++) {

			printf("%d ", num1);
			letters += 1.0;
			ans += num1;


			ans1 += num1 * num1;
			ans2 += num1;


		}

		ans3 = ans2 * ans2;
		printf("\nAverage = %.1lf\n", ans / letters);

		printf("SD = %.2lf\n", sqrt(((letters * ans1) - (ans3)) / (letters * (letters - 1))));

	}


	else if (num1 > num2) {

		for (int i = num2; num1 >= num2; num1--) {

			printf("%d ", num1);
			letters += 1.0;
			ans += num1;

			ans1 += num1 * num1;
			ans2 += num1;


		}

		ans3 = ans2 * ans2;
		printf("\nAverage = %.1f\n", ans / letters);

		printf("SD = %.2lf\n", sqrt(((letters * ans1) - (ans3)) / (letters * (letters - 1))));

	}
	return 0;
}








