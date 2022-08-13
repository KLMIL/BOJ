### C++
#### < 시간복잡도가 O(n + K)인 정렬 알고리즘 
- 카운팅 정렬(Counting sort)
``` cpp
int* CountingSort(int list[], int len, int max) {
	int* count = new int[max + 1];  // 원소 숫자를 셀 배열
	int* result = new int[len];     // 정렬 후 배열
	
    // 원소 숫자 배열 초기화
	for (int i = 0; i <= max; i++) {
		count[i] = 0;
	}
	
    // 원소 숫자 카운팅
	for (int i = 0; i < len; i++) {
		count[list[i]]++;
	}
	
    // 누적합 구하기
	for (int i = 1; i <= max; i++) {
		count[i] += count[i - 1];
	}
	
    // 누적합을 기준으로 결과 배열에 정렬하기
	for (int i = len - 1; i >= 0; i--) {
		result[--count[list[i]]] = list[i];
	}
	
	delete(count);
	return result;
}
```