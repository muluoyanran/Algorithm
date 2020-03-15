//
//#include <iostream>
//#include <cstdlib>
//#include <iomanip>
//#include <queue>
//using namespace std;
//
///*
//	���ȼ����壺
//	��һ���ȼ��������ߵ�λ���ٵ�
//	�ڶ����ȼ��������Ե����
//
//	�㷨��������δ����ĵ�(M/2,N/2)��ʼ��Ѱ��һ�����ܶٻ�·��Ȼ�󽫿�ʼ����Ϊ��㡣
//	֤����һ����ͨͼ���ڹ��ܶٻ�·�����κ�һ������Ϊ��㣬���ɹ��ܶٻ�·�ض����Ա������е㲢�ص���㡣
//*/
//
//typedef struct {
//	int x;
//	int y;
//} Go;
//
//Go go[8] = { {-2, -1}, {-1, -2}, { 1, -2}, { 2, -1}, { 2, 1}, { 1, 2}, {-1, 2}, {-2, 1} };
//
//struct NextPos {
//	int nextPosSteps;        //��ʾ��һλ���ж������߷����߷��ٵ����ȿ���
//	int nextPosDirection;    //��һλ������ڵ�ǰλ�õķ�λ
//	int nextPosToMidLength;  //��ʾ��ǰλ�þ��м����룻�����м��Զ�����ȿ���
//	bool operator < (const NextPos& a) const {
//		return nextPosSteps > a.nextPosSteps && nextPosToMidLength < a.nextPosToMidLength;
//	}
//
//};
//
//int board[100][100];
//int M, N; //���̴�С
//
///*�����ӿ���*/
//bool check(int x, int y) {
//	if (x >= 0 && x < M && y >= 0 && y < N && board[x][y] == 0)
//		return true;
//	return false;
//}
//
///*������һλ���߷���*/
//int nextPosHasSteps(int x, int y) {
//	int steps = 0;
//	for (int i = 0; i < 8; ++i) {
//		if (check(x + go[i].x, y + go[i].y))
//			steps++;
//	}
//	return steps;
//}
//
///*�ж��Ƿ�ص����*/
//bool returnStart(int x, int y) {
//	//У����һ���Ƿ���Իص���㣬Ҳ�������̵��м�λ��
//	int midx = M / 2 - 1 , midy = N / 2 - 1;
//	//midx = M / 2 - 1;
//	//midy = N / 2 - 1;
//	for (int i = 0; i < 8; ++i)
//		if (x + go[i].x == midx && y + go[i].y == midy)
//			return true;
//	return false;
//}
//
///*������������*/
//int posToMidLength(int x, int y) {
//	int midx = M / 2 - 1;
//	int midy = N / 2 - 1;
//	return (abs(x - midx) + abs(y - midy));
//}
//
///*���*/
//void outputResult(int xstart, int ystart) {
//	int total = M * N;
//	int k = total - board[xstart][ystart];
//	for (int i = 0; i < M; ++i) {
//		cout << endl << endl;
//		for (int j = 0; j < N; ++j) {
//			board[i][j] = (board[i][j] + k) % total + 1;
//			cout << setw(5) << board[i][j];
//		}
//	}
//	cout << endl << endl;
//}
//
///*���б���*/
//void BackTrace(int step, int x, int y, int xstart, int ystart) {
//	if (step == M * N && returnStart(x, y)) {
//		//Ѳ�����
//		outputResult(xstart, ystart);
//		exit(0);
//	}
//	else {
//		priority_queue<NextPos> q;
//
//		// ��(x.y)��ʼ�ĵ�һ����
//		for (int i = 0; i < 8; ++i) {
//			// �����˸�����
//			if (check(x + go[i].x, y + go[i].y)) {
//				// ���������������ȶ���
//				NextPos aNextPos;
//				aNextPos.nextPosSteps = nextPosHasSteps(x + go[i].x, y + go[i].y);
//				aNextPos.nextPosDirection = i;
//				aNextPos.nextPosToMidLength = posToMidLength(x + go[i].x, y + go[i].y);
//				q.push(aNextPos);
//			}
//		}
//
//		/*���ݷ�*/
//		while (q.size()) {
//			// 1. �������ŵ�һ��
//			int d = q.top().nextPosDirection;
//			q.pop();
//			x += go[d].x;
//			y += go[d].y;
//			board[x][y] = step + 1; // ����Ӧ���ӱ�Ϊ��step���ߵ�
//
//			// 2. ������һ��
//			BackTrace(step + 1, x, y, xstart, ystart);
//
//			// 3. ����ص������˵��û���ҵ���õ�·��������һ���ع�
//			board[x][y] = 0;
//			x -= go[d].x;
//			y -= go[d].y;
//		}
//	}
//}
//
//void riderKick(int xstart, int ystart) {
//	//��ʼ������
//	for (int i = 0; i < M; i++)
//		for (int j = 0; j < N; j++)
//			board[i][j] = 0;
//	int midx = M / 2 - 1;
//	int midy = N / 2 - 1;
//	board[midx][midy] = 1; //�����̵��м��λ�ÿ�ʼ������
//	BackTrace(1, midx, midy, xstart, ystart);
//}
//
//int main() {
//	// ��ʼλ��
//	int x, y;
//	srand(time(NULL));
//	x = rand() % 8;
//	y = rand() % 8;
//
//	// ���̴�С��M * N
//	M = N = 8;
//	
//	// ��(x,y)��ʼ
//	riderKick(x, y);
//
//	return 0;
//}