# A/B

https://www.acmicpc.net/problem/1008

<hr> 

### C++
- cout.precision(int n);
  - 정수, 소수를 합쳐 n개의 숫자 출력
- cout << fixed;
  - 소수를 precision의 파라미터인 n개만큼 출력
- cout.unsetf(ios::fixed);
  - fixed 해제
  
```cpp
double A, B;
cin >> A >> B;

cout.precision(5); // 정수부와 소수부를 합쳐 n개의 숫자 출력
cout << A / B << " / ";

cout << fixed; // 소수부를 precision의 파라미터 n개만큼 출력
cout << A / B << " / ";

cout.unsetf(ios::fixed); // fixed 해제
cout << A / B << endl;

// 입력 : 100 3
// 출력 : 33.333 / 33.33333 / 33.333
```


<hr>
