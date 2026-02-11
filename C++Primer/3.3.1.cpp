#include <vector>
using std::vector;

typedef int type;
int n = 10;

int main()
{
    // 初始化一个名为v1的vector容器,尖括号内的为潜在元素类型
    vector<type> v1;

    // vector容器v2含有v1元素的副本,等价于vector<type> v2 = v1;
    vector<type> v2(v1);

    // v3中包含了n个重复type类型的元素,即包含了n个重复执行了值初始化的对象
    vector<type> v3(n);

    // v4中包含了n个重复元素,每个元素的类型为type,值为1,为多维数组打下基础
    vector<type> v4(n, 1);

    // 容器arr中包含了类型为vector<type>的n个容器,每个容器的元素数量为n
    vector<vector<type>> arr(n, vector<type>(n));

    // 三维数组
    vector<vector<vector<type>>> arr2(n, vector<vector<type>>(n, vector<type>(n)));

    // 列表初始化
    vector<type> v5{1, 2, 3};
}