#include <iostream>

// #: 전처리기 지시문(preprocessor directive) --> 지정된 헤더 파일 내용을 그대로 복사/붙여넣기함
// python의 import랑은 조금 다른 게, python은 실제 객체로 다 로드 해서 네임스페이스에 연결
// 하지만 #은 그냥 해당 파일 내용을 복붙한다고 생각하면 됨
// C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\include
// 여기에 컴파일러 및 툴들이 다 깔려있음
/*
MSVC(Microsoft Visual C++)

Visual Studio에서 기본적으로 사용하는 컴파일러

Windows API, Win32 / Win64 빌드랑 호환성이 제일 좋음

Visual Studio IDE랑 통합돼 있어서 디버깅, 최적화, Windows 전용 라이브러리까지 같이 1지원
*/

/*
C++에서는 여러 라이브러리나 개발자가 만든 코드가 한 프로그램에 섞여 들어올 수 있음

같은 이름의 함수나 변수(예: print, sort)가 여러 곳에 정의되어 있으면 충돌(name conflict)이 발생함

이걸 막기 위해 이름을 묶어서 관리하는 “공간(namespace)” 개념을 씀
*/

int main()
{
	std::cout << "Hello mandu"; // "표준 네임스페이스(std) 안에 있는 cout이라는 이름을 사용"
	return 333333; // 종료 코드 0이 아니면 오류 난 것처럼 암


	
}



/*
1. 글로벌 네임스페이스 (global namespace)
	- 아무 네임스페이스에도 속하지 않은 이름들이 들어가는 최상위 공간
	- 내가 만든 변수 등
2. 표준 네임스페이스(std):
	- C++ 표준 라이브러리에서 제공하는 모든 것들이 모여 있는 네임스페이스
	- cout, cin, vector, string, map 등 거의 모든 C++ 기본 라이브러리 요소가 여기에 정의
3. 구현체 전용 네임스페이스:
	- C++ 표준이 아니라 컴파일러나 라이브러리 구현체가 내부적으로 쓰는 네임스페이스
	- ex) __gnu_cxx : GCC에서 내부적으로 쓰는 구현체 네임스페이스
4. 사용자 정의 네임스페이스
	namespace myapp {
    int add(int a, int b) { return a + b; }
	}
*/

