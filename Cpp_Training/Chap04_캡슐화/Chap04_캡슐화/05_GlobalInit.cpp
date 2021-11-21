/*
-- 정적 멤버의 활용
- 딱 한 번만 해야하는 전역 자원의 초기화 (DB연결, 네트워크 연결)
*/

#include <stdio.h>

class DBQuery
{
private:
	static int hCon;
	int nResult;

public:
	DBQuery() {};
	static void DBConnect(const char* Server, const char* ID,
		const char* Pass);
	static void DBDisConnect();
	bool RunQuery(const char* SQL);
};
int DBQuery::hCon;

void DBQuery::DBConnect(const char* Server, const char* ID, const char* Pass)
{
	// DB접속
	hCon = 1234;
	puts("연결되었습니다.");
}

void DBQuery::DBDisConnect()
{
	// 접속 해제
	hCon = NULL;
	puts("연결이 끊어졌습니다.");
}

bool DBQuery::RunQuery(const char* SQL)
{
	// Query 
	puts(SQL);
	return true;
}

int main()
{
	DBQuery::DBConnect("Secret", "Adult", "doemfdmsrkfk");
	DBQuery Q1, Q2, Q3;

	// 필요한 DB 질문 한다.
	Q1.RunQuery("select * from tblBuja where 나랑 친한 사람");

	DBQuery::DBDisConnect();
}