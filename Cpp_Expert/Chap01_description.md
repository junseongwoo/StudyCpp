# 전문가를 위한 C++ 책 요약 정리 

## Chap 1 : C++ 표준라이브러리 초단기 속성 코스 

# 1.1 C++의 기초
- C++ 형식에 대한 개념을 하나씩 설명한다.
1. 전처리 지시자
2. main() 함수
3. I/O 스트림 

### 전처리 지시자
- C++로 작성된 소스 코드 빌드 단계
1. 전처리(Preprocess) 단계 : 소스 코드에 담긴 메타 정보를 처리 
2. 컴파일(Complie) 단계 : 소스 코드를 머신이 읽을 수 있는 파일로 변환 
3. 링크(Link) 단계 : 파일을 애플리케이션으로 엮는다. 

- 지시자(Directive) : 전처리기에 전달할 사항을 표현 
ex) #include <iostream> : 지시자는 #로 시작하며 <iostream> 헤더 파일에 있는 내용을 사용 할 수 있게 모두 가져온다. 

### main() 함수
- 프로그래밍은 항상 main() 함수에서 시작하고 int 타입의 값을 리턴하는데 이 값으로 프로그램의 실행 결과에 대한 상태를 표시
- main() 함수 안에 리턴 문장을 생략 한다면 자동으로 0을 리턴 

### I/O 스트림 
- I/O 스트림 (입출력 스트림)은 std::cout는 콘솔에 출력하는 것이고 std::endl은 문장이 끝났다는 것을 의미한다.
- std::cin 입력 스트림은 사용자가 키보드로 입력한 값을 받는다. 
---
# 1.1.2 네임스페이스 

