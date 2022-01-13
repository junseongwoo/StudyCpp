/*
-- 빠르고 범용적인 데이터 저장 컨테이너 만들기
다양한 타입의 데이터 여러 개를 인자로 받아 공통 타입으로 변환하는 함수 
*/

#include <array>
#include <iostream>
#include <type_traits>

// 컨테이너를 생성하는 함수 선언
// 임의 개수의 매개변수를 허용하기 위해 가변 템플릿 사용
template <typename ... Args>
std::array<?,?> build_array(Args&& ... args)
