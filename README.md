# cpp_study

### 클래스 변수 할당
- `Name1 name1`로 스택에 할당하거나 `Name1* name1 = new Name1`로 힙에 할당

### 상속
- 클래스 정의할 때 콜론(:) 뒤에 클래스를 나열
- 상속을 여러 개 받으면 왼쪽부터 순서대로 기반 클래스들의 구조체가 할당
- 클래스 별로 접근 지정자 설정 가능

### 가상 상속
- 접근 지정자 앞에 virtual 키워드 사용
- vbtable
![vtable](https://github.com/ssongk/cpp_study/blob/main/image/vtable.jpg)
![decompile](https://github.com/ssongk/cpp_study/blob/main/image/decompile.jpg)
