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

## 拉普拉斯定理 (Laplace Expansion Theorem)

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

### 逆矩阵

对于 $n$ 阶方阵 $A$，若存在 $n$ 阶方阵 $B$ 使得 $AB = BA = E$，则称 $A$ 为 **可逆矩阵**，$B$ 为 $A$ 的 **逆矩阵**，记作 $A^{-1}$。

#### 可逆的充要条件

$A$ 可逆 $\iff$ $|A| \neq 0$（$A$ 为非奇异矩阵）

#### 逆矩阵公式

$$
A^{-1} = \frac{1}{|A|} A^*
$$

其中 $A^*$ 为 $A$ 的 **伴随矩阵**（由所有代数余子式 $A_{ij}$ 转置构成）。

#### 性质

1. $(A^{-1})^{-1} = A$
2. $(AB)^{-1} = B^{-1} A^{-1}$
3. $(kA)^{-1} = \frac{1}{k} A^{-1}$（$k \neq 0$）
4. $(A^T)^{-1} = (A^{-1})^T$
5. $|A^{-1}| = \frac{1}{|A|}$

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

**重要性质：**
$$
A A^* = A^* A = |A| E
$$

$$
|A^*| = |A|^{n-1}
$$

$$
(A^T)^* = (A^*)^T
$$

$$
(kA)^* = k^{n-1}A^*
$$

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

### 矩阵的秩

矩阵 $A$ 中最高阶非零子式的阶数称为 $A$ 的 **秩**，记作 $r(A)$ 或 $\operatorname{rank}(A)$。

**等价定义：** 矩阵 $A$ 的行向量组（或列向量组）的极大无关组所含向量的个数。

**性质：**
1. $0 \le r(A_{m \times n}) \le \min(m, n)$
2. $r(A) = r(A^T)$
3. $r(AB) \le \min(r(A), r(B))$
4. $r(kA) = r(A)$（$k \neq 0$）
5. 初等变换不改变矩阵的秩

**示例：**
$$
A = \begin{pmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 9
\end{pmatrix}
$$
$|A| = 0$，但存在 2 阶子式 $\begin{vmatrix} 1 & 2 \\ 4 & 5 \end{vmatrix} = -3 \neq 0$，故 $r(A) = 2$。

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

