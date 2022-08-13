# 수 정렬하기 2

https://www.acmicpc.net/problem/2751

<hr> 

### C++
- 시간복잡도가 O(nlogn)인 정렬 알고리즘
  - 병합(합병) 정렬(Merge sort)
  - 힙 정렬(Heap sort)
  - 퀵 정렬(Quick sort)

- 이 문제에서 "퀵 정렬"은 최악의 경우 O(n²) 이므로 적합하지 않다. 한 번 섞은 뒤에 정렬하는 등의 방법으로 해소할 수 있다. pivot 선택을 잘 해야 한다.
- "힙 정렬"은 DoHeapify를 n / 2 부터 함으로써 시간을 절약할 수 있다.
<hr>
