# 좌표 압축

https://www.acmicpc.net/problem/18870

<hr>

### C++
- C++ STL: <vector>
  - array에 비해 속도는 느리지만, 메모리를 효율적으로 관리하고 예외처리가 쉽다.
  - ### 초기화
    - vector<자료형> 변수명; // 벡터 생성
    - vector<자료형> 변수명(숫자); // 숫자만큼 벡터 생성 후 0으로 초기화
    - vector<자료형> 변수형 = {변수1, 변수2, ..., 변수n}; // 백터 생성 후 해당 값으로 초기화
    - vector<자료형> 변수명[] = {,}; // 2차원 벡터 생성(열은 고정, 행은 가변)
    - vector<vector<자료형>> 변수명; // 2차원 벡터 생성
    - vector<자료형>변수명.assign(범위, 초기화할 값); // 벡터의 범위 내에서 해당 값으로 초기화
  - ### Iterator
    - v.begin(); // 벡터 시작점의 주소 반환
    - v.end(); // 벡터 끝부분 + 1 주소값 반환
    - v.rbegin(); // 벡터의 끝 지점을 시작점으로 반환
    - v.rend(); // 벡터의 시작 + 1 지점을 끝 부분으로 반환
  - ### Element access
    - v.at(i); // 벡터의 i번째 요소 접근(범위 검사 O)
    - v.[i]; // 벡터의 i번째 요소 접근(범위 검사 X)
    - v.front(); // 벡터의 첫번쨰 요소 접근
    - v.back(); // 벡터의 마지막 요소 접근
  - ### 벡터에 요소 삽입
    - v.push_back(); // 벡터의 마지막 부분에 새로운 요소 추가
    - v.pop_back(); // 벡터의 마지막 부분 제거
    - v.insert(주소, 값); // 사용자가 원하는 위치에 요소 삽입
    - v.emplace(주소, 값); // 사용자가 원하는 위치에 요소 삽입(복사생성자 X?)
    - v.emplace_back(); // 벡터의 마지막 부분에 새로운 요소 추가(복사생성자 X?)
    - v.erase(위치); v.erase(시작, 끝); // 해당 index의 요소 지우기
    - v.clear(); // 벡터의 모든 요소 지움
    - v.resize(값); // 벡터의 사이즈 조정
    - v.swap(벡터 변수); // 벡터와 벡터를 스왑
  - ### Capacity(용량)
    - v.empty(); // 벡터가 비었다면 true, 값이 있다면 false
    - v.size(); // 벡터의 크기 반환
    - v.capacity(); // heap에 할당된 벡터의 실제 크기(최대 크기)
    - v.max_size(); // 벡터가 만들어질 수 있는 최대 크기 반환
    - v.reserve(값); // 벡터의 크기 설정
    - v.shrink_to_fit(); // capacity의 크기를 벡터의 실제 크기에 맞춤

  - ## unique 함수를 이용한 벡터의 중복원소 제거
    - unique?
      - 중복되지 않는 원소를 앞부터 채우는 함수
      - <algorithm> 필요
      - 남은 뒷부분은 vector에 여전히 값이 존재함
      - 중복된 값을을 모아놓은 시작 주소 return
    - v.erase(unique(v.begin, v.end()), v.end());
      - unique()에서 중복된 값을 모아둔 주소를 return받고, 해당 주소를 시작점으로 제거한다.
    
  - ## lower,upper _bound :: 이진 탐색으로 원소를 탐색
    - lower bound
      - 찾으려는 값보다 같거나 큰 숫자가 배열 몇 번쨰에서 처음 등장하는지 찾기 위함
      - 반환형은 Iterator이므로, 인덱스를 알고 싶다면 첫번째 원소 주소를 빼 주면 됨

<hr>