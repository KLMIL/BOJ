#include <iostream>

using namespace std;


void RepeatBar(int n) {
	for (int i = 0; i < n; i++) {
		cout << "____";
	}
}

void Repeat1(int n, int m) {
	RepeatBar(n);
	cout << "\"����Լ��� ������?\"\n";
	
	if (n == m) {
		RepeatBar(n);
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		RepeatBar(n);
		cout << "��� �亯�Ͽ���.\n"; 
		return;
	}
	
	RepeatBar(n);
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n"; 
	RepeatBar(n);
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
	RepeatBar(n);
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n"; 
	
	Repeat1(n + 1, m);	
	
	RepeatBar(n);
	cout << "��� �亯�Ͽ���.\n"; 
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int N;
	cin >> N;
	
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	Repeat1(0, N);


    return 0;
}


