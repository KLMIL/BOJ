# 커트라인

https://www.acmicpc.net/problem/25305

<hr> 

### C++
- C++ STL sort()
  - algorithm 헤더 사용
``` cpp
#include <algorithm>
```

  - sort(start, end);
``` cpp
    int a[10] = {5, 4, 3, 2, 1, 10, 9, 8, 7, 6};
    std::sort(a, a + 10);
    // 출력하면 오름차순 정렬
```

  - sort(start, end, compare);
    - compare 함수를 통해 반환 값에 맞게 정렬이 동작함
``` cpp
bool compare(int a, int b) {
    return a < b;
}

int main(void) {
    int a[10] = {5, 4, 3, 2, 1, 10, 9, 8, 7, 6};
    std::sort(a, a + 10, compare);
    // 출력하면 내림차순 정렬
}
```

- 실제 사용할 때에는 <, > 연산자 오버로딩을 통해 원하는 변수를 비교한다.
``` cpp
#include <iostream>
#include <algorithm>

class Student {
    public:
        string name;
        int score;
        Student(string name, int score) {
            this->name = name;
            this->score = score;
        }
        bool operator < (Stuent &student) {
            return this->score < student.score;
        }
};

bool compare(int a, int b) {
    return a > b;
}

int main(void) {
    Student students[] = {
        Student("가가가", 90),
        Student("나나나", 93),
        Student("다다다", 96),
        Student("라라라", 87),
        Student("마마마", 84)
    };

    sort(students, students + 5);
    // 출력하면 오름차순 정렬돼있다
}
```

<hr>
