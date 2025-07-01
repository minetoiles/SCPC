n개 과목 수 중 k개 점수 합의 최대

ver1. qsort함수 사용
qsort(정렬할 배열의 시작 주소, 배열 길이, 한 요소의 크기, 정렬 기준 정의(cmp))
  
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Answer;
int cmp(const void* a, const void* b) {
	return *(int*)b - *(int*)a; //내림차순 정렬
}
int main(void)
{
	int T, test_case;

	scanf("%d", &T);
	for (test_case = 0; test_case < T; test_case++)
	{
		int n, k;
		Answer = 0;
		scanf("%d %d", &n, &k);

		int* score = malloc(sizeof(int) * n);
		int i;
		for (i = 0; i < n; i++) {
			scanf("%d", &score[i]);
		}
		qsort(score, n, sizeof(int), cmp);

		for (i = 0; i < k; i++) {
			Answer += score[i];
		}


		printf("Case #%d\n", test_case + 1);
		printf("%d\n", Answer);

	}

	return 0;
}


ver2. pick함수 사용
