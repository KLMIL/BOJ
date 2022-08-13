### C++
#### < 시간복잡도가 O(n^2)인 정렬 알고리즘 >
- 버블 정렬(Bubble sort) : Stable
  - 서로 인접한 2개의 레코드를 비교해서, 크기가 순서대로 되어 있지 않으면 서로 교환한다.
  - 장점
    - 구현이 매우 간단하다.
  - 단점
    - 하나의 요소가 가장 왼쪽에서 가장 오른쪽으로 이동하기 위해서 모든 다른 요소들과 교환되어야 한다.
    - 최종 위치에 이미 있는 경우에도 교환되는 일이 일어난다.
```cpp
    void BubbleSort(int list[], int len) {
        for (int i = len - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                // j + 1번째 요소가 j번째 요소보다 크다면 스왑 (오름차순)
                if (list[j] > list[j + 1]) {
                    int temp = list[j];
                    list[j] = list[j + 1];
                    list[j + 1] = temp;
                }
            }
        }
    }
```


<br>

- 선택 정렬(Selection sort) : Not Stable
  - 제자리 정렬(in-place sorting) 알고리즘
    - 입력 배열 이외에 다른 추가 메모리를 요구하지 않는 정렬 방법
  - 첫 번째 자료를 두 번째 자료부터 마지막 자료까지 차례대로 비교해서 최소, 혹은 최대값을 첫 번째에 놓고, 두 번째 자료를 세 번째 자료부터 마지막 자료까지 차례대로 비교하는 과정을 반복한다.
  - 장점
    - 자료 이동 횟수가 미리 결정된다.
  - 단점
    - 안정적이지 않은 정렬 방법이다. -> 같은 레코드가 있는 경우 상대적 위치가 변경될 수 있다.
```cpp
    void SelectionSort(int list[], int len) {
        // 마지막 숫자는 정렬되기 때문에 len - 1만큼 반복한다.
        for (int i = 0; i < len - 1; i++) {
            int index = i;

            // 최솟값을 탐색한다.
            for (int j = i + 1; j < n; j++) {
                if (list[j] < list[index]) {
                    index = j;
                }
            }

            // 최소값이 자기 자신이면 이동하지 않는다.
            if (i != index) {
                int temp = list[i];
                list[i] = list[index];
                list[index] = temp;
            }
        }
    }
```

<br>

- 삽입 정렬(Insertion sort) : Stable
  - Key값으로 정한 요소(두 번째 자료부터 차례대로)를 그 앞의 자료들과 비교해 삽입할 위치를 찾은 후 자료를 뒤로 옮기고 지정한 자리에 자료를 삽입한다.
  - 장점
    - 안정한(Stable) 정렬 방법
    - 레코드의 수가 적다면 다른 복잡한 정렬 방법보다 유리할 수 있다.
    - 대부분의 레코드가 정렬되어 있는 경우 매우 효율적일 수 있다.
  - 단점
    - 레코드의 이동이 비교적 많다
    - 레코드 수가 많고, 레코드 크기가 클 경우에 적절하지 않다.
```cpp
    void InsertionSort(int list[], int len) {
        // 0번째 요소는 이미 정렬된 것으로 볼 수 있으므로, 1번째 요소부터 시작한다.
        for (int i = 1; i < len; i++) {
            int key = list[i]; // 현재 삽입될 숫자인 i번째 정수가 key값

            // key값보다 큰 레코드들을 오른쪽으로 이동시킨다. (오름차순)
            int j;
            for (j = i - 1; j >= 0 && list[j] > key; j--) {
                list[j + 1] = list[j];
            }

            // 레코드의 이동이 끝나면 해당 자리에 key값을 입력한다.
            list [j + 1] = key;
        }
    }
```