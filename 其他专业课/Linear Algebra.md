# n阶行列式
## n级排列
**由$1,2,3,\dotsb,n$组成的一个有序数组叫做一个n级排列**
+ n级排列中一个数也不能少
+ 1~n可组成的n级排列有$n!$种
## 逆序
在一个n级排列中,如果较大的数$n_i$排在较小的数$n_j$的前面,则称$n_i$与$n_j$构成一个逆序
## 奇,偶排列
如果一个排列的逆序数为奇数,则其为奇排列,否则为偶排列
 1~n可组成的n级排列有$n!$种,其中奇排列和偶排列各占一半
## 对换
在一个n级排列中,交换两个元素的位置
每做一次兑换,该排列的奇偶性改变一次
## n阶行列式
$
\begin{vmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{21} & a_{22} & \cdots & a_{2n} \\
\vdots  & \vdots  & \ddots & \vdots  \\
a_{n1} & a_{n2} & \cdots & a_{nn}
\end{vmatrix}
$

## n阶行列式的展开

$D = \begin{vmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{21} & a_{22} & \cdots & a_{2n} \\
\vdots  & \vdots  & \ddots & \vdots  \\
a_{n1} & a_{n2} & \cdots & a_{nn}
\end{vmatrix}
= \sum\limits_{j_1j_2\dots j_n} (-1)^{N(j_1j_2\dots j_n)} a_{1j_1} a_{2j_2} \dots a_{nj_n}
$
+ 行标取标准排列
+ 列标取排列的所有可能
+ 不同行不同列 $n$ 个元素相乘
$$
D = \begin{vmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{21} & a_{22} & \cdots & a_{2n} \\
\vdots  & \vdots  & \ddots & \vdots  \\
a_{n1} & a_{n2} & \cdots & a_{nn}
\end{vmatrix}
\qquad
D^T = \begin{vmatrix}
a_{11} & a_{21} & \cdots & a_{n1} \\
a_{12} & a_{22} & \cdots & a_{n2} \\
\vdots  & \vdots  & \ddots & \vdots  \\
a_{1n} & a_{2n} & \cdots & a_{nn}
\end{vmatrix}
$$

## 行列式的性质
**$D^T = D$，即行列式与其转置行列式相等**

$$
\begin{vmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 10
\end{vmatrix}
= -3,
\qquad
\begin{vmatrix}
1 & 4 & 7 \\
2 & 5 & 8 \\
3 & 6 & 10
\end{vmatrix}
= -3
$$

**交换行列式的两行(两列),行列式改变符号**

$$
\begin{vmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 10
\end{vmatrix}
= -3,
\qquad
\begin{vmatrix}
4 & 5 & 6 \\
1 & 2 & 3 \\
7 & 8 & 10
\end{vmatrix}
= 3
$$

**若行列式中有两行(两列)的对应元素相等,则行列式的值为零**

$$
\begin{vmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
1 & 2 & 3
\end{vmatrix}
= 0
$$

**用常数k乘以行列式的某一行(列)的所有元素,等于用常数k乘以此行列式**

$$
\begin{vmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 10
\end{vmatrix}
= -3,
\qquad
\begin{vmatrix}
k & 2k & 3k \\
4 & 5 & 6 \\
7 & 8 & 10
\end{vmatrix}
= k\begin{vmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 10
\end{vmatrix}
= -3k
$$

**若行列式有两行(列)的元素成比例,则此行列式为零**

$$
\begin{vmatrix}
1 & 2 & 3 \\
2 & 4 & 6 \\
7 & 8 & 10
\end{vmatrix}
= 0
$$

**若行列式的k行(列)的各元素都是两数之和,则这个行列式可以拆开成两个行列式之和,这两个行列式k行(列)分别为那两个加数,其余数与原行列式相同**
$$
\begin{vmatrix}
a_{11} & a_{12} & a_{13} \\
a_{21} & a_{22} & a_{23} \\
b_1+c_1 & b_2+c_2 & b_3+c_3
\end{vmatrix}
=
\begin{vmatrix}
a_{11} & a_{12} & a_{13} \\
a_{21} & a_{22} & a_{23} \\
b_1 & b_2 & b_3
\end{vmatrix}
+
\begin{vmatrix}
a_{11} & a_{12} & a_{13} \\
a_{21} & a_{22} & a_{23} \\
c_1 & c_2 & c_3
\end{vmatrix}
$$

**将行列式的某一行(列)的所有元素乘以一个数k后,加到另一行(列)上,行列式的值不变**

$$
\begin{vmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 10
\end{vmatrix}
= -3,
\qquad
\begin{vmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7+4k & 8+5k & 10+6k
\end{vmatrix}
= -3
$$

## 对称行列式

若行列式满足 $a_{ij} = a_{ji}$（对所有 $i, j$），则称其为 **对称行列式**，其对应的矩阵为对称矩阵。

$$
\begin{vmatrix}
a_{11} & a_{12} & a_{13} \\
a_{12} & a_{22} & a_{23} \\
a_{13} & a_{23} & a_{33}
\end{vmatrix}
$$

对称行列式的值没有特殊的简化公式，按一般行列式计算即可。

## 反对称行列式

若行列式满足 $a_{ij} = -a_{ji}$（对所有 $i, j$），则称其为 **反对称行列式**（也称 **交错行列式**），其对应的矩阵为反对称矩阵。

由定义可知，反对称行列式的对角线元素满足 $a_{ii} = -a_{ii}$，故 $a_{ii} = 0$。

### 性质

**奇数阶反对称行列式的值为零**

$$
\begin{vmatrix}
0 & a_{12} & a_{13} \\
-a_{12} & 0 & a_{23} \\
-a_{13} & -a_{23} & 0
\end{vmatrix}
= 0
$$

**偶数阶反对称行列式的值不一定为零**

# 行列式按一行展开

## 余子式与代数余子式

在 $n$ 阶行列式中，去掉元素 $a_{ij}$ 所在的第 $i$ 行和第 $j$ 列后，剩下的 $n-1$ 阶行列式称为元素 $a_{ij}$ 的 **余子式**，记作 $M_{ij}$

$$
M_{ij} = \begin{vmatrix}
a_{11} & \cdots & a_{1,j-1} & a_{1,j+1} & \cdots & a_{1n} \\
\vdots  & \ddots & \vdots    & \vdots    & \ddots & \vdots  \\
a_{i-1,1} & \cdots & a_{i-1,j-1} & a_{i-1,j+1} & \cdots & a_{i-1,n} \\
a_{i+1,1} & \cdots & a_{i+1,j-1} & a_{i+1,j+1} & \cdots & a_{i+1,n} \\
\vdots  & \ddots & \vdots    & \vdots    & \ddots & \vdots  \\
a_{n1} & \cdots & a_{n,j-1} & a_{n,j+1} & \cdots & a_{nn}
\end{vmatrix}
$$

令 **代数余子式** $A_{ij} = (-1)^{i+j} M_{ij}$

## 按一行(列)展开定理

行列式等于它的任意一行(列)的各元素与其对应的代数余子式乘积之和：

**按第 $i$ 行展开**
$$D = a_{i1}A_{i1} + a_{i2}A_{i2} + \cdots + a_{in}A_{in} = \sum_{j=1}^{n} a_{ij} A_{ij}$$

**按第 $j$ 列展开**
$$ D = a_{1j}A_{1j} + a_{2j}A_{2j} + \cdots + a_{nj}A_{nj} = \sum_{i=1}^{n} a_{ij} A_{ij} $$

### 示例：按第一行展开 3 阶行列式

$$
D = \begin{vmatrix}
a_{11} & a_{12} & a_{13} \\
a_{21} & a_{22} & a_{23} \\
a_{31} & a_{32} & a_{33}
\end{vmatrix}
$$

各元素的余子式：
$$
M_{11} = \begin{vmatrix} a_{22} & a_{23} \\ a_{32} & a_{33} \end{vmatrix},\;
M_{12} = \begin{vmatrix} a_{21} & a_{23} \\ a_{31} & a_{33} \end{vmatrix},\;
M_{13} = \begin{vmatrix} a_{21} & a_{22} \\ a_{31} & a_{32} \end{vmatrix}
$$

代数余子式：
$$
A_{11} = (-1)^{1+1}M_{11} = M_{11},\;
A_{12} = (-1)^{1+2}M_{12} = -M_{12},\;
A_{13} = (-1)^{1+3}M_{13} = M_{13}
$$

按第一行展开：
$$
\begin{aligned}
D &= a_{11}A_{11} + a_{12}A_{12} + a_{13}A_{13} \\
  &= a_{11}\begin{vmatrix} a_{22} & a_{23} \\ a_{32} & a_{33} \end{vmatrix}
   - a_{12}\begin{vmatrix} a_{21} & a_{23} \\ a_{31} & a_{33} \end{vmatrix}
   + a_{13}\begin{vmatrix} a_{21} & a_{22} \\ a_{31} & a_{32} \end{vmatrix}
\end{aligned}
$$

### 数值示例

$$
D = \begin{vmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 10
\end{vmatrix}
$$

余子式：
$$
M_{11} = \begin{vmatrix}5&6\\8&10\end{vmatrix} = 2,\;
M_{12} = \begin{vmatrix}4&6\\7&10\end{vmatrix} = -2,\;
M_{13} = \begin{vmatrix}4&5\\7&8\end{vmatrix} = -3
$$

代数余子式：
$$
A_{11} = M_{11} = 2,\;
A_{12} = -M_{12} = 2,\;
A_{13} = M_{13} = -3
$$

按第一行展开：
$$
D = 1\cdot2 + 2\cdot2 + 3\cdot(-3) = 2 + 4 - 9 = -3
$$

## 异乘变零定理

某行(列)的各元素与另一行(列)的对应代数余子式乘积之和等于零：

**用第 $k$ 行的代数余子式乘第 $i$ 行元素 $(i \neq k)$**
$$ a_{i1}A_{k1} + a_{i2}A_{k2} + \cdots + a_{in}A_{kn} = \sum_{j=1}^{n} a_{ij} A_{kj} = 0 \quad (i \neq k) $$

**用第 $k$ 列的代数余子式乘第 $j$ 列元素 $(j \neq k)$**
$$ a_{1j}A_{1k} + a_{2j}A_{2k} + \cdots + a_{nj}A_{nk} = \sum_{i=1}^{n} a_{ij} A_{ik} = 0 \quad (j \neq k) $$

### 示例

对行列式 $D = \begin{vmatrix} 1 & 2 & 3 \\ 4 & 5 & 6 \\ 7 & 8 & 10 \end{vmatrix}$，已知第一行的代数余子式 $A_{11}=2,\; A_{12}=2,\; A_{13}=-3$：

用第二行元素乘第一行的代数余子式：
$$
4\cdot A_{11} + 5\cdot A_{12} + 6\cdot A_{13} = 4\cdot2 + 5\cdot2 + 6\cdot(-3) = 8 + 10 - 18 = 0
$$