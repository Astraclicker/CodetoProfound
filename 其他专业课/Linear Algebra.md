# 行列式
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

## 行列式按一行(列)展开

### 余子式与代数余子式
#### 余子式
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
#### 代数余子式
代数余子式:$A_{ij} = (-1)^{i+j} M_{ij}$

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
## 行列式按多行(列)展开
### k阶子式的余子式和代数余子式

#### k阶子式

在 $n$ 阶行列式 $D$ 中，任意选取 $k$ 行 $k$ 列 $(1 \le k \le n)$，位于这些行与列交叉处的 $k^2$ 个元素，按原有的相对位置组成的 $k$ 阶行列式，称为 $D$ 的一个 **$k$ 阶子式**。

#### 余子式

在 $n$ 阶行列式 $D$ 中，去掉某 $k$ 阶子式所在的 $k$ 行和 $k$ 列后，剩下的 $n-k$ 阶行列式，称为该 $k$ 阶子式的 **余子式**。

#### 代数余子式

设 $k$ 阶子式 $M$ 位于行 $i_1, i_2, \dots, i_k$ 和列 $j_1, j_2, \dots, j_k$（$i_1 < i_2 < \dots < i_k,\; j_1 < j_2 < \dots < j_k$），其余子式为 $N$，则 $M$ 的 **代数余子式** 为：

$$ A = (-1)^{(i_1 + i_2 + \cdots + i_k) + (j_1 + j_2 + \cdots + j_k)} N $$

#### 示例

对于行列式 $D = \begin{vmatrix} a_{11} & a_{12} & a_{13} & a_{14} \\ a_{21} & a_{22} & a_{23} & a_{24} \\ a_{31} & a_{32} & a_{33} & a_{34} \\ a_{41} & a_{42} & a_{43} & a_{44} \end{vmatrix}$，选取第 1、3 行和第 2、4 列，得到 2 阶子式：

$$
M = \begin{vmatrix} a_{12} & a_{14} \\ a_{32} & a_{34} \end{vmatrix}
$$

去掉第 1、3 行和第 2、4 列，得余子式：

$$
N = \begin{vmatrix} a_{21} & a_{23} \\ a_{41} & a_{43} \end{vmatrix}
$$

代数余子式：

$$
A = (-1)^{(1+3)+(2+4)} N = (-1)^{10} N = N
$$

## 拉普拉斯定理

在 $n$ 阶行列式 $D$ 中，任意选取 $k$ 行（或 $k$ 列），由这 $k$ 行中的所有 $k$ 阶子式 $M_1, M_2, \dots, M_t$（其中 $t = C_n^k$）分别与其对应的代数余子式 $A_1, A_2, \dots, A_t$ 乘积之和等于行列式 $D$ 的值：

$$ D = \sum_{s=1}^{t} M_s A_s $$

这是行列式按一行（列）展开定理的推广。

### 示例：用拉普拉斯定理计算 4 阶行列式

$$
D = \begin{vmatrix}
1 & 2 & 0 & 0 \\
3 & 4 & 0 & 0 \\
0 & 0 & 5 & 6 \\
0 & 0 & 7 & 8
\end{vmatrix}
$$

选取第 1、2 行，所有可能的 2 阶子式有 $C_4^2 = 6$ 个，但只有位于第 1、2 列的子式非零：

$$
M = \begin{vmatrix} 1 & 2 \\ 3 & 4 \end{vmatrix} = 4 - 6 = -2
$$

其余子式：

$$
N = \begin{vmatrix} 5 & 6 \\ 7 & 8 \end{vmatrix} = 40 - 42 = -2
$$

代数余子式：

$$
A = (-1)^{(1+2)+(1+2)} N = (-1)^{6} N = -2
$$

由拉普拉斯定理：

$$
D = M \cdot A = (-2) \times (-2) = 4
$$

## 范德蒙德行列式

形如下列形式的行列式称为 **范德蒙德行列式**：

$$
D_n = \begin{vmatrix}
1 & 1 & 1 & \cdots & 1 \\
x_1 & x_2 & x_3 & \cdots & x_n \\
x_1^2 & x_2^2 & x_3^2 & \cdots & x_n^2 \\
\vdots & \vdots & \vdots & \ddots & \vdots \\
x_1^{n-1} & x_2^{n-1} & x_3^{n-1} & \cdots & x_n^{n-1}
\end{vmatrix}
$$

### 计算公式

$$
D_n = \prod_{1 \le i < j \le n} (x_j - x_i)
$$

即等于所有 $(x_j - x_i)$ 的连乘积，其中 $1 \le i < j \le n$。

### 示例：3 阶范德蒙德行列式

$$
D_3 = \begin{vmatrix}
1 & 1 & 1 \\
x_1 & x_2 & x_3 \\
x_1^2 & x_2^2 & x_3^2
\end{vmatrix}
= (x_2 - x_1)(x_3 - x_1)(x_3 - x_2)
$$

### 性质

1. 当 $x_1, x_2, \dots, x_n$ 中有任意两个相等时，行列式的值为零。
2. 范德蒙德行列式常用于证明 $n$ 个点可以唯一确定一个 $n-1$ 次多项式（多项式插值的存在唯一性）。
### 克莱姆法则
克莱姆法则用于求解含有 $n$ 个未知数和 $n$ 个线性方程的方程组。

设有线性方程组：

$$
\begin{cases}
a_{11}x_1 + a_{12}x_2 + \cdots + a_{1n}x_n = b_1 \\
a_{21}x_1 + a_{22}x_2 + \cdots + a_{2n}x_n = b_2 \\
\quad\vdots \\
a_{n1}x_1 + a_{n2}x_2 + \cdots + a_{nn}x_n = b_n
\end{cases}
$$

记系数行列式为：

$$
D = \begin{vmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{21} & a_{22} & \cdots & a_{2n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{n1} & a_{n2} & \cdots & a_{nn}
\end{vmatrix}
$$

以及将 $D$ 的第 $j$ 列替换为常数项 $b_1, b_2, \dots, b_n$ 得到的行列式：
人话:求$D_n$就用$b_1, b_2, \dots, b_n$替换第n列

$$
D_j = \begin{vmatrix}
a_{11} & \cdots & a_{1,j-1} & b_1 & a_{1,j+1} & \cdots & a_{1n} \\
a_{21} & \cdots & a_{2,j-1} & b_2 & a_{2,j+1} & \cdots & a_{2n} \\
\vdots & \ddots & \vdots & \vdots & \vdots & \ddots & \vdots \\
a_{n1} & \cdots & a_{n,j-1} & b_n & a_{n,j+1} & \cdots & a_{nn}
\end{vmatrix}
$$

### 法则内容

若系数行列式 $D \neq 0$，则方程组有唯一解：

$$
x_1 = \frac{D_1}{D},\quad x_2 = \frac{D_2}{D},\quad \dots,\quad x_n = \frac{D_n}{D}
$$

### 示例

解线性方程组：

$$
\begin{cases}
2x_1 + x_2 - x_3 = 1 \\
x_1 - x_2 + 2x_3 = 3 \\
3x_1 + 2x_2 - x_3 = 4
\end{cases}
$$

系数行列式：

$$
D = \begin{vmatrix}
2 & 1 & -1 \\
1 & -1 & 2 \\
3 & 2 & -1
\end{vmatrix}
= 2\cdot(-1)\cdot(-1) + 1\cdot2\cdot3 + (-1)\cdot1\cdot2
  - (-1)\cdot(-1)\cdot3 - 2\cdot2\cdot2 - 1\cdot1\cdot(-1)
= 4
\neq 0
$$

故方程组有唯一解。

$$
D_1 = \begin{vmatrix}
1 & 1 & -1 \\
3 & -1 & 2 \\
4 & 2 & -1
\end{vmatrix} = 6, \quad
D_2 = \begin{vmatrix}
2 & 1 & -1 \\
1 & 3 & 2 \\
3 & 4 & -1
\end{vmatrix} = -4, \quad
D_3 = \begin{vmatrix}
2 & 1 & 1 \\
1 & -1 & 3 \\
3 & 2 & 4
\end{vmatrix} = -2
$$

解得：

$$
x_1 = \frac{D_1}{D} = \frac{6}{4} = \frac{3}{2},\quad
x_2 = \frac{D_2}{D} = \frac{-4}{4} = -1,\quad
x_3 = \frac{D_3}{D} = \frac{-2}{4} = -\frac{1}{2}
$$

## 克莱姆法则推论
对于齐次线性方程组($b_1, b_2, \dots, b_n$ = 0)

+ 齐次线性方程组有非零解的充分必要条件是系数行列式$D$ = 0
+ 线性齐次方程组只有零解的充分必要条件是系数行列式$D \not ={0}$

# 矩阵

## 矩阵相关概念
由 $m \times n$ 个数 $a_{ij}$ 排成的 $m$ 行 $n$ 列的数表称为 $m \times n$ 矩阵，记作：

$$
A = \begin{pmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{21} & a_{22} & \cdots & a_{2n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{m1} & a_{m2} & \cdots & a_{mn}
\end{pmatrix}
$$

通常用大写字母 $A, B, C$ 表示，也可简记为 $A = (a_{ij})_{m \times n}$。

### 同型矩阵

若两个矩阵 $A$ 和 $B$ 的行数相同、列数也相同，则称 $A$ 与 $B$ 是 **同型矩阵**。

**示例：**
$$
A = \begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix},\quad
B = \begin{pmatrix} 5 & 6 \\ 7 & 8 \end{pmatrix}
$$
$A$ 和 $B$ 都是 $2 \times 2$ 矩阵，它们是同型矩阵。

### 矩阵相等

若 $A$ 与 $B$ 是同型矩阵，且对应位置的元素都相等，即 $a_{ij} = b_{ij}$ 对所有 $i, j$ 成立，则称 **矩阵 $A$ 与 $B$ 相等**，记作 $A = B$。

**示例：**
若 $A = \begin{pmatrix} x & 2 \\ 3 & y \end{pmatrix}$，$B = \begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix}$ 且 $A = B$，则 $x = 1,\; y = 4$。

### 方阵

行数与列数相等（$m = n$）的矩阵称为 $n$ 阶 **方阵**。

$$
A = \begin{pmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{21} & a_{22} & \cdots & a_{2n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{n1} & a_{n2} & \cdots & a_{nn}
\end{pmatrix}
$$

**示例：**
$$
\begin{pmatrix} 1 & 2 & 3 \\ 4 & 5 & 6 \\ 7 & 8 & 9 \end{pmatrix}
$$
是一个 3 阶方阵。

### 行矩阵

只有一行（$m = 1$）的矩阵称为 **行矩阵**（行向量）。

**示例：**
$$
A = \begin{pmatrix} 1 & 2 & 3 & 4 \end{pmatrix}
$$
是一个 $1 \times 4$ 行矩阵。

### 列矩阵

只有一列（$n = 1$）的矩阵称为 **列矩阵**（列向量）。

**示例：**
$$
A = \begin{pmatrix} 1 \\ 2 \\ 3 \end{pmatrix}
$$
是一个 $3 \times 1$ 列矩阵。

### 零矩阵

所有元素均为 $0$ 的矩阵称为 **零矩阵**，记作 $0$ 或 $0_{m \times n}$。

**示例：**
$$
0_{2 \times 3} = \begin{pmatrix} 0 & 0 & 0 \\ 0 & 0 & 0 \end{pmatrix}
$$

### 上三角形矩阵

主对角线以下元素全为 $0$ 的方阵称为 **上三角形矩阵**。

$$
\begin{pmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
0 & a_{22} & \cdots & a_{2n} \\
\vdots & \vdots & \ddots & \vdots \\
0 & 0 & \cdots & a_{nn}
\end{pmatrix}
$$

**示例：**
$$
\begin{pmatrix} 1 & 2 & 3 \\ 0 & 4 & 5 \\ 0 & 0 & 6 \end{pmatrix}
$$

### 下三角形矩阵

主对角线以上元素全为 $0$ 的方阵称为 **下三角形矩阵**。

$$
\begin{pmatrix}
a_{11} & 0 & \cdots & 0 \\
a_{21} & a_{22} & \cdots & 0 \\
\vdots & \vdots & \ddots & \vdots \\
a_{n1} & a_{n2} & \cdots & a_{nn}
\end{pmatrix}
$$

**示例：**
$$
\begin{pmatrix} 1 & 0 & 0 \\ 2 & 3 & 0 \\ 4 & 5 & 6 \end{pmatrix}
$$

### 对角矩阵

主对角线以外的元素全为 $0$ 的方阵称为 **对角矩阵**（diagonal matrix），记作 $\operatorname{diag}(a_{11}, a_{22}, \dots, a_{nn})$。

$$
\begin{pmatrix}
a_{11} & 0 & \cdots & 0 \\
0 & a_{22} & \cdots & 0 \\
\vdots & \vdots & \ddots & \vdots \\
0 & 0 & \cdots & a_{nn}
\end{pmatrix}
$$

**示例：**
$$
\operatorname{diag}(1, 2, 3) = \begin{pmatrix} 1 & 0 & 0 \\ 0 & 2 & 0 \\ 0 & 0 & 3 \end{pmatrix}
$$

### 数量矩阵

主对角线元素都是同一个常数 $k$ 的对角矩阵称为 **数量矩阵**。

$$
\begin{pmatrix}
k & 0 & \cdots & 0 \\
0 & k & \cdots & 0 \\
\vdots & \vdots & \ddots & \vdots \\
0 & 0 & \cdots & k
\end{pmatrix}
$$

**示例：**
$$
\begin{pmatrix} 5 & 0 & 0 \\ 0 & 5 & 0 \\ 0 & 0 & 5 \end{pmatrix}
$$
是一个 3 阶数量矩阵。

### 单位矩阵

主对角线元素全为 $1$ 的对角矩阵称为 **单位矩阵**，记作 $E$ 或 $I_n$。

$$
E_n = \begin{pmatrix}
1 & 0 & \cdots & 0 \\
0 & 1 & \cdots & 0 \\
\vdots & \vdots & \ddots & \vdots \\
0 & 0 & \cdots & 1
\end{pmatrix}
$$

**性质：** 对任意 $m \times n$ 矩阵 $A$，有 $A E_n = A$，$E_m A = A$。

**示例：**
$$
E_2 = \begin{pmatrix} 1 & 0 \\ 0 & 1 \end{pmatrix},\quad
E_3 = \begin{pmatrix} 1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1 \end{pmatrix}
$$

## 矩阵的运算

### 矩阵的加法

设 $A = (a_{ij})$ 和 $B = (b_{ij})$ 是同型矩阵，则它们的 **和** 定义为对应元素相加：

$$
A + B = (a_{ij} + b_{ij})
$$

**性质：**
1. $A + B = B + A$（交换律）
2. $(A + B) + C = A + (B + C)$（结合律）
3. $A + 0 = A$
4. $A + (-A) = 0$，其中 $-A = (-a_{ij})$

**示例：**
$$
\begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix}
+ \begin{pmatrix} 5 & 6 \\ 7 & 8 \end{pmatrix}
= \begin{pmatrix} 6 & 8 \\ 10 & 12 \end{pmatrix}
$$

### 矩阵的数乘

数 $k$ 与矩阵 $A = (a_{ij})$ 的乘积定义为：

$$
kA = (k a_{ij})
$$

**性质：**
1. $(kl)A = k(lA)$
2. $k(A + B) = kA + kB$
3. $(k + l)A = kA + lA$
4. $1 \cdot A = A$

**示例：**
$$
3 \begin{pmatrix} 1 & -2 \\ 0 & 4 \end{pmatrix}
= \begin{pmatrix} 3 & -6 \\ 0 & 12 \end{pmatrix}
$$

### 矩阵的乘法

设 $A = (a_{ij})$ 是 $m \times s$ 矩阵，$B = (b_{ij})$ 是 $s \times n$ 矩阵，则 $A$ 与 $B$ 的乘积 $C = AB$ 是 $m \times n$ 矩阵，其中：

$$
c_{ij} = \sum_{k=1}^{s} a_{ik} b_{kj} = a_{i1}b_{1j} + a_{i2}b_{2j} + \cdots + a_{is}b_{sj}
$$

即 $C$ 的第 $i$ 行第 $j$ 列元素等于 $A$ 的第 $i$ 行与 $B$ 的第 $j$ 列对应元素乘积之和。

**性质：**
1. $(AB)C = A(BC)$（结合律）
2. $A(B + C) = AB + AC$（左分配律）
3. $(B + C)A = BA + CA$（右分配律）
4. $\boldsymbol{AB \neq BA}$（**乘法一般不满足交换律**）

**示例：**
$$
A = \begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix},\quad
B = \begin{pmatrix} 0 & 1 \\ 1 & 0 \end{pmatrix}
$$

$$
AB = \begin{pmatrix} 1\cdot0+2\cdot1 & 1\cdot1+2\cdot0 \\ 3\cdot0+4\cdot1 & 3\cdot1+4\cdot0 \end{pmatrix}
= \begin{pmatrix} 2 & 1 \\ 4 & 3 \end{pmatrix}
$$

$$
BA = \begin{pmatrix} 0\cdot1+1\cdot3 & 0\cdot2+1\cdot4 \\ 1\cdot1+0\cdot3 & 1\cdot2+0\cdot4 \end{pmatrix}
= \begin{pmatrix} 3 & 4 \\ 1 & 2 \end{pmatrix}
$$

可见 $AB \neq BA$。

**注意：** 两个非零矩阵相乘可能得到零矩阵：
$$
\begin{pmatrix} 1 & 1 \\ 1 & 1 \end{pmatrix}
\begin{pmatrix} 1 & 1 \\ -1 & -1 \end{pmatrix}
= \begin{pmatrix} 0 & 0 \\ 0 & 0 \end{pmatrix}
$$

## 矩阵的性质

### 矩阵的转置

将 $m \times n$ 矩阵 $A$ 的行与列互换得到的 $n \times m$ 矩阵称为 $A$ 的 **转置矩阵**，记作 $A^T$（或 $A'$）：

$$
(A^T)_{ij} = A_{ji}
$$

**性质：**
1. $(A^T)^T = A$
2. $(A + B)^T = A^T + B^T$
3. $(kA)^T = kA^T$
4. $(AB)^T = B^T A^T$
5. $(A^k)^T = (A^T)^k$

**示例：**
$$
A = \begin{pmatrix} 1 & 2 & 3 \\ 4 & 5 & 6 \end{pmatrix},\quad
A^T = \begin{pmatrix} 1 & 4 \\ 2 & 5 \\ 3 & 6 \end{pmatrix}
$$

若 $A^T = A$，则 $A$ 为 **对称矩阵**；若 $A^T = -A$，则 $A$ 为 **反对称矩阵**。
### 对称矩阵

设 $A$ 为 $n$ 阶方阵，若 $A^T = A$，即 $a_{ij} = a_{ji}$（对所有 $i, j$），则称 $A$ 为 **对称矩阵**。

$$
A = \begin{pmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{12} & a_{22} & \cdots & a_{2n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{1n} & a_{2n} & \cdots & a_{nn}
\end{pmatrix}
$$

**性质：**
1. 对称矩阵的转置等于自身
2. 若 $A, B$ 为对称矩阵，则 $A + B$ 也为对称矩阵
3. 若 $A$ 为对称矩阵，则 $kA$（$k$ 为常数）也为对称矩阵
4. 对于任意矩阵 $A$，$AA^T$ 和 $A^TA$ 均为对称矩阵
5. 对于任意方阵 $A$，$A + A^T$ 为对称矩阵
6. 若 $A$ 为对称矩阵且可逆，则 $A^{-1}$ 也为对称矩阵
7. 对称矩阵的幂 $A^k$（$k$ 为正整数）仍为对称矩阵

**示例：**
$$
A = \begin{pmatrix} 1 & 2 \\ 2 & 3 \end{pmatrix},\quad
A^T = \begin{pmatrix} 1 & 2 \\ 2 & 3 \end{pmatrix} = A
$$

### 反对称矩阵

设 $A$ 为 $n$ 阶方阵，若 $A^T = -A$，即 $a_{ij} = -a_{ji}$（对所有 $i, j$），则称 $A$ 为 **反对称矩阵**（也称 **斜对称矩阵**）。

$$
A = \begin{pmatrix}
0 & a_{12} & a_{13} & \cdots & a_{1n} \\
-a_{12} & 0 & a_{23} & \cdots & a_{2n} \\
-a_{13} & -a_{23} & 0 & \cdots & a_{3n} \\
\vdots & \vdots & \vdots & \ddots & \vdots \\
-a_{1n} & -a_{2n} & -a_{3n} & \cdots & 0
\end{pmatrix}
$$

由定义可知，反对称矩阵的对角线元素满足 $a_{ii} = -a_{ii}$，故 $a_{ii} = 0$。

**性质：**
1. 反对称矩阵的转置等于其相反矩阵
2. 若 $A, B$ 为反对称矩阵，则 $A + B$ 也为反对称矩阵
3. 对于任意方阵 $A$，$A - A^T$ 为反对称矩阵
4. 任意方阵 $A$ 均可分解为对称矩阵与反对称矩阵之和：
   $$
   A = \frac{A + A^T}{2} + \frac{A - A^T}{2}
   $$
   其中 $\dfrac{A + A^T}{2}$ 为对称部分，$\dfrac{A - A^T}{2}$ 为反对称部分
5. 若 $A$ 为反对称矩阵，则对任意列向量 $x$，有 $x^T A x = 0$
6. 奇数阶反对称矩阵 **不可逆**（因为 $|A| = 0$）
7. 反对称矩阵的特征值为 $0$ 或纯虚数

**示例：**
$$
A = \begin{pmatrix} 0 & 3 \\ -3 & 0 \end{pmatrix},\quad
A^T = \begin{pmatrix} 0 & -3 \\ 3 & 0 \end{pmatrix} = -A
$$

### 矩阵的行列式

对于 $n$ 阶方阵 $A = (a_{ij})$，其 **行列式** 记为 $|A|$ 或 $\det(A)$，是由矩阵元素按行列式规则计算得到的一个数值。**只有方阵才有行列式**。

**性质：**
1. $|A^T| = |A|$（转置不改变行列式的值）
2. $|kA| = k^n |A|$（$k$ 为常数，$n$ 为矩阵阶数）
3. $|AB| = |A| \cdot |B|$（矩阵乘积的行列式等于行列式的乘积$\qquad$只有当$A和B$为同阶的方阵时才成立）
4. $|AB| = |BA|$（即使 $AB \neq BA$，行列式仍相等）
5. 若 $A$ 可逆，则 $|A^{-1}| = \dfrac{1}{|A|}$
6. $|A^k| = |A|^k$（$k$ 为正整数）
7. 若 $A$ 为三角矩阵（上三角或下三角），则 $|A|$ 等于对角线元素的乘积

**示例：**
$$
A = \begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix},\quad
|A| = 1\cdot4 - 2\cdot3 = -2
$$

$$
|2A| = \begin{vmatrix} 2 & 4 \\ 6 & 8 \end{vmatrix}
= 2\cdot8 - 4\cdot6 = -8 = 2^2 \cdot (-2)
$$

$$
|A^2| = |A|^2 = (-2)^2 = 4
$$


### 伴随矩阵

$n$ 阶方阵 $A$ 的 **伴随矩阵** $A^*$ 定义为：


$$
设A = \begin{pmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{21} & a_{22} & \cdots & a_{2n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{n1} & a_{n2} & \cdots & a_{nn}
\end{pmatrix}
$$

$$
则A^* = \begin{pmatrix}
A_{11} & A_{21} & \cdots & A_{n1} \\
A_{12} & A_{22} & \cdots & A_{n2} \\
\vdots & \vdots & \ddots & \vdots \\
A_{1n} & A_{2n} & \cdots & A_{nn}
\end{pmatrix}
$$

其中 $A_{ij}$ 是 $a_{ij}$ 的代数余子式。注意下标顺序：$A^*$ 的第 $i$ 行第 $j$ 列元素是 $A_{ji}$（**转置放置**）。
按行求的代数余子式按列放

**性质**

1. $(AB)^{*} = B^{*} A^{*}$
2. $A A^* = A^* A = |A| E$
3. $|A^*| = |A|^{n-1}$
4. $(A^T)^* = (A^*)^T$
5. $(kA)^* = k^{n-1}A^*$

#### 示例

求 $A = \begin{pmatrix} a & b \\ c & d \end{pmatrix}$ 的伴随矩阵。

代数余子式：
$A_{11} = d,\; A_{12} = -c,\; A_{21} = -b,\; A_{22} = a$

伴随矩阵（转置放置）：
$$
A^* = \begin{pmatrix} A_{11} & A_{21} \\ A_{12} & A_{22} \end{pmatrix}
= \begin{pmatrix} d & -b \\ -c & a \end{pmatrix}
$$
这就是 2 阶矩阵的 "主交换，副变号" 法则。

### 逆矩阵

对于 $n$ 阶方阵 $A$，若存在 $n$ 阶方阵 $B$ 使得 $AB = BA = E$，则称 $A$ 为 **可逆矩阵**，$B$ 为 $A$ 的 **逆矩阵**，记作 $A^{-1}$。

**逆矩阵具有唯一性,一个可逆矩阵的逆矩阵有且只有一个**

#### 标准形矩阵

对于任意 $m \times n$ 矩阵 $A$，设 $r(A) = r$，则 $A$ 经过有限次初等行变换和初等列变换，总可以化为如下形式，称为 $A$ 的 **标准形矩阵**（从左上角开始前 $r$ 个主对角元为 $1$，其余元素全为 $0$）：

$$
\begin{pmatrix}
1 &        &        &   &   &   \\
  & \ddots &        &   &   &   \\
  &        & 1      &   &   &   \\
  &        &        & 0 &   &   \\
  &        &        &   & \ddots &   \\
  &        &        &   &   & 0
\end{pmatrix}
$$

- 当 $r = m = n$ 时，标准形即为单位矩阵 $E_n$。

#### 可逆的充要条件

1. $A$ 可逆 $\iff$ $|A| \neq 0$（$A$ 为非奇异矩阵）
2. $n$ 阶方阵 $A$ 可逆 $\iff$ $A$ 可以表示为有限个初等矩阵的乘积 $\iff$ $A$ 与单位矩阵等价
3. $n$ 阶方阵 $A$ 可逆 $\iff$ $A$的标准形矩阵为单位矩阵$E$
4. $n$ 阶方阵 $A$ 可逆 $\iff$ $A$可以表示成有限个初等矩阵的乘积

#### 逆矩阵公式

$$
A^{-1} = \frac{1}{|A|} A^*
$$

其中 $A^*$ 为 $A$ 的 **伴随矩阵**（由所有代数余子式 $A_{ij}$ 转置构成）。

#### 推论 
1. $设A 是n阶方阵,若存在n阶方阵B,使AB =E 或 BA = E,则A可逆,且A^{-1} = B$

#### 性质

1. $(A^{-1})^{-1} = A$
2. $(AB)^{-1} = B^{-1} A^{-1}$
3. $(kA)^{-1} = \frac{1}{k} A^{-1}$（$k \neq 0$）
4. $若A可逆,则A^T也可逆且\qquad(A^T)^{-1} = (A^{-1})^T$
5. $若A可逆,则A^*也可逆且\qquad(A^*)^{-1} = (A^{-1})^* = \frac{1}{|A|} A$
6. $若A可逆,c为常数,则A^c也可逆且\qquad(A^c)^{-1} = (A^{-1})^c$
7. $|A^{-1}| = \frac{1}{|A|}$

#### 示例

求 $A = \begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix}$ 的逆矩阵。

$|A| = 1\cdot4 - 2\cdot3 = -2 \neq 0$，故 $A$ 可逆。

伴随矩阵（2 阶矩阵口诀：主交换，副变号）：
$$
A^* = \begin{pmatrix} 4 & -2 \\ -3 & 1 \end{pmatrix}
$$

$$
A^{-1} = \frac{1}{|A|} A^* = -\frac12 \begin{pmatrix} 4 & -2 \\ -3 & 1 \end{pmatrix}
= \begin{pmatrix} -2 & 1 \\ \frac32 & -\frac12 \end{pmatrix}
$$

验证：$A A^{-1} = \begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix}
\begin{pmatrix} -2 & 1 \\ \frac32 & -\frac12 \end{pmatrix}
= \begin{pmatrix} 1 & 0 \\ 0 & 1 \end{pmatrix} = E$

### 矩阵的初等变换与初等矩阵

#### 矩阵的初等变换

下面三种变换统称为矩阵的 **初等行变换**：

1. **交换变换：** 交换矩阵的两行（记作 $r_i \leftrightarrow r_j$）
2. **倍乘变换：** 以非零常数 $k$ 乘以矩阵的某一行（记作 $r_i \times k$）
3. **倍加变换：** 将矩阵某一行所有元素的 $k$ 倍加到另一行对应元素上（记作 $r_i + k r_j$）

将上述定义中的"行"改为"列"（记作 $c_i \leftrightarrow c_j$、$c_i \times k$、$c_i + k c_j$），则得到 **初等列变换**。

初等行变换和初等列变换统称为 **初等变换**。

**示例：**
$$
\begin{pmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 9
\end{pmatrix}
\xrightarrow{r_2 - 4r_1}
\begin{pmatrix}
1 & 2 & 3 \\
0 & -3 & -6 \\
7 & 8 & 9
\end{pmatrix}
\xrightarrow{r_3 - 7r_1}
\begin{pmatrix}
1 & 2 & 3 \\
0 & -3 & -6 \\
0 & -6 & -12
\end{pmatrix}
\xrightarrow{r_3 - 2r_2}
\begin{pmatrix}
1 & 2 & 3 \\
0 & -3 & -6 \\
0 & 0 & 0
\end{pmatrix}
$$

##### 行阶梯形矩阵

满足以下条件的矩阵称为 **行阶梯形矩阵**：
1. 若有零行（元素全为零的行），零行在矩阵的最下方
2. 各非零行的第一个非零元素（称为 **主元**）的列标随行标的增大而严格增大

**示例：**
$$
\begin{pmatrix}
1 & 2 & -1 & 0 \\
0 & 0 & 3 & 1 \\
0 & 0 & 0 & 2
\end{pmatrix},\qquad
\begin{pmatrix}
1 & 0 & 2 \\
0 & -1 & 3 \\
0 & 0 & 0
\end{pmatrix}
$$

##### 行最简形矩阵

满足以下条件的行阶梯形矩阵称为 **行最简形矩阵**：
1. 是行阶梯形矩阵
2. 各非零行的主元都是 $1$
3. 每个主元所在列的其他元素全为 $0$

**示例：**
$$
\begin{pmatrix}
1 & 0 & 2 & 0 \\
0 & 1 & 3 & 0 \\
0 & 0 & 0 & 1
\end{pmatrix},\qquad
\begin{pmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 1
\end{pmatrix}
$$

##### 等价矩阵

若矩阵 $A$ 经过有限次初等变换变成矩阵 $B$，则称 $A$ 与 $B$ 等价，记作 $A \cong B$。

**性质：**
1. 反身性：$A \cong A$
2. 对称性：若 $A \cong B$，则 $B \cong A$
3. 传递性：若 $A \cong B$ 且 $B \cong C$，则 $A \cong C$

#### 初等矩阵

由单位矩阵 $E$ 经过一次初等变换得到的矩阵称为 **初等矩阵**（也称初等变换矩阵）。三种初等变换对应三种初等矩阵：

##### 1. 交换两行（列）的初等矩阵 $E(i, j)$

将单位矩阵的第 $i$ 行与第 $j$ 行交换（或第 $i$ 列与第 $j$ 列交换）得到的矩阵。

$$
E(i, j) = \begin{pmatrix}
1 &        &        &        &        &        \\
  & \ddots &        &        &        &        \\
  &        & 0      & \cdots & 1      &        \\
  &        & \vdots & \ddots & \vdots &        \\
  &        & 1      & \cdots & 0      &        \\
  &        &        &        &        & \ddots \\
  &        &        &        &        &        & 1
\end{pmatrix}
$$

**示例（3 阶）：**
$$
E(1, 3) = \begin{pmatrix}
0 & 0 & 1 \\
0 & 1 & 0 \\
1 & 0 & 0
\end{pmatrix}
$$

##### 2. 倍乘某行（列）的初等矩阵 $E(i(k))$

将单位矩阵的第 $i$ 行（或第 $i$ 列）乘以非零常数 $k$ 得到的矩阵。

$$
E(i(k)) = \begin{pmatrix}
1 &        &        &        \\
  & \ddots &        &        \\
  &        & k      &        \\
  &        &        & \ddots \\
  &        &        &        & 1
\end{pmatrix}
$$

**示例（3 阶）：**
$$
E(2(3)) = \begin{pmatrix}
1 & 0 & 0 \\
0 & 3 & 0 \\
0 & 0 & 1
\end{pmatrix}
$$

##### 3. 倍加初等矩阵 $E(i, j(k))$

将单位矩阵的第 $j$ 行的 $k$ 倍加到第 $i$ 行（或第 $i$ 列的 $k$ 倍加到第 $j$ 列）得到的矩阵。

$$
E(i, j(k)) = \begin{pmatrix}
1 &        &        &        &        &        \\
  & \ddots &        &        &        &        \\
  &        & 1      & \cdots & k      &        \\
  &        & \vdots & \ddots & \vdots &        \\
  &        &        &        & 1      &        \\
  &        &        &        &        & \ddots \\
  &        &        &        &        &        & 1
\end{pmatrix}
$$

**示例（3 阶）：**
$$
E(1, 3(2)) = \begin{pmatrix}
1 & 0 & 2 \\
0 & 1 & 0 \\
0 & 0 & 1
\end{pmatrix}
$$

##### 初等矩阵与初等变换的关系

用初等矩阵左乘矩阵 $A$，相当于对 $A$ 施行相应的 **初等行变换**；用初等矩阵右乘矩阵 $A$，相当于对 $A$ 施行相应的 **初等列变换**。

**示例：**

设 $A = \begin{pmatrix} a_{11} & a_{12} & a_{13} \\ a_{21} & a_{22} & a_{23} \\ a_{31} & a_{32} & a_{33} \end{pmatrix}$

左乘 $E(1, 3)$（交换第 1、3 行）：
$$
E(1, 3)A = \begin{pmatrix}
0 & 0 & 1 \\
0 & 1 & 0 \\
1 & 0 & 0
\end{pmatrix}
\begin{pmatrix}
a_{11} & a_{12} & a_{13} \\
a_{21} & a_{22} & a_{23} \\
a_{31} & a_{32} & a_{33}
\end{pmatrix}
= \begin{pmatrix}
a_{31} & a_{32} & a_{33} \\
a_{21} & a_{22} & a_{23} \\
a_{11} & a_{12} & a_{13}
\end{pmatrix}
$$

右乘 $E(1, 3)$（交换第 1、3 列）：
$$
AE(1, 3) = \begin{pmatrix}
a_{11} & a_{12} & a_{13} \\
a_{21} & a_{22} & a_{23} \\
a_{31} & a_{32} & a_{33}
\end{pmatrix}
\begin{pmatrix}
0 & 0 & 1 \\
0 & 1 & 0 \\
1 & 0 & 0
\end{pmatrix}
= \begin{pmatrix}
a_{13} & a_{12} & a_{11} \\
a_{23} & a_{22} & a_{21} \\
a_{33} & a_{32} & a_{31}
\end{pmatrix}
$$

##### 初等矩阵的性质

1. **初等矩阵的行列式都不为零**
  + $|E(ij)| = -1$
  + $|E(i(k))| = k$
  + $|E(ij(l))| = 1$
2. **初等矩阵都是可逆的**，且其逆矩阵仍是同类型的初等矩阵：
   - $E(i, j)^{-1} = E(i, j)$（交换两次恢复原状）
   - $E(i(k))^{-1} = E(i(\frac{1}{k}))$（乘以 $k$ 的逆是乘以 $\frac{1}{k}$）
   - $E(i, j(k))^{-1} = E(i, j(-k))$（加 $k$ 倍的逆是加 $-k$ 倍）
  
3. **初等矩阵的转置矩阵仍为同种类型的初等矩阵**
4. **矩阵可逆的充要条件：** $n$ 阶方阵 $A$ 可逆 $\iff$ $A$ 可以表示为有限个初等矩阵的乘积 $\iff$ $A$ 与单位矩阵等价

### 分块矩阵

将一个大矩阵用若干条纵、横线分割成若干小块，每个小块看作一个子矩阵（子块），这种以子块为元素的矩阵称为 **分块矩阵**。

**示例：**
$$
A = \begin{pmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
\hline
0 & 0 & 2 & 3 \\
0 & 0 & 4 & 5
\end{pmatrix}
= \begin{pmatrix} E_2 & 0 \\ 0 & B \end{pmatrix},\quad
B = \begin{pmatrix} 2 & 3 \\ 4 & 5 \end{pmatrix}
$$

分块矩阵的运算与普通矩阵类似，子块视为元素即可。分块对角矩阵的行列式等于各子块行列式的乘积：

$$
\begin{vmatrix} A & 0 \\ 0 & B \end{vmatrix} = |A| \cdot |B|
$$
#### 特殊分块矩阵

##### 上三角形分块矩阵

形如 $\begin{pmatrix} A & B \\ 0 & C \end{pmatrix}$ 的分块矩阵称为 **上三角形分块矩阵**，其中 $A$、$C$ 为方阵。

当 $A$、$C$ 可逆时，其行列式为 $|A| \cdot |C|$。

##### 下三角形分块矩阵

形如 $\begin{pmatrix} A & 0 \\ B & C \end{pmatrix}$ 的分块矩阵称为 **下三角形分块矩阵**，其中 $A$、$C$ 为方阵。

当 $A$、$C$ 可逆时，其行列式为 $|A| \cdot |C|$。

##### 对角形分块矩阵

形如 $\begin{pmatrix} A_1 & & \\ & \ddots & \\ & & A_n \end{pmatrix}$ 的分块矩阵称为 **对角形分块矩阵**（也称准对角矩阵），其中各 $A_i$ 均为方阵。

#### 分块矩阵的运算

分块矩阵的运算规则与普通矩阵一致，只需将子块视为元素即可，但需保证各子块的维数满足相应条件。

##### 加法

设 $A$、$B$ 为同型矩阵，且按相同方式分块：

$$
A = \begin{pmatrix} A_{11} & \cdots & A_{1t} \\ \vdots & \ddots & \vdots \\ A_{s1} & \cdots & A_{st} \end{pmatrix},\quad
B = \begin{pmatrix} B_{11} & \cdots & B_{1t} \\ \vdots & \ddots & \vdots \\ B_{s1} & \cdots & B_{st} \end{pmatrix}
$$

则 $A + B = \begin{pmatrix} A_{11}+B_{11} & \cdots & A_{1t}+B_{1t} \\ \vdots & \ddots & \vdots \\ A_{s1}+B_{s1} & \cdots & A_{st}+B_{st} \end{pmatrix}$

##### 数乘

$kA = \begin{pmatrix} kA_{11} & \cdots & kA_{1t} \\ \vdots & \ddots & \vdots \\ kA_{s1} & \cdots & kA_{st} \end{pmatrix}$

##### 乘法

设 $A$ 为 $m \times n$ 矩阵，$B$ 为 $n \times p$ 矩阵，按分块条件（$A$ 的列分法与 $B$ 的行分法一致）分块：

$$
A = \begin{pmatrix} A_{11} & \cdots & A_{1t} \\ \vdots & \ddots & \vdots \\ A_{s1} & \cdots & A_{st} \end{pmatrix},\quad
B = \begin{pmatrix} B_{11} & \cdots & B_{1r} \\ \vdots & \ddots & \vdots \\ B_{t1} & \cdots & B_{tr} \end{pmatrix}
$$

则 $C = AB$ 为 $m \times p$ 矩阵，其子块 $C_{ij} = \sum_{k=1}^{t} A_{ik} B_{kj}$。

### 分块矩阵的转置

对分块矩阵 $A = \begin{pmatrix} A_{11} & \cdots & A_{1t} \\ \vdots & \ddots & \vdots \\ A_{s1} & \cdots & A_{st} \end{pmatrix}$，其转置为：

$$
A^T = \begin{pmatrix} A_{11}^T & \cdots & A_{s1}^T \\ \vdots & \ddots & \vdots \\ A_{1t}^T & \cdots & A_{st}^T \end{pmatrix}
$$

即先整体转置（行列互换），再对每个子块各自转置。

**特别地：**

- 对角形分块矩阵转置仍为对角形：$\begin{pmatrix} A_1 & & \\ & \ddots & \\ & & A_n \end{pmatrix}^T = \begin{pmatrix} A_1^T & & \\ & \ddots & \\ & & A_n^T \end{pmatrix}$
- 上三角形分块矩阵转置变为下三角形：$\begin{pmatrix} A & B \\ 0 & C \end{pmatrix}^T = \begin{pmatrix} A^T & 0 \\ B^T & C^T \end{pmatrix}$
- 下三角形分块矩阵转置变为上三角形：$\begin{pmatrix} A & 0 \\ B & C \end{pmatrix}^T = \begin{pmatrix} A^T & B^T \\ 0 & C^T \end{pmatrix}$

### 分块矩阵的逆矩阵

分块矩阵的逆一般无统一的简单表达式，可通过设未知子块解矩阵方程求得。对于 $2 \times 2$ 分块方阵 $\begin{pmatrix} A & B \\ C & D \end{pmatrix}$，设其逆为 $\begin{pmatrix} X & Y \\ Z & W \end{pmatrix}$， $AX + BZ = E$ 

**特别地，对于特殊分块矩阵，逆矩阵有简洁公式：**

- **对角形分块矩阵**（各 $A_i$ 均可逆）：

$$
\begin{pmatrix} A_1 & & \\ & \ddots & \\ & & A_n \end{pmatrix}^{-1} = \begin{pmatrix} A_1^{-1} & & \\ & \ddots & \\ & & A_n^{-1} \end{pmatrix}
$$

- **上三角形分块矩阵**（$A$、$C$ 可逆）：

$$
\begin{pmatrix} A & B \\ 0 & C \end{pmatrix}^{-1} = \begin{pmatrix} A^{-1} & -A^{-1}BC^{-1} \\ 0 & C^{-1} \end{pmatrix}
$$

- **下三角形分块矩阵**（$A$、$C$ 可逆）：

$$
\begin{pmatrix} A & 0 \\ B & C \end{pmatrix}^{-1} = \begin{pmatrix} A^{-1} & 0 \\ -C^{-1}BA^{-1} & C^{-1} \end{pmatrix}
$$

### 分块方阵的行列式

对于 $2 \times 2$ 分块方阵 $\begin{pmatrix} A & B \\ C & D \end{pmatrix}$，其行列式可通过 **Schur 补** 化为低阶行列式计算：

- 当 $A$ 可逆时，$\begin{vmatrix} A & B \\ C & D \end{vmatrix} = |A| \cdot |D - CA^{-1}B|$
- 当 $D$ 可逆时，$\begin{vmatrix} A & B \\ C & D \end{vmatrix} = |D| \cdot |A - BD^{-1}C|$

**特别地，对于特殊分块矩阵，行列式可直接计算：**

1. **对角形分块矩阵：** $\begin{vmatrix} A_1 & & \\ & \ddots & \\ & & A_n \end{vmatrix} = |A_1| \cdots |A_n|$

2. **上三角形分块矩阵：** $\begin{vmatrix} A & B \\ 0 & C \end{vmatrix} = |A| \cdot |C|$

3. **下三角形分块矩阵：** $\begin{vmatrix} A & 0 \\ B & C \end{vmatrix} = |A| \cdot |C|$

### 矩阵的秩

#### 矩阵的子式

在 $m \times n$ 矩阵 $A$ 中，任意选取 $k$ 行 $k$ 列 $(1 \le k \le \min(m, n))$，位于这些行与列交叉处的 $k^2$ 个元素，按原有的相对位置组成的 $k$ 阶行列式，称为 $A$ 的一个 **$k$ 阶子式**。

> 注意：矩阵的子式是一个**行列式**（数值），而非矩阵。

**示例：**

对矩阵 $A = \begin{pmatrix} 1 & 2 & 3 \\ 4 & 5 & 6 \\ 7 & 8 & 9 \end{pmatrix}$：

- 选取第 1、2 行和第 1、2 列，得到 2 阶子式 $\begin{vmatrix} 1 & 2 \\ 4 & 5 \end{vmatrix} = -3$
- 选取第 1、3 行和第 2、3 列，得到 2 阶子式 $\begin{vmatrix} 2 & 3 \\ 8 & 9 \end{vmatrix} = -6$

#### 矩阵的秩的定义

**定义：** 在 $m \times n$ 矩阵 $A$ 中，非零子式的最高阶数称为 $A$ 的 **秩**，记作 $r(A)$ 或 $\operatorname{rank}(A)$。

$$
r(A) = \max\{\,k \mid A \text{ 存在 } k \text{ 阶非零子式}\,\}
$$

- 若 $A$ 的所有 $r+1$ 阶子式（如果存在）都为零，则 $r(A) = r$
- 规定：**零矩阵的秩为 $0$**，即 $r(0) = 0$
- 显然，$0 \le r(A) \le \min(m, n)$

**示例：**

1. $A = \begin{pmatrix} 1 & 2 & 3 \\ 4 & 5 & 6 \\ 7 & 8 & 9 \end{pmatrix}$，有 $|A| = 0$（3 阶子式为零），但存在非零 2 阶子式 $\begin{vmatrix} 1 & 2 \\ 4 & 5 \end{vmatrix} = -3 \neq 0$，故 $r(A) = 2$。

2. $B = \begin{pmatrix} 1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1 \end{pmatrix}$，有 $|B| = 1 \neq 0$，故 $r(B) = 3$。

#### 满秩矩阵

设 $A$ 为 $m \times n$ 矩阵，$r(A) = r$。

##### 行满秩

若 $r = m$（即秩等于行数），则称 $A$ 为 **行满秩矩阵**。

$$
r(A) = m \le n
$$

##### 列满秩

若 $r = n$（即秩等于列数），则称 $A$ 为 **列满秩矩阵**。

$$
r(A) = n \le m
$$

##### 满秩

若 $r = \min(m, n)$（即秩达到最大值），则称 $A$ 为 **满秩矩阵**。

##### 降秩

若 $r < \min(m, n)$，则称 $A$ 为 **降秩矩阵**（或 **亏秩矩阵**）。

##### 性质

**对于 $n$ 阶方阵 $A$：**

+ $A \text{ 满秩} \iff r(A) = n \iff |A| \neq 0 \iff A \text{ 可逆} \iff A \text{ 非奇异}$
+ $A \text{ 降秩} \iff r(A) < n \iff |A| = 0 \iff A \text{ 不可逆} \iff A \text{ 奇异}$

#### 秩的性质

1. **转置不变性：** $r(A) = r(A^T) = r(A^TA) = r(AA^T)$
2. **初等变换不改变秩：** 若 $A \cong B$（$A$ 与 $B$ 等价），则 $r(A) = r(B)$
3. **若A,B为同型矩阵**,$则A \cong B \iff r(A) = r(B)$
4. **乘以可逆矩阵不改变秩：** 若 $P$、$Q$ 可逆，则 $r(PA) = r(AQ) = r(PAQ) = r(A)$
5. **与 $k$ 倍的关系：** $r(kA) = r(A)$（$k \neq 0$）
6. $若A\not ={0},则 A的任意两行(列)元素对应成比例 \iff r(A) = 1$
7. $若A为行阶梯形矩阵,则r(A)为A中非零行的行数$
8. **和的秩：** $r(A + B) \le r(A) + r(B)$
9. **积的秩：**
   - $r(AB) \le \min\{r(A), r(B)\}$
   - 若 $A$ 列满秩，则 $r(AB) = r(B)$
   - 若 $B$ 行满秩，则 $r(AB) = r(A)$
10. $A,B 同为 m\times n 矩阵,则r(A \pm B) \leq r(A) + r(B)$
11. **Sylvester 不等式：** $r(A) + r(B) - n \le r(AB) \le \min\{r(A), r(B)\}$（$A$ 为 $m \times n$，$B$ 为 $n \times p$）
12. $若A为m\times n矩阵,B为n\times s 矩阵,且 AB = 0 ,则 r(A)+r(B) \leq n$
13. **Frobenius 不等式：** $r(AB) + r(BC) \le r(B) + r(ABC)$
14. **分块矩阵的秩：**
   - $r\begin{pmatrix} A & 0 \\ 0 & B \end{pmatrix} = r(A) + r(B)$
   - $r\begin{pmatrix} A & B \\ C & D \end{pmatrix} \ge r(A) + r(D - CA^{-1}B)$（当 $A$ 可逆时等号成立）
15. **与伴随矩阵的秩关系：**
    设 $A$ 为 $n$ 阶方阵，则
    $$
    r(A^*) = \begin{cases}
    n, & r(A) = n \\
    1, & r(A) = n-1 \\
    0, & r(A) < n-1
    \end{cases}
    $$
16. **秩的求法：** 通过初等行变换将矩阵化为行阶梯形矩阵，**非零行的行数即为矩阵的秩**。

#### 示例：用初等行变换求秩

求 $A = \begin{pmatrix} 1 & 2 & 3 & 4 \\ 2 & 4 & 6 & 8 \\ 1 & 1 & 1 & 1 \end{pmatrix}$ 的秩。

$$
\begin{aligned}
A &= \begin{pmatrix} 1 & 2 & 3 & 4 \\ 2 & 4 & 6 & 8 \\ 1 & 1 & 1 & 1 \end{pmatrix}
\xrightarrow{r_2 - 2r_1} \begin{pmatrix} 1 & 2 & 3 & 4 \\ 0 & 0 & 0 & 0 \\ 1 & 1 & 1 & 1 \end{pmatrix} \\
&\xrightarrow{r_3 - r_1} \begin{pmatrix} 1 & 2 & 3 & 4 \\ 0 & 0 & 0 & 0 \\ 0 & -1 & -2 & -3 \end{pmatrix}
\xrightarrow{r_2 \leftrightarrow r_3} \begin{pmatrix} 1 & 2 & 3 & 4 \\ 0 & -1 & -2 & -3 \\ 0 & 0 & 0 & 0 \end{pmatrix}
\end{aligned}
$$

行阶梯形矩阵有 2 个非零行，故 $r(A) = 2$。
# 向量

## 向量的概念和线性运算

### **n 维向量**

由 $n$ 个有顺序的数 $a_1, a_2, \dots, a_n$ 组成的数组称为 **$n$ 维向量**，记作：

$$
\boldsymbol{\alpha} = (a_1, a_2, \dots, a_n) \quad \text{(行向量)} \qquad
\boldsymbol{\alpha} = \begin{pmatrix} a_1 \\ a_2 \\ \vdots \\ a_n \end{pmatrix} \quad \text{(列向量)}
$$

其中 $a_i$ 称为向量的第 $i$ 个分量（$i = 1, 2, \dots, n$）。

- **行向量**：分量横排，$1 \times n$ 矩阵
- **列向量**：分量竖排，$n \times 1$ 矩阵
- 通常用希腊字母 $\boldsymbol{\alpha}, \boldsymbol{\beta}, \boldsymbol{\gamma}$ 表示向量

### **常见向量**

- **零向量：** 所有分量均为 $0$ 的向量，记作 $\boldsymbol{0} = (0, 0, \dots, 0)$
- **负向量：** 向量 $\boldsymbol{\alpha} = (a_1, a_2, \dots, a_n)$ 的负向量为 $-\boldsymbol{\alpha} = (-a_1, -a_2, \dots, -a_n)$
- **单位向量：** $\boldsymbol{e}_i = (0, \dots, 0, 1, 0, \dots, 0)$，第 $i$ 个分量为 $1$，其余为 $0$

### 向量的转置

- **转置定义：** 将向量的行与列互换。行向量的转置是列向量，列向量的转置是行向量
- **行向量转列向量：** 若 $\boldsymbol{\alpha} = (a_1, a_2, \dots, a_n)$，则其转置为 $\boldsymbol{\alpha}^T = \begin{pmatrix} a_1 \\ a_2 \\ \vdots \\ a_n \end{pmatrix}$
- **列向量转行向量：** 若 $\boldsymbol{\beta} = \begin{pmatrix} b_1 \\ b_2 \\ \vdots \\ b_n \end{pmatrix}$，则其转置为 $\boldsymbol{\beta}^T = (b_1, b_2, \dots, b_n)$
- **性质：**
  1. $(\boldsymbol{\alpha}^T)^T = \boldsymbol{\alpha}$（转置的转置是自身）
  2. $(\boldsymbol{\alpha} + \boldsymbol{\beta})^T = \boldsymbol{\alpha}^T + \boldsymbol{\beta}^T$（转置对加法保持线性）
  3. $(k\boldsymbol{\alpha})^T = k\boldsymbol{\alpha}^T$（数乘与转置可交换）

### **向量的线性运算**

#### **向量加法**

设 $\boldsymbol{\alpha} = (a_1, a_2, \dots, a_n)$，$\boldsymbol{\beta} = (b_1, b_2, \dots, b_n)$，则：

$$
\boldsymbol{\alpha} + \boldsymbol{\beta} = (a_1 + b_1, a_2 + b_2, \dots, a_n + b_n)
$$

**性质：**
1. $\boldsymbol{\alpha} + \boldsymbol{\beta} = \boldsymbol{\beta} + \boldsymbol{\alpha}$（交换律）
2. $(\boldsymbol{\alpha} + \boldsymbol{\beta}) + \boldsymbol{\gamma} = \boldsymbol{\alpha} + (\boldsymbol{\beta} + \boldsymbol{\gamma})$（结合律）
3. $\boldsymbol{\alpha} + \boldsymbol{0} = \boldsymbol{\alpha}$
4. $\boldsymbol{\alpha} + (-\boldsymbol{\alpha}) = \boldsymbol{0}$

#### **数乘向量**

设 $k$ 为实数（或复数），$\boldsymbol{\alpha} = (a_1, a_2, \dots, a_n)$，则：

$$
k\boldsymbol{\alpha} = (ka_1, ka_2, \dots, ka_n)
$$

**性质：**
1. $k(l\boldsymbol{\alpha}) = (kl)\boldsymbol{\alpha}$
2. $(k + l)\boldsymbol{\alpha} = k\boldsymbol{\alpha} + l\boldsymbol{\alpha}$
3. $k(\boldsymbol{\alpha} + \boldsymbol{\beta}) = k\boldsymbol{\alpha} + k\boldsymbol{\beta}$
4. $1 \cdot \boldsymbol{\alpha} = \boldsymbol{\alpha}$

#### **向量减法**

$$
\boldsymbol{\alpha} - \boldsymbol{\beta} = \boldsymbol{\alpha} + (-\boldsymbol{\beta}) = (a_1 - b_1, a_2 - b_2, \dots, a_n - b_n)
$$

### **示例**

设 $\boldsymbol{\alpha} = (1, -2, 3)$，$\boldsymbol{\beta} = (0, 4, -1)$：

$$
\boldsymbol{\alpha} + \boldsymbol{\beta} = (1, 2, 2),\quad
3\boldsymbol{\alpha} = (3, -6, 9),\quad
2\boldsymbol{\alpha} - \boldsymbol{\beta} = (2, -8, 7)
$$

## 向量的线性组合与线性表示

### **线性组合**

给定 $m$ 个 $n$ 维向量 $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m$ 和 $m$ 个数 $k_1, k_2, \dots, k_m$，则称

$$
k_1\boldsymbol{\alpha}_1 + k_2\boldsymbol{\alpha}_2 + \cdots + k_m\boldsymbol{\alpha}_m
$$

为向量组 $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m$ 的一个 **线性组合**，$k_1, k_2, \dots, k_m$ 称为 **组合系数**。

### **线性表示**

若向量 $\boldsymbol{\beta}$ 可以表示为向量组 $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m$ 的线性组合，即存在数 $k_1, k_2, \dots, k_m$ 使得：

$$
\boldsymbol{\beta} = k_1\boldsymbol{\alpha}_1 + k_2\boldsymbol{\alpha}_2 + \cdots + k_m\boldsymbol{\alpha}_m
$$

则称 $\boldsymbol{\beta}$ 可由向量组 $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m$ **线性表示**（或 **线性表出**）。

### **线性表示的判定**

向量 $\boldsymbol{\beta}$ 可由 $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m$ 线性表示 $\iff$ 方程组 $x_1\boldsymbol{\alpha}_1 + x_2\boldsymbol{\alpha}_2 + \cdots + x_m\boldsymbol{\alpha}_m = \boldsymbol{\beta}$ 有解

用矩阵语言描述：设 $A = (\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m)$，则

$$
\boldsymbol{\beta} \text{ 可由 } \boldsymbol{\alpha}_1, \dots, \boldsymbol{\alpha}_m \text{ 线性表示} \iff r(A) = r(A, \boldsymbol{\beta})
$$

即系数矩阵的秩等于增广矩阵的秩。

**示例**

判断 $\boldsymbol{\beta} = (1, 2, 3)$ 能否由 $\boldsymbol{\alpha}_1 = (1, 0, 1)$，$\boldsymbol{\alpha}_2 = (0, 1, 1)$，$\boldsymbol{\alpha}_3 = (1, 1, 2)$ 线性表示。

解方程组：
$$
x_1\begin{pmatrix}1\\0\\1\end{pmatrix} + x_2\begin{pmatrix}0\\1\\1\end{pmatrix} + x_3\begin{pmatrix}1\\1\\2\end{pmatrix} = \begin{pmatrix}1\\2\\3\end{pmatrix}
$$

得：
$$
\begin{cases}
x_1 + x_3 = 1 \\
x_2 + x_3 = 2 \\
x_1 + x_2 + 2x_3 = 3
\end{cases}
$$

解得 $x_1 = 1 - t,\; x_2 = 2 - t,\; x_3 = t$（$t$ 为任意常数），故 $\boldsymbol{\beta}$ 可由 $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \boldsymbol{\alpha}_3$ 线性表示。

### 性质
+ $向量组 a_1 ,a_2, \dots,a_n 中任一向量a_i 均可由本向量组线性表示$

### **等价向量组**

若向量组 $A$ 中的每个向量都可由向量组 $B$ 线性表示，则称向量组 $A$ 可由向量组 $B$ **线性表示**。

若向量组 $A$ 与向量组 $B$ 可以互相线性表示，则称 $A$ 与 $B$ **等价**。

**性质：**
1. 反身性：每个向量组与自身等价
2. 对称性：若 $A$ 与 $B$ 等价，则 $B$ 与 $A$ 等价
3. 传递性：若 $A$ 与 $B$ 等价，$B$ 与 $C$ 等价，则 $A$ 与 $C$ 等价

## 向量的线性相关性

### **线性相关与线性无关**

#### **线性相关**

设有 $n$ 维向量组 $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m$，若存在 **不全为零** 的数 $k_1, k_2, \dots, k_m$ 使得：

$$
k_1\boldsymbol{\alpha}_1 + k_2\boldsymbol{\alpha}_2 + \cdots + k_m\boldsymbol{\alpha}_m = \boldsymbol{0}
$$

则称向量组 $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m$ **线性相关**。

#### **线性无关**

若只有当 $k_1 = k_2 = \cdots = k_m = 0$ 时，才有

$$
k_1\boldsymbol{\alpha}_1 + k_2\boldsymbol{\alpha}_2 + \cdots + k_m\boldsymbol{\alpha}_m = \boldsymbol{0}
$$

则称向量组 $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m$ **线性无关**。

### **判定定理**

1. **齐次方程组判定：** 向量组 $\boldsymbol{\alpha}_1, \dots, \boldsymbol{\alpha}_m$ 线性相关 $\iff$ 齐次线性方程组 $x_1\boldsymbol{\alpha}_1 + \cdots + x_m\boldsymbol{\alpha}_m = \boldsymbol{0}$ 有非零解

2. **秩的判定：** 设 $A = (\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m)$，则
   - 线性相关 $\iff r(A) < m$
   - 线性无关 $\iff r(A) = m$

3. **单个向量：** 单个向量 $\boldsymbol{\alpha}$ 线性相关 $\iff \boldsymbol{\alpha} = \boldsymbol{0}$；单个非零向量线性无关

4. **两个向量：** 两个向量线性相关 $\iff$ 对应分量成比例

5. 如果向量组中有一部分向量(称为部分组)线性相关,则该向量组线性相关

6. 如果向量组线性无关.则任一部分也线性无关

7. 含有零向量的向量组必定线性相关,线性无关的向量组必定不含零向量

8. $n维单位坐标向量必定线性无关$

9. $\boldsymbol{\alpha}_1, \dots, \boldsymbol{\alpha}_m 线性相关\iff 其中至少有一个向量是其余向量的线性组合$

10. $若向量组\boldsymbol{\alpha}_1, \dots, \boldsymbol{\alpha}_m 线性无关,但向量组\boldsymbol{\alpha}_1, \dots, \boldsymbol{\alpha}_m,\beta 线性相关,则\beta可由向量组\boldsymbol{\alpha}_1, \dots, \boldsymbol{\alpha}_m 线性表示,且表示法唯一$

11. **$n+1$ 个 $n$ 维向量：** 任意 $n+1$ 个 $n$ 维向量必线性相关

12. **方阵判定：** $m$ 个 $m$ 维向量线性相关 $\iff$ 它们构成的行列式 $|\boldsymbol{\alpha}_1, \dots, \boldsymbol{\alpha}_m| = 0$

### **重要性质**

1. 若向量组线性相关，则至少有一个向量可由其余向量线性表示
2. 若向量组线性无关，而添加一个向量后线性相关，则添加的向量可由原向量组唯一线性表示
3. 若向量组 $I$ 线性无关，且可由向量组 $II$ 线性表示，则 $|I| \le |II|$（向量个数不超过 $II$ 的个数）
4. 若向量组 $I$ 可由向量组 $II$ 线性表示，且 $|I| > |II|$，则 $I$ 必线性相关
5. $若向量组 I 和II 均线性无关,且I和II可以互相线性表示,则|I| = |II|$
6. **缩短组与延长组：**
   - 若向量组线性无关，则其任何部分组也线性无关（**无关组的子组仍无关**）
   - 若向量组线性相关，则其任何包含它的更大组也线性相关（**相关组的扩组仍相关**）
   - 若 $n$ 维向量组线性无关，则在每个向量上添加一个分量得到的 $n+1$ 维向量组也线性无关（**无关组延长仍无关**）
   - 若 $n$ 维向量组线性相关，则删去每个向量的同一分量后得到的 $n-1$ 维向量组也线性相关（**相关组缩短仍相关**）

## **极大线性无关组**

### 向量组的等价

**定义：** 设有两个向量组 $A: \boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m$ 和 $B: \boldsymbol{\beta}_1, \boldsymbol{\beta}_2, \dots, \boldsymbol{\beta}_n$，若 $A$ 中每个向量都可由 $B$ 线性表示，且 $B$ 中每个向量也都可由 $A$ 线性表示，则称向量组 $A$ 与 $B$ **等价**。

**性质：**
1. **反身性：** 向量组与自身等价
2. **对称性：** 若 $A$ 与 $B$ 等价，则 $B$ 与 $A$ 等价
3. **传递性：** 若 $A$ 与 $B$ 等价，且 $B$ 与 $C$ 等价，则 $A$ 与 $C$ 等价
4. 若向量组 $A$ 可由 $B$ 线性表示，则 $r(A) \le r(B)$
5. 若 $A$ 与 $B$ 等价，则 $r(A) = r(B)$（**等价 $\Rightarrow$ 等秩**，反之不成立）
6. 一个向量组与其任意一个最大无关组等价

### **定义**

设向量组 $A$ 中存在 $r$ 个向量 $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_r$ 满足：
1. $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_r$ 线性无关
2. $A$ 中任意 $r+1$ 个向量都线性相关（或者说 $A$ 中任一向量都可由这 $r$ 个向量线性表示）

则称 $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_r$ 为向量组 $A$ 的一个 **最大线性无关组**（简称 **最大无关组**）。

### **性质**

1. 向量组的 **最大无关组不唯一**，但每个最大无关组所含向量个数相同
2. 若向量组本身线性无关,则其线性极大线性无关组为向量组本身
3. 向量组的秩等于其最大无关组中向量的个数
4. 向量组 $A$ 与它的任意一个最大无关组等价
5. 向量组的任意两个最大无关组之间等价
6. $若向量组I 可由向量组II线性表示,则向量组I的极大线性无关组可由向量组II的极大线性无关组线性表示$
7. 等价的向量组,其极大线性无关组也等价
   
### 求解极大线性无关组

**方法（行简化阶梯形法）：**
1. 以向量组中各向量为**列**构造矩阵 $A$
2. 对 $A$ 仅施以**初等行变换**，化为**行最简形（简化行阶梯形）**
3. 每个**首非零元所在列**对应的原向量构成一个极大无关组
4. 其余向量由该极大无关组线性表示的系数即为行最简形中对应列的元素

> **例：** 求 $\boldsymbol{\alpha}_1=(1,1,2),\ \boldsymbol{\alpha}_2=(1,2,3),\ \boldsymbol{\alpha}_3=(1,3,4)$ 的一个极大无关组，并将其余向量用该组表示
>
> 以各向量为列构造矩阵，并施以行变换化为行最简形：
> $$
> \begin{aligned}
> A &= \begin{pmatrix}
> 1 & 1 & 1 \\
> 1 & 2 & 3 \\
> 2 & 3 & 4
> \end{pmatrix}
> \xrightarrow[\substack{r_3-2r_1\\r_2-r_1}]{}
> \begin{pmatrix}
> 1 & 1 & 1 \\
> 0 & 1 & 2 \\
> 0 & 1 & 2
> \end{pmatrix}
> \xrightarrow[r_3-r_2]{}
> \begin{pmatrix}
> 1 & 1 & 1 \\
> 0 & 1 & 2 \\
> 0 & 0 & 0
> \end{pmatrix} \\
> &\xrightarrow[r_1-r_2]{}
> \begin{pmatrix}
> 1 & 0 & -1 \\
> 0 & 1 & 2 \\
> 0 & 0 & 0
> \end{pmatrix}
> \end{aligned}
> $$
>
> 首非零元在第 1、2 列，故 $\boldsymbol{\alpha}_1,\boldsymbol{\alpha}_2$ 为一个极大无关组；第 3 列对应系数为 $(-1, 2)^\mathrm{T}$，即 $\boldsymbol{\alpha}_3 = -\boldsymbol{\alpha}_1 + 2\boldsymbol{\alpha}_2$

## **向量组的秩**

**定义：** 向量组 $\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m$ 的最大无关组所含向量的个数称为该向量组的 **秩**，记作 $r(\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \dots, \boldsymbol{\alpha}_m)$。

**性质：**
1. $0 \le r(\boldsymbol{\alpha}_1, \dots, \boldsymbol{\alpha}_m) \le min(向量维数,向量组包含向量个数)$
2. 向量组线性无关 $\iff$ 秩 $= m$；线性相关 $\iff$ 秩 $< m$
3. 等价向量组有相同的秩
4. **矩阵的秩 = 行向量组的秩 = 列向量组的秩**
5. 若向量组 $I$ 可由向量组 $II$ 线性表示，则 $r(I) \le r(II)$

**示例**

判断向量组 $\boldsymbol{\alpha}_1 = (1, 1, 1)$，$\boldsymbol{\alpha}_2 = (1, 2, 3)$，$\boldsymbol{\alpha}_3 = (1, 3, 6)$ 的线性相关性。

**解法一（秩）：**

$$
A = \begin{pmatrix}
1 & 1 & 1 \\
1 & 2 & 3 \\
1 & 3 & 6
\end{pmatrix}
\xrightarrow{r_2 - r_1}
\begin{pmatrix}
1 & 1 & 1 \\
0 & 1 & 2 \\
1 & 3 & 6
\end{pmatrix}
\xrightarrow{r_3 - r_1}
\begin{pmatrix}
1 & 1 & 1 \\
0 & 1 & 2 \\
0 & 2 & 5
\end{pmatrix}
\xrightarrow{r_3 - 2r_2}
\begin{pmatrix}
1 & 1 & 1 \\
0 & 1 & 2 \\
0 & 0 & 1
\end{pmatrix}
$$

$r(A) = 3 = m$，故向量组线性无关。

**解法二（行列式）：**
$$
|\boldsymbol{\alpha}_1, \boldsymbol{\alpha}_2, \boldsymbol{\alpha}_3| = \begin{vmatrix}
1 & 1 & 1 \\
1 & 2 & 3 \\
1 & 3 & 6
\end{vmatrix} = 1 \cdot 2 \cdot 6 + 1 \cdot 3 \cdot 1 + 1 \cdot 1 \cdot 3 - 1 \cdot 2 \cdot 1 - 1 \cdot 3 \cdot 1 - 1 \cdot 1 \cdot 6 = 12 + 3 + 3 - 2 - 3 - 6 = 7 \neq 0
$$
故向量组线性无关。

# 线性方程组

## 线性方程组的表示形式及初等变换

**一般形式**
$$
\begin{cases}
a_{11}x_1 + a_{12}x_2 + \cdots + a_{1n}x_n = b_1 \\
a_{21}x_1 + a_{22}x_2 + \cdots + a_{2n}x_n = b_2 \\
\qquad\vdots \\
a_{m1}x_1 + a_{m2}x_2 + \cdots + a_{mn}x_n = b_m
\end{cases}
$$

**矩阵形式：**
$$
\boldsymbol{A}\boldsymbol{x} = \boldsymbol{b}
$$
其中 $\boldsymbol{A} = (a_{ij})_{m \times n}$ 为系数矩阵，$\boldsymbol{x} = (x_1, x_2, \dots, x_n)^\mathrm{T}$ 为未知向量，$\boldsymbol{b} = (b_1, b_2, \dots, b_m)^\mathrm{T}$ 为常数向量。

**向量形式：**
$$
x_1\boldsymbol{\alpha}_1 + x_2\boldsymbol{\alpha}_2 + \cdots + x_n\boldsymbol{\alpha}_n = \boldsymbol{b}
$$

其中 $\boldsymbol{\alpha}_j = (a_{1j}, a_{2j}, \dots, a_{mj})^\mathrm{T}$ 为系数矩阵 $\boldsymbol{A}$ 的第 $j$ 列向量。

#### 系数矩阵

系数矩阵仅包含方程组中未知量的系数：

$$
\boldsymbol{A} = \begin{pmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{21} & a_{22} & \cdots & a_{2n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{m1} & a_{m2} & \cdots & a_{mn}
\end{pmatrix}
$$

系数矩阵的秩 $r(\boldsymbol{A})$ 反映了方程组中独立方程的个数。

#### 增广系数矩阵

将常数项添加到系数矩阵的最后一列，构成增广矩阵：

$$
\overline{\boldsymbol{A}} = (\boldsymbol{A} \mid \boldsymbol{b}) = \begin{pmatrix}
a_{11} & a_{12} & \cdots & a_{1n} & \mid & b_1 \\
a_{21} & a_{22} & \cdots & a_{2n} & \mid & b_2 \\
\vdots & \vdots & \ddots & \vdots & \mid & \vdots \\
a_{m1} & a_{m2} & \cdots & a_{mn} & \mid & b_m
\end{pmatrix}
$$

**相容性定理（Kronecker-Capelli 定理）：** 线性方程组有解 $\iff r(\boldsymbol{A}) = r(\overline{\boldsymbol{A}})$。

#### 非齐次线性方程组

当 $\boldsymbol{b} \neq \boldsymbol{0}$ 时，称为非齐次线性方程组。

**解的结构：** 非齐次方程组的通解 = 齐次方程组的通解 + 非齐次方程组的一个特解。

$$
\boldsymbol{x} = \boldsymbol{x}_p + \sum_{i=1}^{n-r} k_i \boldsymbol{\eta}_i
$$

其中 $\boldsymbol{x}_p$ 为特解，$\boldsymbol{\eta}_i$ 为导出组的基础解系，$k_i$ 为任意常数。

**解的情况：**
- $r(\boldsymbol{A}) < r(\overline{\boldsymbol{A}})$：无解
- $r(\boldsymbol{A}) = r(\overline{\boldsymbol{A}}) = n$：唯一解
- $r(\boldsymbol{A}) = r(\overline{\boldsymbol{A}}) < n$：无穷多解（自由度为 $n - r$）

#### 导出组

非齐次方程组对应的导出组（齐次方程组）：

$$
\boldsymbol{A}\boldsymbol{x} = \boldsymbol{0}
$$

即
$$
\begin{cases}
a_{11}x_1 + a_{12}x_2 + \cdots + a_{1n}x_n = 0 \\
a_{21}x_1 + a_{22}x_2 + \cdots + a_{2n}x_n = 0 \\
\qquad\vdots \\
a_{m1}x_1 + a_{m2}x_2 + \cdots + a_{mn}x_n = 0
\end{cases}
$$

**性质：**
1. 齐次方程组至少有零解（平凡解）。
2. 有非零解 $\iff r(\boldsymbol{A}) < n$。
3. 若 $m < n$（方程数 < 未知数个数），则必有非零解。
4. 解向量的线性组合仍是解，所有解构成解空间，维数为 $n - r(\boldsymbol{A})$。

#### 初等行变换

对线性方程组的增广矩阵施行以下三种初等行变换，不改变方程组的解：

1. **交换两行**：$r_i \leftrightarrow r_j$
2. **某行乘以非零常数**：$r_i \leftarrow k r_i \ (k \neq 0)$
3. **某行加上另一行的倍数**：$r_i \leftarrow r_i + k r_j$

通过初等行变换将增广矩阵化为**行阶梯形**或**行最简形**，即可求解方程组。

## 线性方程组解的判定

对于 $m$ 个方程 $n$ 个未知数的线性方程组 $\boldsymbol{Ax} = \boldsymbol{b}$，记系数矩阵秩 $r = r(\boldsymbol{A})$，增广矩阵秩 $\bar{r} = r(\overline{\boldsymbol{A}})$。

### 非齐次线性方程组 $\boldsymbol{Ax} = \boldsymbol{b}$

| 条件              | 解的情况                       |
| ----------------- | ------------------------------ |
| $r < \bar{r}$     | **无解**（矛盾方程组）         |
| $r = \bar{r} = n$ | **唯一解**                     |
| $r = \bar{r} < n$ | **无穷多解**，自由度为 $n - r$ |

### 齐次线性方程组 $\boldsymbol{Ax} = \boldsymbol{0}$

| 条件    | 解的情况                               |
| ------- | -------------------------------------- |
| $r = n$ | **唯一零解**（只有平凡解）             |
| $r < n$ | **无穷多非零解**，解空间维数为 $n - r$ |

**性质**
$齐次线性方程组有非零解 \iff \alpha_1,\alpha_2, \dots, \alpha_n线性相关$
$齐次线性方程组=只有零解 \iff \alpha_1,\alpha_2, \dots, \alpha_n线性无关$
### 判定流程

```
                ┌─────────────────────────┐
                │  增广矩阵初等行变换       │
                │  化为行阶梯形             │
                └────────┬────────────────┘
                         │
                         ▼
                计算 r(A) 和 r(Ā)
                         │
                         ├── r(A) ≠ r(Ā) ────→ 无解
                         │
                         └── r(A) = r(Ā) = r
                                     │
                         ┌───────────┴───────────┐
                         ▼                       ▼
                      r = n                   r < n
                     唯一解                 无穷多解
```

### 推论
 + 对于齐次线性方程组,如果方程个数小于未知数个数,则齐次线性方程组必有非零解
 + 对于线性方程组,若系数矩阵$A$为方阵
   + 对于齐次线性方程组 $A不可逆\iff |A| = 0\iff r(A)<n\iff Ax=0有非零解$ <br> $A可逆\iff |A| \not= 0\iff r(A)=n\iff Ax=0只有零解$
   + 对于非齐次线性方程组 $A可逆\iff 有唯一解$ <br> $A不可逆 \iff 无解或无穷多解$

## 线性方程组解的性质与结构

### 线性方程组解的性质

#### 齐次方程组 $\boldsymbol{Ax} = \boldsymbol{0}$ 的解的性质

设 $\boldsymbol{\eta}_1, \boldsymbol{\eta}_2$ 为齐次方程组的解，$k$ 为任意常数。

1. **可加性**：$\boldsymbol{\eta}_1 + \boldsymbol{\eta}_2$ 仍是齐次方程组的解
2. **齐次性**：$k\boldsymbol{\eta}_1$ 仍是齐次方程组的解
3. **线性组合**：$k_1\boldsymbol{\eta}_1 + k_2\boldsymbol{\eta}_2$ 仍是齐次方程组的解

> 齐次方程组的解集构成一个**向量空间**（解空间），维数为 $n - r(\boldsymbol{A})$

#### 非齐次方程组 $\boldsymbol{Ax} = \boldsymbol{b}$ 的解的性质

设 $\boldsymbol{x}_1, \boldsymbol{x}_2$ 为非齐次方程组的解，$\boldsymbol{\eta}$ 为导出组 $\boldsymbol{Ax} = \boldsymbol{0}$ 的解。

1. **差为齐次解**：$\boldsymbol{x}_1 - \boldsymbol{x}_2$ 是导出组 $\boldsymbol{Ax} = \boldsymbol{0}$ 的解
2. **叠加原理**：$\boldsymbol{x}_1 + \boldsymbol{\eta}$ 仍是 $\boldsymbol{Ax} = \boldsymbol{b}$ 的解
3. **通解结构**：非齐次方程组的**通解** = 齐次方程组的**通解** + 非齐次方程组的**特解**

$$
\boldsymbol{x} = \boldsymbol{x}^* + \sum_{i=1}^{n-r} k_i \boldsymbol{\eta}_i
$$

其中 $\boldsymbol{x}^*$ 为一个特解，$\{\boldsymbol{\eta}_1, \boldsymbol{\eta}_2, \dots, \boldsymbol{\eta}_{n-r}\}$ 为导出组的基础解系。

#### 基础解系

对于齐次线性方程组 $\boldsymbol{Ax} = \boldsymbol{0}$（$r = r(\boldsymbol{A})$），其极大线性无关组称为**基础解系**。

**定义：** 若 $\boldsymbol{\eta}_1, \boldsymbol{\eta}_2, \dots, \boldsymbol{\eta}_t$ 满足：
1. 均为 $\boldsymbol{Ax} = \boldsymbol{0}$ 的解
2. 线性无关
3. 任一解均可由它们线性表示

则称 $\{\boldsymbol{\eta}_1, \boldsymbol{\eta}_2, \dots, \boldsymbol{\eta}_t\}$ 为基础解系，且 $t = n - r$。

**求基础解系的步骤：**

1. 对系数矩阵 $\boldsymbol{A}$ 作初等行变换，化为**行最简形**
2. 确定主元列和自由列，找出 $r$ 个主变量和 $n - r$ 个自由变量
3. 写出同解方程组
4. 自由变量依次取标准基 $(1,0,\dots,0), (0,1,\dots,0), \dots, (0,0,\dots,1)$
5. 回代同解方程组解得对应的主变量值，得到 $n - r$ 个解向量，即为基础解系

**示例：**

$$
\begin{cases}
x_1 + x_2 - x_3 + 2x_4 = 0 \\
2x_1 + 2x_2 - x_3 + 3x_4 = 0 \\
-x_1 - x_2 + 2x_3 - 3x_4 = 0
\end{cases}
\overset{\text{行变换}}{\longrightarrow}
\begin{pmatrix}
1 & 1 & 0 & 1 \\
0 & 0 & 1 & -1 \\
0 & 0 & 0 & 0
\end{pmatrix}
$$

主变量：$x_1, x_3$，自由变量：$x_2, x_4$（$n - r = 4 - 2 = 2$）。


$$
写出同解方程组:
\begin{cases}
   x_1 = -x_2-x_4 \\
   x_3 = x_4
\end{cases}
$$

将$(x_2,x_4)^T = (1,0) \qquad (x_2,x_4)^T = (0,1)$分别带入同解方程组

基础解系：$\boldsymbol{\eta}_1 = (-1, 1, 0, 0)^\mathrm{T},\ \boldsymbol{\eta}_2 = (-1, 0, 1, 1)^\mathrm{T}$

通解：$\boldsymbol{x} = k_1\boldsymbol{\eta}_1 + k_2\boldsymbol{\eta}_2$，$k_1, k_2 \in \mathbb{R}$

**性质：**
- 基础解系不唯一，但所含向量个数 $n - r$ 唯一
- 解空间中任意 $n - r$ 个线性无关的解向量均可构成基础解系
- 通解为 $\boldsymbol{x} = \sum_{i=1}^{n-r} k_i \boldsymbol{\eta}_i$

### 线性方程组的结构

#### 齐次方程组 $\boldsymbol{Ax} = \boldsymbol{0}$ 的解结构

齐次方程组的解集构成一个**向量空间**（解空间/零空间），记为 $N(\boldsymbol{A})$。

$$
N(\boldsymbol{A}) = \{\boldsymbol{x} \mid \boldsymbol{Ax} = \boldsymbol{0}\}
$$

- $\dim N(\boldsymbol{A}) = n - r(\boldsymbol{A})$
- 基础解系 $\{\boldsymbol{\eta}_1, \boldsymbol{\eta}_2, \dots, \boldsymbol{\eta}_{n-r}\}$ 是 $N(\boldsymbol{A})$ 的一组基
- 通解：$\boldsymbol{x} = k_1\boldsymbol{\eta}_1 + k_2\boldsymbol{\eta}_2 + \cdots + k_{n-r}\boldsymbol{\eta}_{n-r}$

#### 非齐次方程组 $\boldsymbol{Ax} = \boldsymbol{b}$ 的解结构

非齐次方程组的解集是一个**仿射空间**（线性流形），即齐次解空间的平移。

$$
S = \{\boldsymbol{x} \mid \boldsymbol{Ax} = \boldsymbol{b}\} = \boldsymbol{x}^* + N(\boldsymbol{A})
$$

其中 $\boldsymbol{x}^*$ 为任一特解。

- 通解 = **特解 + 齐次通解**
- 解集不构成子空间（不含零向量）
- 解集中任意两个解向量的差属于 $N(\boldsymbol{A})$

#### 结构总结

| 类型 | 解集 | 结构 | 维数 |
|------|------|------|------|
| 齐次 $\boldsymbol{Ax} = \boldsymbol{0}$ | 向量空间 $N(\boldsymbol{A})$ | $\displaystyle\sum_{i=1}^{n-r} k_i \boldsymbol{\eta}_i$ | $n - r$ |
| 非齐次 $\boldsymbol{Ax} = \boldsymbol{b}$ | 仿射空间 $\boldsymbol{x}^* + N(\boldsymbol{A})$ | $\boldsymbol{x}^* + \displaystyle\sum_{i=1}^{n-r} k_i \boldsymbol{\eta}_i$ | $n - r$ |

$$
\boxed{\text{非齐次通解} = \text{齐次通解} + \text{非齐次特解}}
$$

#### 几何解释

以 $\mathbb{R}^3$ 为例（$n = 3$）：

| $r$ | 齐次解空间 $N(\boldsymbol{A})$ | 非齐次解集 |
|-----|-------------------------------|-----------|
| 3   | 原点 $\{\boldsymbol{0}\}$ | 一个点（唯一解） |
| 2   | 过原点的直线（维数 1） | 一条直线（不过原点） |
| 1   | 过原点的平面（维数 2） | 一个平面（不过原点） |
| 0   | 整个 $\mathbb{R}^3$ | 整个 $\mathbb{R}^3$（$\boldsymbol{b} = \boldsymbol{0}$ 时）或空集 |

非齐次解集是齐次解空间平移 $\boldsymbol{x}^*$ 得到的**仿射子空间**。

## 线性方程组的求解

### 高斯消元法

求解线性方程组的基本方法，通过初等行变换将增广矩阵化为行阶梯形，再回代求解。

**步骤：**

1. 写出增广矩阵 $\overline{\boldsymbol{A}} = (\boldsymbol{A} \mid \boldsymbol{b})$
2. 通过初等行变换化为**行阶梯形** → 判断解的情况
3. 继续化为**行最简形** → 直接写出解
4. 若有自由变量，写出通解的参数形式

### 求解齐次方程组 $\boldsymbol{Ax} = \boldsymbol{0}$

**步骤：**

1. 对系数矩阵 $\boldsymbol{A}$ 行变换化为行最简形
2. 确定主变量和自由变量
3. 自由变量依次取标准基，回代得到基础解系
4. 通解为基础解系的线性组合

**例：** 求解

$$
\begin{cases}
x_1 + 2x_2 - x_3 = 0 \\
2x_1 + 4x_2 - x_3 = 0 \\
-x_1 - 2x_2 + 2x_3 = 0
\end{cases}
$$

解：

$$
\boldsymbol{A} = \begin{pmatrix}
1 & 2 & -1 \\
2 & 4 & -1 \\
-1 & -2 & 2
\end{pmatrix}
\longrightarrow
\begin{pmatrix}
1 & 2 & 0 \\
0 & 0 & 1 \\
0 & 0 & 0
\end{pmatrix}
$$

$r = 2$，主变量 $x_1, x_3$，自由变量 $x_2$

取 $x_2 = 1$，得 $\boldsymbol{\eta} = (-2, 1, 0)^\mathrm{T}$

通解：$\boldsymbol{x} = k(-2, 1, 0)^\mathrm{T},\ k \in \mathbb{R}$

### 求解非齐次方程组 $\boldsymbol{Ax} = \boldsymbol{b}$

**步骤：**

1. 写出增广矩阵并化为行最简形
2. 判断 $r(\boldsymbol{A})$ 与 $r(\overline{\boldsymbol{A}})$
   - 不等 → 无解，停止
   - 相等 → 继续
3. 令所有自由变量为 0，解得一个**特解** $\boldsymbol{x}^*$
4. 导出组的基础解系（方法同齐次组）
5. 通解 = $\boldsymbol{x}^* + \sum k_i \boldsymbol{\eta}_i$

**例：** 求解

$$
\begin{cases}
x_1 + x_2 - x_3 = 1 \\
2x_1 + 2x_2 - x_3 = 3 \\
-x_1 - x_2 + 2x_3 = -2
\end{cases}
$$

解：

$$
\overline{\boldsymbol{A}} = \begin{pmatrix}
1 & 1 & -1 & \mid & 1 \\
2 & 2 & -1 & \mid & 3 \\
-1 & -1 & 2 & \mid & -2
\end{pmatrix}
\longrightarrow
\begin{pmatrix}
1 & 1 & 0 & \mid & 2 \\
0 & 0 & 1 & \mid & 1 \\
0 & 0 & 0 & \mid & 0
\end{pmatrix}
$$

$r = \bar{r} = 2 < 3$，无穷多解。

- 特解（令自由变量 $x_2 = 0$）：$\boldsymbol{x}^* = (2, 0, 1)^\mathrm{T}$
- 导出组基础解系：$\boldsymbol{\eta} = (-1, 1, 0)^\mathrm{T}$
- 通解：$\boldsymbol{x} = (2, 0, 1)^\mathrm{T} + k(-1, 1, 0)^\mathrm{T},\ k \in \mathbb{R}$

### Cramer 法则

适用于系数矩阵为**方阵且可逆**（$|\boldsymbol{A}| \neq 0$）的情形。

$$
x_j = \frac{|\boldsymbol{A}_j|}{|\boldsymbol{A}|},\quad j = 1, 2, \dots, n
$$

其中 $\boldsymbol{A}_j$ 是将 $\boldsymbol{A}$ 的第 $j$ 列替换为 $\boldsymbol{b}$ 得到的矩阵。

> 理论意义大于实际计算意义。$n \geq 4$ 时计算量巨大，实际求解多用高斯消元法。

