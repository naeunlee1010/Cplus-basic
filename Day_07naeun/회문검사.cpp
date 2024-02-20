#include"stack.h"


int main() {

	string s = "level1";
	//스택 객체 생성
	//문자열 s에서 처음부터 한글자씩 push()
	//문자열 s에서 첫글자와 스택에서 pop()한 것과 비교
	//(반복)
	//끝까지 다른 것이 없으면 "회문"
	//하나라도 다른 것이 있으면 "회문이 아닙니다"
	//회문:앞에서 읽어도 뒤에서 읽어도 같은 단어
	Stack<char> st;
	for (int i = 0; i < s.length(); i++) {
		st.push(s[i]);
	}
	bool b = true;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != st.pop()) b = false;
		

	}
	if (b == true) cout << "회문입니다" << endl;
	else cout << "회문이 아닙니다" << endl;
}