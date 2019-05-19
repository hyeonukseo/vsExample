#include <iostream>



using namespace std;



int N;

int num[15];

char sign[15];

int cnt = 0;

int sum;



//idx�� ������ ��ġ�� ��Ÿ���� ����.

//mul�� ���� ����ÿ� ���̴� ����, �߰� ����� �����ϴ� ����.

//plus_minus�� ���� ����ÿ� ���� ����� ��ȣ�� ��Ÿ���� ����.

//1 �̸� +, 0 �̸� -.

void SUM(int idx, int mul, int plus_minus) {



	//cout << "idx : " << idx << "  sign[idx] : " << sign[idx] << "  num[idx] : " << num[idx] << "  sign[idx+1] : " << sign[idx + 1] << "  SUM : "<<sum<<'\n';



	//idx�� N���� ���� ��쿡�� ���� ���Ѵ�.

	if (idx < N) {

		if (sign[idx] == '+'&&sign[idx + 1] != '.') {

			//���� ��ȣ�� + �̰� ���� ��ȣ�� . �� �ƴϸ� +.

			sum += num[idx];

			//���ٸ� ������ �����Ƿ� idx�� ������Ų �� ���� ����

			SUM(idx + 1, 0, 0);

		}

		else if (sign[idx] == '-'&&sign[idx + 1] != '.') {

			//���� ��ȣ�� - �̰� ���� ��ȣ�� . �� �ƴϸ� -.

			sum -= num[idx];

			SUM(idx + 1, 0, 0);

		}

		else if (sign[idx] == '+'&&sign[idx + 1] == '.') {

			//���� ��ȣ�� + �̰� ���� ��ȣ�� . �̸� ���ϱ� ������ ù��° �̹Ƿ� mul�� �׳� �־� �ʱⰪ�� �����ش�.

			mul = num[idx];

			//idx�� ������Ŵ�� ���ÿ� mul�� ���� �ٲ��ְ�, plus_minus�� ��ȣ�� + ���� ��Ÿ���� 1�� �־��ش�.

			SUM(idx + 1, mul, 1);

		}

		else if (sign[idx] == '-'&&sign[idx + 1] == '.') {

			mul = num[idx];

			SUM(idx + 1, mul, 0);

		}

		else if (sign[idx] == '.'&&sign[idx + 1] == '.') {

			//���� ��ȣ�� . �̰� ���� ��ȣ�� . �̸� �ڸ����� ���� mul�� ���� 100 Ȥ�� 10�� ������.

			if (idx < 9) mul *= 10;

			else mul *= 100;

			mul += num[idx];

			SUM(idx + 1, mul, plus_minus);

		}

		else {

			if (idx != N - 1) {

				//������ ��ȣ�� �ƴ϶��

				//���� ��ȣ�� . �̰� ���� ��ȣ�� . �� �ƴ϶�� �ڸ����� ���� mul�� ���� 100 Ȥ�� 10�� �����ְ�,

				if (idx < 9) mul *= 10;

				else mul *= 100;

				mul += num[idx];



				if (plus_minus) sum += mul;

				else sum -= mul;

				SUM(idx + 1, 0, 0);

			}

			else {

				//������ ��ȣ���

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

	//num �迭�� �ʱ�ȭ

	for (int i = 0; i < N; i++) num[i] = i + 1;

	//���� ���� ���ڿ� ���ؼ��� + ������ �����Ѵ�.

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