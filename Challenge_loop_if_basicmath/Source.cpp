#include<stdio.h>
#include<cmath>
int main()
{
	int M, N, i, count = 0, sum2 = 0;
	float mean, SD, sum = 0;
	scanf_s("%d %d", &M, &N);
		if (M < N){
		for (i = M; i <= N; i++){
			printf("%d ", i);
			count++;
			sum += i;
			sum2 += i * i;
		}
	}
	else if (M > N){
		for (i = M; i >= N; i--){
			printf("%d ", i);
			count++;
			sum += i;
			sum2 += i * i;
		}
	}
	else if (M == N){
		for (i = M; i >= N; i--){
			printf("%d ", i);
			count ++;
			sum += i;
			sum2 += i * i;
		}
	}
	mean = sum / count;
	SD = sqrt(((count * sum2) - (sum * sum)) / (count * (count - 1)));
	if (count > 1){
		printf("\nAverage = %.1f", mean);
		printf("\nSD = %.2f", SD);
	}
	else if (count == 1){
		printf("\nAverage = %.1f", mean);
		printf("\nSD = 0.00");
	}
	return 0;
}