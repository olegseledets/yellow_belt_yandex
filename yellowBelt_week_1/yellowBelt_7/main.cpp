#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
/*
���������� ��������� ������� Sqr, ������� �������� ��
������ ��� �����, �� � ��� �����������. ������� ������
���������� ����� ��������� ����������, ������������� ���
��������� �������:

��� vector �������� ����� �������� � �������;
��� map � ������� ����� �������� ������ ��������, �� �� �����;
��� pair � ������� ����� �������� ������ ������� ����.
*/
// ��������������� ���������� ��������� �������
template <typename KeyMap,typename KeyPair, typename DataPair> map<KeyMap, pair<KeyPair, DataPair> > Sqr(map<KeyMap, pair<KeyPair, DataPair> >& m);
template<typename T> vector<T> Sqr( vector<T> vi);
template<typename First, typename Second> pair<First, Second> Sqr( pair<First, Second>& p );

// ��������� ��������� �������
template <typename T>
 vector<T> Sqr( vector<T> vi) {
     for (int i = 0; i < vi.size(); i++)
         vi[i] = vi[i] * vi[i];
     return vi;
}

 template <typename KeyMap,typename KeyPair, typename DataPair>
 map<KeyMap, pair<KeyPair, DataPair> > Sqr(map<KeyMap, pair<KeyPair, DataPair> >& m) {
     for (auto &item : m) {
         item.second.first = item.second.first * item.second.first;
         item.second.second = item.second.second * item.second.second;
     }
     return m;
 }
 template <typename First, typename Second>
 pair<First, Second> Sqr( pair<First, Second>& p ) {
     p.second = p.second* p.second;
     return p.second;
 }

int main()
{
    vector<int> v = {1, 2, 3};
    cout << "vector:";
    for (int x : Sqr(v)) {
      cout << ' ' << x;
    }
    cout << endl;

    map<int, pair<int, int>> map_of_pairs = {
      {4, {2, 2}},
      {7, {4, 3}}
    };
    cout << "map of pairs:" << endl;
    for (const auto& x : Sqr(map_of_pairs)) {
      cout << x.first << ' ' << x.second.first << ' ' << x.second.second << endl;
    }
    return 0;
}
