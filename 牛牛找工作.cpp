//// ���ѶȲ�������������ֵ������£�ţţѡ�񱨳���ߵĹ���
//// ÿ���������һ������������
//// ÿ�����������ĵ�һ�а����������������ֱ��ʾ����������N(N <= 100000)��С��������M(M <= 100000)��
//// ��������N��ÿ�а����������������ֱ��ʾ��������Ѷ�Di(Di <= 1000000000)�ͱ���Pi(Pi <= 1000000000)��
//// ��������һ�а���M�����������ֱ��ʾM��С��������ֵAi(Ai <= 1000000000)��
//// ��֤������������ı�����ͬ��
//
//// ����ÿ��С��飬�ڵ�����һ�����һ����������ʾ���ܵõ�����߱��ꡣһ���������Ա������ѡ��
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Job {
//private:
//	int d, p; // difficulity, pay
//public:
//	void setD(int d) { this->d = d; }
//	void setP(int p) { this->p = p; }
//	int getP() { return p; }
//	int getD() { return d; }
//	Job(int d, int p) :d(d), p(p) {}
//	Job() :d(0), p(0) {}
//	bool operator<(Job& other)
//	{
//		return p > other.p;
//	}
//};
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	int d, p;
//	vector<Job> jobs;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> d >> p;
//		jobs.push_back(Job(d, p));
//	}
//	sort(jobs.begin(), jobs.end());
//
//	int a;
//	vector<int> abilities;
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> a;
//		for (auto iter = jobs.begin(); iter != jobs.end(); ++iter)
//		{
//			if (iter->getD() <= a)
//			{
//				cout << iter->getP() << endl;
//				break;
//			}
//		}
//	}
//}