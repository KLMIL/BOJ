# ??!

https://www.acmicpc.net/problem/10926

<hr> 

### C++
- string 클래스
  - 헤더파일 : \<string>
  
```cpp
string str1("String1"); // 생성방법 1

string str2; // 생성방법 1
str2 = "String2";

string str3(str1); // 생성방법 3
```

- 멤버함수
  - string 인자 접근(access 관련)
    - char& at(size_t index);
      - index에 해당하는 문자 반환. 범위를 벗어나면 예외처리
    - char& operator[](size_t index);
      - index에 해당하는 문자 반환. 예외처리 X -> at보다 속도는 빠르다.
    - char& front();
      - 맨 앞 인자 반환
    - char& back();
      - 맨 뒤 인자 반환
  - string size 관련
    - size_t size() const;
      - string의 사이즈 반환
    - size_t length() const;
      - string의 길이 반환
    - size_t capacity() const;
      - string 객체에 할당된 메모리 크기(bytes) 반환
    - void resize(size_t n); void resize(size_t n, char c);
      - string의 크기를 n으로 만든다. 원래 사이즈보다 작다면 남은 string은 버린다. c를 사용하면 남은 공간을 c로 초기화 할 수 있다.
    - void shrink_to_fit();
      - string 길이에 비해 낭비되는 capacity를 줄인다. 현재 사용하는 크기로 줄어든다.
    - void reserve(size_t n = 0);
      - 잘 모르겠다 ... 미리 메모리 할당하는 함수인 것 같은데 ....
    - void clear();
      - string의 문자열을 지운다. size와 length는 0이 되고, capacity는 그대로 남는다.
    - bool empty() const;
      - string이 비었는지 확인하는 함수. 비었다면(size와 length가 0이라면) true 반환.
  - string 함수
    - const char* c_str() const;
      - C++스타일의 string 문자열을 C스타일로 바꿔줌.
      - String1 -> String1\0
    - string substr(size_t index = 0, size_t len = npos) const;
      - string을 index부터 len만큼 잘라서 반환
      - len의 디폴트값 npos는 '-1' 의미 -> unsigned 타입에서 최대값으로 설정됨
    - string& replace(size_t index, size_t len, const string& str)
      - string의 index부터 len까지를 str으로 대체한다.
    - int compare(const string& str2) const;
      - 필요할 때 찾아보자. 문자열 두개를 비교하는 함수.
    - size_t copy(char* arr, size_t len, size_t index = 0) const;
        - index부터 len의 길이만큼 복사
    - size_t find(const string& arr, size_t index = 0) const;
      - 매개변수 문자열과 호출한 문자열중 일치하는 문자를 확인하는 함수. 처음으로 일치하는 index 반환
    - void push_back(char c);
      - string의 맨 뒤에 문자 c를 더한다.
    - void pop_back();
      - string의 맨 뒤 문자 하나를 없앤다.
  - string iterator(반복자) -> 순회에서 사용
    - iterator begin();
      - 문자열의 첫 번째 문자를 가리키는 반복자를 반환
    - iterator end();
      - 문자열의 마지막의 바로 *다음*을 가리키는 반복자 반환
  - 기타
    - swap(str1, str2)
      - str1과 str2를 바꿈
    - operator +
      - '+' 연산자로 문자열 붙이기 가능
<hr>
