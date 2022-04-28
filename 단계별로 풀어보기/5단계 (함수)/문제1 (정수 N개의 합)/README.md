# 정수 N개의 합

https://www.acmicpc.net/problem/15596

<hr> 

### C++

- vector container
  - 자동으로 메모리가 할당되는 배열
  - template를 이용하기 때문에 데이터 타입은 자유롭게 사용가능
- 장단점
  - 장점
    - 처음부터 원소의 개수를 정하지 않아도 되고, 삽입/삭제시 효율적인 메모리 관리가 가능
    - 유용한 멤버 함수가 많다.
    - 배열 기반이므로 Random Access가 가능하다.
  - 단점
    - 배열 기반의 container이므로, 삽입삭제가 자주 이뤄지면 비효율적이다.
- 사용 준비
  - \<vector> 헤더 추가
  - namespace는 std를 사용한다.
  - 기본적인 선언 방식은 vector<[Data type]> [Name]; 이다.
- 생성자
  - vector<[type]> v; // [type]형의 빈 vector 생성
  - vector<[type]> v(n); // 0으로 초기화된 n개의 원소를 가지는 vector 생성
  - vector<[type]> v(n, m); // m으로 초기화 된 n개의 원소를 가지는 vector 생성
  - vector<[type]> v2(v1); // v1을 복사해서 v2 vector 생성
  - vector\<vector\<[type]>> v; // [type]형의 2차원 vector 생성
  - vector<[type]> v = {a1, a2, ...}; // {a1, a2, ...}으로 초기화된 vector 생성
- 멤버 함수(1)
  - v.assign(n, m); // m으로 n개의 원소 할당
  - v.at(index); // index번째 원소 반환. 유효한 index인지 검사하므로 안전하다.
  - v[index]; // index번째 원소 반환. 배열과 같은 방식이며, 유효성 검사 안함
  - v.front(); // 첫 번째 원소 반환
  - v.back(); // 마지막 원소 반환
  - v.clear(); // 모든 원소 제거. 메모리는 그대로 남아있는다.
  - v.begin(); // 첫 번째 원소리를 가리키는 반복자(iterator)를 반환한다.
  - v.end(); // 마지막 원소 다음을 가리키는 반복자(iterator)를 반환한다.
  - v.push_back(m); // 마지막 원소 뒤에 원소 m을 삽입한다.
  - v.pop_back(); // 마지막 원소를 제거한다.
- 멤버 함수(2)
  - v.rbegin(); // 거꾸로 시작해서 첫 번째 원소를 가리키는 반복자를 반환한다.
  - v.rend(); // 거꾸로 시작해서 마지막 원소를 가리키는 반복자를 반환한다.
  - v.reserve(n); // n개의 원소를 저장할 공간을 예약한다.
  - v.resize(n); // 크개를 n개로 변경한다. 커진 경우에는 빈 곳을 0으로 초기화한다.
  - v.resize(n, m); // 크개를 n개로 변경한다. 커진 경우에는 빈 곳을 m으로 초기화한다.
  - v.size(); // 원소의 개수를 반환한다.
  - v.capacity(); // 할당된 공간의 크기를 반환한다.
  - v2.swap(v1); // v1과 v2를 swap한다.
  - v.insert(iter, m); // iter가 가리키는 위치에 m의 값을 삽입한다. 해당 위치를 가리키는 반복자를 반환한다.
  - v.insert(iter, k, m); // iter가 가리키는 위치로부터 k개의 m값을 삽입한다. 다음 원소들은 위로 밀린다.
  - v.erase(iter); // iter 반복자가 가리키는 원소를 제거한다. capacity는 유지된다.
  - v.erase(start, end); // start 반복자부터 end 반복자까지 원소를 제거한다.
  - v.empty(); // vector가 비어있으면 true를 반환한다.
  - v.max_size(); // v가 담을 수 있는 최대 원소의 개수(메모리)를 반환
  - v.shrink_to_fit(); // capacity의 크기를 vector의 실제 크기에 맞춘다.

<hr>
