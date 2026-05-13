# 焚决

## 积分表

### 普通?函数积分

$$
\int x^n\, dx = \frac{x^{n+1}}{n+1}+c
$$

$$
\int a^x\, dx = \frac{a^x}{\ln a}+c
$$

$$
\int \frac{1}{x}\, dx = \ln\left|x\right|+c
$$

$$
\int\frac{1}{a^2+x^2}\, dx = \frac{1}{a}\arctan\frac{x}{a}+c \qquad \int \frac{1}{\sqrt{a^2+x^2}}\, dx = \ln\left(x+\sqrt{x^2+a^2}\right)+c
$$

$$
\int\frac{1}{a^2-x^2}\, dx =\frac{1}{2a}\ln\left|\frac{a+x}{a-x}\right|+C \qquad \int\frac{1}{\sqrt{x^2-a^2}}\, dx = \ln\left|x+\sqrt{x^2-a^2}\right|+c
$$

### 三角函数积分

$$
\int \tan x\, dx = -\ln\left|\cos x\right|+c \qquad \int \cot x\, dx = \ln\left|\sin x\right|+c\qquad\int \sec x\, dx = \ln \left|\sec x+\tan x\right| +c \qquad\int\csc x\, dx = \ln \left|\csc x-\cot x\right|+c
$$

$$
\int \sec^2x\, dx = \tan x+c  \qquad \int\csc^2x\, dx = -\cot x+c
$$

$$
\int \sec x\cdot\tan x \, dx = \sec x+c \qquad \int \csc x\cdot\cot x\, dx = -\csc x+c
$$

## 三角恒等式

### 半角公式

$$
\sin 2x = 2\sin x\cos x
$$

$$
\cos 2x = \cos^2x-\sin^2x = 2\cos^2x-1 = 1-2\sin^2x
$$

$$
\tan 2x = \frac{2\tan x}{1-\tan^2x}
$$

### 倍角公式

$$
\sin^2x = \frac{1-\cos 2x}{2} \qquad \cos^2x = \frac{1+\cos 2x}{2}
$$

$$
\sin\frac{x}{2} = \sqrt{\frac{1-\cos x}{2}} \qquad \cos\frac{x}{2} = \sqrt{\frac{1+\cos x}{2}}
$$

$$
\tan\frac{x}{2} = \frac{1-\cos x}{\sin x} = \frac{\sin x}{1+\cos x}
$$

### 积化和差

$$
\sin x\cos y = \frac{1}{2}[\sin(x+y)+\sin(x-y)] \qquad \cos x\cos y = \frac{1}{2}[\cos(x+y)+\cos(x-y)]
$$

$$
\sin x\sin y = \frac{1}{2}[\cos(x-y)-\cos(x+y)] \qquad \cos x\sin y = \frac{1}{2}[\sin(x+y)-\sin(x-y)]
$$

### 和差化积

$$
\sin x+\sin y = 2\sin\frac{x+y}{2}\cos\frac{x-y}{2} \qquad \sin x-\sin y = 2\cos\frac{x+y}{2}\sin\frac{x-y}{2}
$$

$$
\cos x+\cos y = 2\cos\frac{x+y}{2}\cos\frac{x-y}{2} \qquad \cos x-\cos y = -2\sin\frac{x+y}{2}\sin\frac{x-y}{2}
$$

## 导数

### 反三角函数求导

$$
(\arcsin x)' = \frac{1}{\sqrt{1-x^2}}
$$

$$
(\arccos x)' =  -\frac{1}{\sqrt{1-x^2}}
$$

$$
(\arctan x)' = \frac{1}{1+x^2}
$$

$$
(\operatorname{arccot}x)'= -\frac{1}{1+x^2}
$$

### 参数方程求导

$$
\frac{dy}{dx} = \frac{dy/dt}{dx/dt}\qquad(y 对 x 求一阶导)
$$

$$
\frac{d^2y}{dx^2} = \frac{d\left(\frac{dy}{dx}\right)/dt}{dx/dt}\qquad(y 对 x 求二阶导)
$$

### 高阶导数

$$
\sin x^{(n)} = \sin\left (x+n\cdot\frac{\pi}{2}\right)
$$

$$
\cos x^{(n)} = \cos\left (x+n\cdot\frac{\pi}{2}\right)
$$

$$
\ln(1+x)^{(n)} = (-1)^{n-1}\cdot\frac{(n-1)!}{(x+1)^n}
$$

$$
(f(x)\cdot g(x))^{(n)} = C_n^0f(x)^{(n)}g(x)^{(0)}+C_n^1f(x)^{(n-1)}g(x)^{(1)}+\dotsb+C_n^nf(x)^{(0)}g(x)^{(n)}
$$

# 极限

## 极限运算法则

+ $\infty + \infty \rightarrow 无结果$
+ $\infty - \infty \rightarrow 无结果$
+ $\frac{\infty}{\infty} \rightarrow 无结果$
+ $\infty \cdot \infty \rightarrow 无结果$
+ 有限个无穷小量和为无穷小
+ 有限个无穷小量相乘为无穷小, 无限个相乘不确定

### 第一重要极限

$\lim\limits_{x\rightarrow 0} \frac{\sin x}{x} = 1$

### 第二重要极限

指数与底数的后半互为倒数

$$
\lim\limits_ {n\rightarrow\infty}\left(1+\frac{1}{n}\right)^n = e
\\
\lim\limits_{n\rightarrow 0}\left(1+n\right)^\frac{1}{n} = e
$$

## 等价无穷小

$$
\lim\limits_{x\rightarrow 0}
\begin{cases}
\sqrt [n]{1+x}-1 = \frac{1}{n}\cdot x
\\
\sin x = x
\\
\tan x = x
\\
\arcsin x = x
\\
\arctan x = x
\end{cases}
$$

## 函数连续

+ $f(x)在x_{0}点连续 : \lim\limits_{x\rightarrow x_0}f(x) = f(x_0)$
  + 左连续: $\lim\limits_{x\rightarrow x_0^-}f(x) = f(x_0)$
  + 右连续: $\lim\limits_{x\rightarrow x_0^+}f(x) = f(x_0)$
+ $f(x)在\left[a,b\right]上连续$
  + $f(x)在\left(a,b\right)上连续$
  + $f(x)在a处右连续,在b处左连续$

## 间断点

### 无穷间断点

+ $\lim\limits_{x\rightarrow x_0^-}f(x)和\lim\limits_{x\rightarrow x_0^+}f(x)均不存在$
  例: $f(x) = \tan x$

<iframe src="https://www.desmos.com/calculator/fjqe8htsgo?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0> </iframe>

### 震荡间断点

例: $f(x) = \sin\frac{1}{x}$
<iframe src="https://www.desmos.com/calculator/upumtg93gg?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0> </iframe>

### 可去间断点

+ $\lim\limits_{x\rightarrow x_0^-}f(x) = \lim\limits_{x\rightarrow x_0^+}f(x)$
+ $f(x_0)不存在$

例: $f(x) = \frac{x^2-1}{x-1}$
<iframe src="https://www.desmos.com/calculator/j6gvdv7iws?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0> </iframe>

### 跳跃间断点

$$
f(x) =\begin{cases}
    x-1(x < 0)\\
    0(x = 0)\\
    x+1(x > 0)
\end{cases}
$$
![alt text](../img/jump.jpg)

  **间断点**

+ 第一类间断点: 左右极限均存在
+ 第二类间断点: 左右极限至少有一个不存在

## 微分

$dy = f(x)'\cdot dx$

### 微分近似计算

$f(x+\Delta x) = f(x)+f(x)'\cdot\Delta x$

### 泰勒公式

$e^x = 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + \cdots + \frac{x^n}{n!} + o(x^n)$
$\sin x = x - \frac{x^3}{3!} + \frac{x^5}{5!} - \cdots + (-1)^n \frac{x^{2n+1}}{(2n+1)!} + o(x^{2n+2})$
$\cos x = 1 - \frac{x^2}{2!} + \frac{x^4}{4!} - \cdots + (-1)^n \frac{x^{2n}}{(2n)!} + o(x^{2n+1})$
$\ln(1+x) = x - \frac{x^2}{2} + \frac{x^3}{3} - \cdots + (-1)^{n-1} \frac{x^n}{n} + o(x^n)$
$(1+x)^\alpha = 1 + \alpha x + \frac{\alpha(\alpha-1)}{2!}x^2 + \cdots + \frac{\alpha(\alpha-1)\cdots(\alpha-n+1)}{n!}x^n + o(x^n)$

### 微分中值定理

#### 罗尔定理

设函数 $f(x)$ 满足：

+ 在闭区间 $[a,b]$ 上连续；
+ 在开区间 $(a,b)$ 内可导；
+ $f(a) = f(b)$。

则至少存在一点 $\xi \in (a,b)$，使得 $f'(\xi) = 0$

#### 拉格朗日中值定理

设函数 $f(x)$ 满足：

+ 在闭区间 $[a,b]$ 上连续；
+ 在开区间 $(a,b)$ 内可导。

则至少存在一点 $\xi \in (a,b)$，使得
$f'(\xi) = \frac{f(b) - f(a)}{b - a}$
或等价地
$f(b) - f(a) = f'(\xi)(b - a)$

#### 柯西中值定理

设函数 $f(x)$ 和 $g(x)$ 满足：

+ 在闭区间 $[a,b]$ 上连续；
+ 在开区间 $(a,b)$ 内可导；
+ $g'(x) \neq 0$（或至少 $g'(x)$ 与 $f'(x)$ 不同时为零）。

则至少存在一点 $\xi \in (a,b)$，使得
$\frac{f(b) - f(a)}{g(b) - g(a)} = \frac{f'(\xi)}{g'(\xi)}$

# 不定定积分

## 积分法

### 第一换元积分法

$\int u\cdot v'\,dx = \int u\,dv$
人话: 将 $\int$ 内的函数往 $d$ 里面拿, 求其原函数作为新的被积变量

### 第二换元积分法

$\int u\,dv = \int u \cdot v'\,dx$
人话: 将 $d$ 内的函数拿进 $\int$ 里, 求其导函数作为新的积分变量

### 分部积分法

$\int u\,dv = u\cdot v - \int v\,du$
积分函数交换优先级: $e^x>\sin x,\cos x>x>x^2>x^3$

# 定积分

## 定积分的性质

+ $\int_a^af(x)\,dx = 0$
+ $\int_a^bf(x)\,dx = -\int_b^af(x)\,dx$
+ $\int_a^b \left(\alpha f(x)+\beta g(x)\right)\,dx = \alpha\int_a^bf(x)\,dx + \beta\int_a^bg(x)\,dx\qquad(\alpha 和\beta 均为常数)$
+ $\int_a^bf(x)\,dx = \int_a^cf(x)\,dx + \int_c^bf(x)\,dx$
+ $\left|\int_a^bf(x)\,dx\right|\leqslant \int_a^b\left|f(x)\right|\,dx$
+ $若f(x)在[a,b]上连续,则至少 \exist  \xi \in[a,b] 使\int_a^b f(x)\,dx = f(\xi)\cdot(b-a)$
+ $\int_0^\pi x\cdot f(\sin x)\,dx = \frac{\pi}{2}\int_0^\pi f(\sin x)\,dx$

## 微积分基本公式

### 积分求导

$\left(\int_a^{\varphi(x)}f(t)\,dt\right)' = f\left(\varphi(x)\right)\cdot\varphi'(x)$
$\left( \int_{g(x)}^{h(x)} f(t) \, dt \right)' = f(h(x)) \cdot h'(x) - f(g(x)) \cdot g'(x)$
其实这两个公式一样

### 牛顿莱布尼茨公式

$若函数f(x)在区间[a, b]上连续,且F(x)是 f(x)的一个原函数,则$

$\int_a^b f(x) \, dx = F(x)|_a^b = F(b) - F(a)$

## 反常积分

### 无穷限的反常积分

若 $f(x)在[a,+\infty)上连续$
$\int_a^{+\infty}f(x)\,dx = \lim\limits_{b\rightarrow+\infty}\int_a^bf(x)\,dx$
如果极限存在, 则 $\int_a^{+\infty}f(x)\,dx收敛$
如果极限不存在, 则 $\int_a^{+\infty}f(x)\,dx发散$

### 无界函数的反常积分

设函数 \(f(x)\) 在 \((a, b]\) 上有定义，且当 \(x \to a^+\) 时 \(f(x)\) 无界（\(a\) 为瑕点），则定义

$\int_a^b f(x) \, dx = \lim_{\varepsilon \to 0^+} \int_{a+\varepsilon}^b f(x) \, dx,$

若极限存在且有限，则称反常积分 **收敛**，否则 **发散**。

若瑕点 \(c \in (a, b)\)，需拆分：

$\int_a^b f(x) \, dx = \int_a^c f(x) \, dx + \int_c^b f(x) \, dx,$

两个极限分别独立存在时原积分收敛。

## 定积分的应用

### 求面积

#### 直角坐标

**X 型(y 关于 x 的方程 $y = f(x)$)**
![alt text](../img/PixPin_2026-05-10_14-18-44.png)
$S_{阴影} =\int_a^b\left(f(x)-g(x)\right)\,dx$
**y 型(x 关于 y 的方程 $x=g(y)$)**
![alt text](../img/PixPin_2026-05-10_14-58-02.png)
$S_{阴影} = \int_c^d\left(\varphi(y)-g(y)\right)\,dy$

#### 极坐标

$\rho = \rho(\theta)\qquad \theta\in[\alpha,\beta]$
$S = \int_\alpha^\beta\frac{1}{2}\rho^2(\theta)\,d\theta$

### 求旋转体的体积

$y = f(x)\qquad x\in[\alpha,\beta]$
![alt text](../img/PixPin_2026-05-10_15-15-06.png)
$V = \int_\alpha^\beta\pi f^2(x)\,dx$
****
$y_1 = f_1(x) \qquad y_2 = f_2(x)\qquad x\in[\alpha,\beta]$
![alt text](../img/PixPin_2026-05-10_15-19-55.png)
$V =\pi \int_\alpha^\beta \left(f_1^2(x)-f_2^2(x)\right)\,dx$

### 求弧长

#### 参数方程

$$
弧:\begin{cases}
x = \varphi(t)
\\
y = \varphi(t)
\end{cases}
\\
t\in [\alpha ,\beta]
$$

$
弧长 L = \int_\alpha^\beta\sqrt{[\varphi'(t)]^2 + [\mu'(t)]^2}\, dt
$

#### 直角坐标

$$
y  = f(x) , x\in [a.b]
$$
$$
弧长 L =\int_a^b\sqrt{(f'(x))^2+1}
$$

#### 极坐标

$$
弧:\begin{cases}
x = \varphi(\theta) \cdot\cos \theta
\\
y = \mu(\theta)\cdot\sin \theta
\end{cases}
\\
\theta\in [\alpha ,\beta]
$$
$$
弧长 L = \int_\alpha^\beta\sqrt{\varphi^2(\theta) +[\mu'(\theta)]^2}
$$

# 微分方程

**微分方程**: 含函数的导数或微分的方程
**微分方程的阶数**: 未知函数的导数的最高阶数

## 可分离变量的微分方程

+ 将 x 和 y 分别放在等号两边
+ 对两边同时求不定积分

## 齐次方程

$\frac{dy}{dx} = g\left(\frac{y}{x}\right)\Rightarrow\frac{y}{x}整体出现$

+ ① 设 $\frac{y}{x} = u$
+ ② $y = x\cdot u $
+ ③ $\frac{dy}{dx} = u+x\cdot \frac{du}{dx}$
$\frac{dy}{dx} = g\left(\frac{y}{x}\right)\Rightarrow u+x\cdot \frac{du}{dx} = g(u)\Rightarrow 可分离变量的微分方程$

## 一阶线性微分方程

**未知函数满足线性关系即为线性微分方程**
$$
\frac{dy}{dx} + P(x)y = Q(x)
\\
\,\uparrow \qquad\,\,\,\,\,\,\,\,\,\,\uparrow
\\
\, y'\qquad  \,\,\,\,\,\,\,\, y
$$

+ **$Q(x) = 0$**
  一阶齐次线性方程
  + 1: 分离 x 与 y, 写在等号两边
  + 2: 两边求积分
+ **$Q(x)\not = 0$**
   一阶非齐次线性微分方程
  + ① 化成标准形式 $y'+P(x)y = Q(x)0$
  + ② $y=e^{-\int P(x)\,dx}\cdot \left(\int Q(x)\cdot e^{\int P(x)\, dx}\,dx +c\right)$

## 伯努利方程

$y'+P(x)y = Q(x)\cdot y^n$

+ ① 两边除以 $y^n$
  $y^{-n}\cdot y'+P(x)y^{1-n} = Q(x)$
+ ② 转化
    $y^{-n}\cdot \frac{dy}{dx}+P(x)y^{1-n} = Q(x)$
    $\frac{1}{1-n}\cdot\frac{dy^{1-n}}{dx}+P(x)y^{1-n} = Q(x)$
+ ③ 令 $z = y^{1-n}$
  $z'+(1-n)P(x)\cdot z = (1-n)Q(x)$

## 可降阶的高阶微分方程

**(1) $y^{(n)} = f(x)$**
两边求 n 阶导
**(2)$y^{(n)} = f\left(x,y^{(n-1)}\right)$**
① 令 $u = y^{(n-1)} \Rightarrow u' = y^{(n)}$
② 求解微分方程
**(3)$y'' = f(y,y')$**
① 令 $y' = p \Rightarrow y'' = p\cdot \frac{dp}{dy}$
② $p\cdot \frac{dp}{dy} = f(y,y')$
③ 求解

## 二阶常系数线性微分方程

**标准形式: $y''+py'+qy = f(x)$**

### 二阶常系数齐次线性微分方程($f(x) = 0$)

① $y''\rightarrow r^2,y'\rightarrow r,y\rightarrow 1$
$特征方程:r^2+pr+q = 0$
② 求解 $r_1,r_2$

$$
\begin{cases}
  r_1 \not = r_2 \rightarrow \qquad y_1 = e^{r_1x}, y_2 = e^{r_2x}
  \\
  r_1 = r_2 \rightarrow \qquad y_1 = e^{r_1x}, y_2 = xe^{r_1x},
  \\
  两个共轭复根\rightarrow\qquad y_1 = e^{\alpha x}\cos\beta x, y_2 = e^{\alpha x}\sin \beta x \qquad(r = \alpha \pm\beta i)
\end{cases}
\\
y = c_1y_1+c_2y_2
$$

### 二阶常系数齐次线性微分方程($f(x)\not = 0$)

① 设 $\overline{y}$ 为 $y''+py'+qy = 0的通解$
  $y^*$ 为 $y''+py'+qy = f(x)$ 的一个特解
② $y''+py'+qy = f(x)$ 的通解为 $y = \overline{y}+y^*$

# 曲面方程

## 平面点法式

一个平面的法向量为 $\vec{n} = (A,B,C,)$ 平面上有一点为 $P(x_0,y_0,z_0)$
则, 该平面的点法式为 $A(x-x_0)+B(y-y_0)+C(z-z_0) = 0$
****
若某个平面的方程为 $Ax+By+Cz+d = 0 \qquad 则其法向量\vec{n} = (A,B,C)$

# 偏导数

**对 x 的偏导数**

令 $y = y_0 \qquad \lim\limits_{\Delta x \rightarrow 0}\frac{f(x_0+\Delta x,y_0)-f(x_0,y_0)}{\Delta x}存在$
表示: $\left. \frac{\partial f}{\partial x} \right|_{\substack{x=x_0 \\ y=y_0}}或f_x(x_0,y_0)$
**对 x 的偏导数**
令 $x = x_0 \qquad \lim\limits_{\Delta y \rightarrow 0}\frac{f(x_0,y_0+\Delta y)-f(x_0,y_0)}{\Delta y}存在$
表示: $\left. \frac{\partial f}{\partial y} \right|_{\substack{x=x_0 \\ y=y_0}}或f_y(x_0,y_0)$

## 求偏导数法则

**对 x 求偏导**: 将 y 看作常数, 对 x 求导
**对 y 求偏导**: 将 x 看作常数, 对 y 求导

## 高阶偏导数

+ 对 x 的二阶偏导: $f_{xx}(x,y) = \frac{\partial}{\partial x}\left(\frac{\partial f}{\partial x}\right)$
+ 混合偏导: $f_{xy} (x,y) = \frac{\partial}{\partial y}\left(\frac{\partial f}{\partial x}\right)$$
**二阶混合偏导数若连续, 则必相等**

# 全微分

**偏增量**
$f(x+\Delta x,y) - f(x+y) \approx f_x(x,y)\Delta x$
$f(x,y+\Delta y) - f(x+y) \approx f_y(x,y)\Delta y$
其中, 约等号左边为 **偏增量**, 右边为 **偏微分**
**全增量**
$\Delta z  = f(x + \Delta x,y+ \Delta y) -f(x,y)$
$\Delta z =f_x(x,y)\Delta x +f_y(x,y)\Delta y + o(\rho) \qquad 若满足\rho = \sqrt{(\Delta x)^2+(\Delta y)^2}则z = f(x,y)可微分$

其中 **全微分**: $dz = f_x(x,y)\Delta x +f_y(x,y)\Delta y$

+ 若二元函数可偏导, 这个二元函数不一定连续
+ 若二元函数可微分, 这个二元函数连续
+ 若二元函数的偏导存在且连续, 则其可微分
+ 若二元函数可微分, 则其偏导必存在, 且 $d z =f_x(x,y)d x +f_y(x,y)d y $

# 多元函数的求导法则

## 关于单变量

$$
z = f(u, v) \qquad
\begin{cases}
u = \varphi (t)
\\
v = \mu(t)
\end{cases}
$$

$$
\Downarrow
$$

$$
\frac{dz}{dt} = \frac{\partial z}{\partial u}\cdot \frac{du}{dt}+\frac{\partial z}{\partial v}\cdot \frac{dv}{dt}
$$
## 关于多变量
$$
z = f(u, v) \qquad
\begin{cases}
u = \varphi (x, y)
\\
v = \mu(x, y)
\end{cases}
$$

$$
\Downarrow
$$

$$
\begin{cases}
\frac{\partial z}{\partial x} = \frac{\partial z}{\partial u}\cdot \frac{\partial u}{\partial x} + \frac{\partial z}{\partial v}\cdot \frac{\partial v}{\partial x}
\\
\frac{\partial z}{\partial y} = \frac{\partial z}{\partial u}\cdot \frac{\partial u}{\partial y} + \frac{\partial z}{\partial v}\cdot \frac{\partial v}{\partial y}
\end{cases}
$$

## 部分关于多变量
$$
z = f(u, v) \qquad
\begin{cases}
u = \varphi (x, y)
\\
v = \mu(y)
\end{cases}
$$

$$
\Downarrow
$$

$$
\begin{cases}
\frac{\partial z}{\partial x} = \frac{\partial z}{\partial u}\cdot \frac{\partial u}{\partial x}
\\
\frac{\partial z}{\partial y} = \frac{\partial z}{\partial u}\cdot \frac{\partial u}{\partial y} + \frac{\partial z}{\partial v}\cdot \frac{d v}{d y}
\end{cases}
$$

**一元函数: 求导, 多元函数: 求偏导**

# 全微分形式不变性
$$
z = f(u, v) \qquad dz =\frac{\partial z}{\partial u}du+ \frac{\partial z}{\partial v}dv
$$

# 隐函数求导法则

## 一元函数隐函数求导
1: 直接进行隐函数求导即可

2:$若 F(x, y)是关于 x, y 的二元函数 \qquad 且 F(x, y) = 0$

$\frac{dy}{dx} = -\frac{F_x(x,y)}{F_y(x,y)}$
## 多元函数隐函数求导
### 常规多元函数
$F(x,y,z) = 0$
$\frac{\partial z}{\partial x} = \frac{F_x(x,y,z)}{F_z(x,y,z)}$
$\frac{\partial z}{\partial y} = \frac{F_y(x,y,z)}{F_z(x,y,z)}$

### 多元函数方程组
$$
\begin{cases}
  xu-yv = 0
  \\
  yu+xv = 0
\end{cases}
\qquad
\begin{cases}
u = \varphi(x, y) 
\\
v = \mu(x, y)
\end{cases}
$$
两边同时对 x 求偏导
$$
\begin{cases}
u+xu_x-yv_x = 0
\\
yu_x+v+xv_x = 0
\end{cases}
$$
$$
\qquad\Downarrow
$$

$$
\begin{cases}
xu_x-yv_x =-u
\\
yu_x+xv_x = -v
\end{cases}
\Rightarrow
\begin{cases}
u_x = \frac {\left|\begin{array} {c}-u&-y \\ -v&x\end{array}\right|}{\left|\begin{array}{c}x & -y \\ y & x\end{array}\right|}
\\
v_x = \frac {\left|\begin{array} {c}x&-u \\ y&-v\end{array}\right|}{\left|\begin{array}{c}x & -y \\ y & x\end{array}\right|}
\end{cases}
$$

# 一元向量值函数及其导数

## 一元向量值函数
### 由曲线确定的向量
$曲线:\begin{cases}
  x = \varphi (t)
  \\
  y = \mu(t)
  \\
  z = \omega(t)
\end{cases}$
$则向量 :\vec{f(t)} = \left(\varphi(t),\mu(t),\omega(t)\right)$
### 向量极限
$\lim\limits_{t \rightarrow t_0}\vec{f(t)} = \left(\lim\limits_{t \rightarrow t_0}f_1(t),\lim\limits_{t \rightarrow t_0}f_2(t),\lim\limits_{t \rightarrow t_0}f_3(t)\right)$

# 空间曲线的切线与法平面

$设空间曲线:\vec{f(x)} = \left(\varphi (t), \mu (t),\omega(t) \right)$
$切向量 : \vec{T} = \vec{f'(x)} = \left(\varphi' (t), \mu '(t),\omega'(t) \right)$

## 空间曲线的切线
点向式 : $\frac{x-x_0}{\varphi' (t)} = \frac{y-y_0}{\mu '(t)} = \frac{z-z_0}{\omega'(t)}$
## 空间曲线的法平面
点法式: $\varphi' (t)\cdot(x-x_0) + \mu '(t)\cdot(y-y_0)+\omega'(t)\cdot(z-z_0)$
# 空间曲面的切平面与法线
设空间曲面F(x,y,z) = 0
$\vec{n} = \left(F_x(x_0,y_0,z_0),F_y(x_0,y_0,z_0),F_z(x_0,y_0,z_0)\right)$
### 空间曲面的切平面
点法式:$F_x(x_0,y_0,z_0)(x-x_0) + F_y(x_0,y_0,z_0)(y-y_0) + F_z(x_0,y_0,z_0)(z-z_0) = 0$
### 空间曲面的法显
点向式: $\frac{x-x_0}{F_x(x_0,y_0,z_0)} = \frac{y-y_0}{F_y(x_0,y_0,z_0)} = \frac{z-z_0}{F_z(x_0,y_0,z_0)}$