////ÿ���������һ������������
////ÿ�����������ĵ�һ�а���һ������������ʾ���ӵ�����N(N <= 100)��
////��������N��ÿ�а���������������ʾ������������ʱ��ΪHi(0 <= A < 24)ʱMi(0 <= B < 60)�֡�
////��������һ�а���һ����������ʾ������������ҪX(0 <= X <= 100)���ӵ�����ҡ�
////��������һ�а���������������ʾ�Ͽ�ʱ��ΪA(0 <= A < 24)ʱB(0 <= B < 60)�֡�
////���ݱ�֤������һ�����ӿ�����ţţ��ʱ������ҡ�
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Clock
//{
//public:
//	Clock(int h, int m) {
//		this->h = h;
//		this->m = m;
//		timestap = h * 60 + m;
//	}
//
//	bool operator<(Clock& other) {
//		return timestap > other.timestap;
//	}
//
//	int getTimeStap() {
//		return timestap;
//	}
//
//	int geth() { return h; }
//	int getm() { return m; }
//
//private:
//	int h;
//	int m;
//	int timestap;
//};
//
//int main()
//{
//	int N;
//	cin >> N;
//	vector<Clock> alarms;
//	int h, m;
//
//	for (int i = 0; i < N; ++i) {
//		cin >> h >> m;
//		alarms.push_back(Clock(h, m));
//	}
//	sort(alarms.begin(), alarms.end());
//
//	int road_time;
//	cin >> road_time;
//
//	int class_time;
//	cin >> h >> m;
//	class_time = h * 60 + m;
//
//	for (auto iter = alarms.begin(); iter != alarms.end(); ++iter) {
//		if (iter->getTimeStap() + road_time <= class_time)
//		{
//			cout << iter->geth() << ' ' << iter->getm();
//			break;
//		}
//	}
//	return 0;
//}