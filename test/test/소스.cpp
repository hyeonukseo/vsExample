#include <iostream>



using namespace std;



int N;

int num[15];

char sign[15];

int cnt = 0;

int sum;



//idx는 현재의 위치를 나타내는 변수.

//mul은 곱셈 연산시에 쓰이는 변수, 중간 결과를 저장하는 역할.

//plus_minus는 곱셈 연산시에 곱셈 결과의 부호를 나타내는 변수.

//1 이면 +, 0 이면 -.

void SUM(int idx, int mul, int plus_minus) {



	//cout << "idx : " << idx << "  sign[idx] : " << sign[idx] << "  num[idx] : " << num[idx] << "  sign[idx+1] : " << sign[idx + 1] << "  SUM : "<<sum<<'\n';



	//idx가 N보다 작을 경우에만 합을 구한다.

	if (idx < N) {

		if (sign[idx] == '+'&&sign[idx + 1] != '.') {

			//앞의 부호가 + 이고 뒤의 부호가 . 가 아니면 +.

			sum += num[idx];

			//별다른 내용이 없으므로 idx를 증가시킨 후 다음 진행

			SUM(idx + 1, 0, 0);

		}

		else if (sign[idx] == '-'&&sign[idx + 1] != '.') {

			//앞의 부호가 - 이고 뒤의 부호가 . 가 아니면 -.

			sum -= num[idx];

			SUM(idx + 1, 0, 0);

		}

		else if (sign[idx] == '+'&&sign[idx + 1] == '.') {

			//앞의 부호가 + 이고 뒤의 부호가 . 이면 곱하기 연산의 첫번째 이므로 mul에 그냥 넣어 초기값을 정해준다.

			mul = num[idx];

			//idx를 증가시킴과 동시에 mul의 값을 바꿔주고, plus_minus에 부호가 + 임을 나타내는 1을 넣어준다.

			SUM(idx + 1, mul, 1);

		}

		else if (sign[idx] == '-'&&sign[idx + 1] == '.') {

			mul = num[idx];

			SUM(idx + 1, mul, 0);

		}

		else if (sign[idx] == '.'&&sign[idx + 1] == '.') {

			//앞의 부호가 . 이고 뒤의 부호도 . 이면 자리수에 따라서 mul의 값에 100 혹은 10을 곱해줌.

			if (idx < 9) mul *= 10;

			else mul *= 100;

			mul += num[idx];

			SUM(idx + 1, mul, plus_minus);

		}

		else {

			if (idx != N - 1) {

				//마지막 부호가 아니라면

				//앞의 부호가 . 이고 뒤의 부호가 . 가 아니라면 자리수에 따라서 mul의 값에 100 혹은 10을 곱해주고,

				if (idx < 9) mul *= 10;

				else mul *= 100;

				mul += num[idx];



				if (plus_minus) sum += mul;

				else sum -= mul;

				SUM(idx + 1, 0, 0);

			}

			else {

				//마지막 부호라면

				if (idx < 9) mul *= 10;

				else mul *= 100;

				mul += num[idx];



				if (plus_minus) sum += mul;

				else sum -= mul;



				SUM(idx + 1, 0, 0);

			}

		}



	}

	else {

		if (sum == 0) {

			cnt++;

			if (cnt <= 20) {

				cout << num[0];

				for (int i = 1; i < N; i++) {

					cout << " " << sign[i] << " " << num[i];

				}

				cout << '\n';

			}

		}

	}



}



void dfs(int turn) {

	if (turn == N) {

		sum = 0;

		SUM(0, 0, 0);

		return;

	}



	sign[turn] = '+';

	dfs(turn + 1);

	sign[turn] = '-';

	dfs(turn + 1);

	sign[turn] = '.';

	dfs(turn + 1);



}



int main() {

	cin >> N;

	//num 배열을 초기화

	for (int i = 0; i < N; i++) num[i] = i + 1;

	//제일 앞의 숫자에 대해서는 + 연산을 수행한다.

	sign[0] = '+';

	dfs(1);

	cout << cnt;

}











/*



//input



7



//output



1 + 2 - 3 + 4 - 5 - 6 + 7

1 + 2 - 3 - 4 + 5 + 6 - 7

1 - 2 + 3 + 4 - 5 + 6 - 7

1 - 2 - 3 - 4 - 5 + 6 + 7

1 - 2 . 3 + 4 + 5 + 6 + 7

1 - 2 . 3 - 4 . 5 + 6 . 7

6





*/