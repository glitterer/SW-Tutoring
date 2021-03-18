#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int N;
	int ary[1000001]; //N 및 A의 크기는 <=1000000 이라는 조건을 가지기 때문에 배열 크기를 +1로 잡는다. 
	stack<int> st; //stack에 int형이 저장된다. 
	cin >> N; //N개의 수를 입력한다.
	
	for (int i=0; i<N; i++){
		cin >> ary[i];  //숫자N개를 차례대로 ary배열에 넣는다. 
	}
	
	for(int i=0; i<N-1; i++){  //N-1번 동안 반복을 한다(첫번째 수 제외 비교를 하기 위해서) 
		int j = i+1  //i번째 숫자와 다음의 비교숫자를 비교하기 위해서 비교숫자가 들어있는 배열방을 1씩 증가시킨다. 
		while(s[i] < s[j]){  //다음 숫자가 클 때까지 한다. 
			if(s[i]<s[j]){  //만약 다음 수가 더 크면, 
				st.push(s[j]); //stack에 넣는다. 
			}
			else { ; }  //여기가 문제다.. 비교를해서 아무것도 안되면 -1을 리턴하라는 예외처리가 필요한데... 어떻게 할지 모르겠다. 
			
		}
	}
	
	/*st에 넣은 것을 출력하게 해야하는데... 예외처리가 제대로 되어야 이걸 만들 수 있을 듯 하다*/

	
	return 0; 
}
