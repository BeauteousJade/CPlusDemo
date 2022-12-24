//
// Created by pby on 2022/12/24.
//

#include <vector>
#include <iostream>

using namespace std;


void forEachVector(const vector<int> &v) {
    // size表示当前元素个数，capacity表示当前容器的大小。
    cout << "size: " << v.size() << " capacity:" << v.capacity() << endl;
    // 未初始化部分的值都是0.
    for (int i = 0; i < v.size(); ++i) {
        cout << "index:" << i << " value:" << v[i] << endl;
    }
    cout << endl;
}

// 新的for循环方式。
void forEachVector2(const vector<int> &v) {
    for (int i: v) {

    }
}

/**
 * Vector 测试类。
 */
int main() {

    // 创建vector.
    vector<int> v1(5);
    v1[0] = 1;
    v1[1] = 2; // 这种不会扩容，超出下标也不会报错。
    v1[2] = 3;
    v1[3] = 4;
    v1[4] = 5;
    // 将元素放在最后一个，会自动扩容。扩容是当前容器大小的二倍
    v1.push_back(6);
    forEachVector(v1);

    // 删除元素
    v1.erase(v1.begin(), v1.begin() + 2);
    forEachVector(v1);

    // 插入元素
    v1.insert(v1.begin(), 1);
    forEachVector(v1);

    // 批量插入。
    vector<int> v2(0); // 如果有默认大小，push_back是放在默认大小之后，所以这里用0，表示从第一个放置。
    v2.push_back(100);
    v2.push_back(101);
    v1.insert(v1.end(), v2.begin(), v2.end());
    forEachVector(v1);

    // 打乱元素。
    random_shuffle(v1.begin(), v1.end());
    forEachVector(v1);

    // 排序
    sort(v1.begin(), v1.end());
    forEachVector(v1); // 如果是对象类型，该类需要重载<运算符。

    for_each()
}
