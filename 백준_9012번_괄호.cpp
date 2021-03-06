#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int num;  //총 반복횟수
	stack<char> st; //스택 생성
	string s; //괄호 문자들  
	
	cin >> num;  //총 반복횟수 입력
	
	for (int i = 0; i < num; i++){ //총 반복 횟수 
		
		cin >> s; //괄호 문자들 입력 
		
		for (int i = 0; i < s.length(); i++){ //괄호문자들의 갯수(=s.length)만큼 반복한다. 
			if(s[i] == '('|| st.empty()) {  //첫번째 괄호는 무조건 '('이어야 하기 때문에 '('를 if문의 첫번째로 한다  *Q.왜st.empty가 있어야할까? 
				st.push(s[i]);  //'('면 stack에 넣는다(=push한다.)
			} 
			else if(st.top() == '(' && s[i] == ')'){ //스택에 현재 '('가 있어야 하고, 그에 따라 ')'가 들어오면 짝을 이루기 때문에 스택에서 '('를 뺀다.
				st.pop();
			}
		}
		
		if(st.empty()){
			cout << "YES" << endl; //스택이 비어있으면 YES 
		} 
		else{
			cout << "NO" << endl;  //스택이 비어있지 않으면 NO 
		}
		
		while(!st.empty()){  //다음 반복문을 돌기 위해서 YES/NO 출력 후, 스택을 비운다. 
			st.pop();
		}
		
	}
	
	return 0; 
}
