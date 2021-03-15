#include <iostream> 
#include <queue>
using namespace std;

int main()
{
	int N, K; //N명의 사람이 원으로 앉고, K번째 사람을 제거한다. 
	cin >> N >> K; //N과 K 입력  
	queue<int> q;  //앉아있는 사람들의 큐  
 
	for(int i=1; i <= N; i++){ //1~N을 순차적으로 입력 
		q.push(i);
	}
	
	cout << "<";
	
	while(!q.empty()){  //큐가 비어있지 않을때까지 반복(원에서 사람들이 제거될때까지 계속) 
		for(int i=1; i<=K-1; i++){  //front에서 K-1개만큼 back에 추가하고, front에서 빼면, 그것을 삭제한다. 
			q.push(q.front()); //front의 숫자를 back에 추가한다. 
			q.pop(); //추가된 숫자를 삭제한다. 
		}
		cout << q.front(); //K번째 숫자를 출력한다.
		q.pop(); //K번째 숫자를 삭제한다.
		
		if(!q.empty()){
			cout << ", "; //큐가 비어있으면 출력X 
		}
	}
	
	cout<< ">" <<endl;
	
	return 0; 
}
