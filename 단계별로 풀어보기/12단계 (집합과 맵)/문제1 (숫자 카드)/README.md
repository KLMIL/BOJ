# 숫자 카드

https://www.acmicpc.net/problem/10815

<hr>

### C++
- C++ STL: <set>
  - 특징
    - 자료의 중복을 없앤다.
    - 삽입 순서에 상관없이 정렬된다. -> 이진 트리
  - Set의 초기화
    - set<자료형> 변수; // 기본적인 선언방법
    - set<자료형> 변수(복사할 변수); // 선언 후 복사한 값으로 초기화
    - set<자료형> 변수 = 복사할 변수; // 선언 후 복사한 값으로 초기화
  - Set의 반복자(Iterator)
    - s.begin(); // set의 시작이 되는 주소값 반환
    - s.end(); // set의 마지막 주소 반환(마지막 뒤의 공백공간)
    - s.rbegin(); // set의 마지막 부분을 시작점으로 지정
    - s.rend(); // set의 첫번째 부분을 마지막으로 지정
    - s.cbegin(); // begin()을 const로 설정
    - s.cend(); // end()를 const로 설정
    - s.crbegin(); // rbegin()을 const로 설정
    - s.crend(); // rend()를 const로 설정
  - Set의 용량(Capacity)
    - s.empty(); // s가 비어있다면 true, 아니면 false 반환
    - s.size(); // s에 저장되어 있는 크기
    - s.max_size(); // s가 가질 수 있는 최대 크기
  - Set의 삽입, 삭제
    - s.insert(); // s에 값 삽임
    - s.erase(); // s에 저장된 요소 삭제
    - s.swap(); // s1과 s2를 서로 교환
    - s.clear(); // s의 요소들 전부 삭제
    - s.emplace(); // move()를 사용해 객체 저장
    - s.emplace_hint(); // 삽입될 위치에 대한 힌트를 토대로 삽입
  - Set의 기능(operations)
    - s.find(); // 찾는 값이 있다면 해당 위치의 iterator 반환, 아니면 s.end() 반환
    - s.count(); // set에 저장된 요소들의 갯수 반환
    - s.lower_bound(); // set의 요소의 위치에 대한 iterator 반환
    - s.upper_bound(); // set의 요소의 위치에 대한 iterator 반환
    - s.equal_range(); // 해당 요소에 대한 범위 반환
<hr>