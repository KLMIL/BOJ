# 두 수 비교하기

https://www.acmicpc.net/problem/1330

<hr> 

### C++
- C++의 삼항연산자
  - <조건> ? 'A' : 'B'
  - 조건이 참이면 A를, 거짓이면 B를 반환한다.

```cpp
// 위 코드에서, "=="는 문자열이고 '<'는 문자라서 타입 미스매치 오류
string sign = (A == B) ? "==" : (A < B) ? '<' : '>';
// 정상작동됨. 작은따옴표와 큰따옴표에 차이가 있는 듯.
string sign = (A == B) ? "==" : (A < B) ? "<" : ">";
```

<hr>
