# 焚决
## 积分表
### 普通?函数积分

$$
\int x^n\,dx = \frac{x^{n+1}}{n+1}+c
\\
\int a^x\,dx = \frac{a^x}{\ln a}+c
\\
\int \frac{1}{x}\,dx = \ln\left|x\right|+c
\\
\int\frac{1}{a^2+x^2}\,dx = \frac{1}{a}\arctan\frac{x}{a}+c \qquad \int \frac{1}{\sqrt{a^2+x^2}}\,dx = \ln\left(x+\sqrt{x^2+a^2}\right)+c
\\
\int\frac{1}{a^2-x^2}\,dx =\frac{1}{2a}\ln\left|\frac{a+x}{a-x}\right|+C \qquad \int\frac{1}{\sqrt{x^2-a^2}}\,dx = \ln\left|x+\sqrt{x^2-a^2}\right|+c
$$

### 三角函数积分

$$
\int \tan x\,dx = -\ln\left|\cos x\right|+c \qquad \int \cot x\,dx = \ln\left|\sin x\right|+c\qquad\int \sec x\,dx = \ln \left|\sec x+\tan x\right| +c \qquad\int\csc x\,dx = \ln \left|\csc x-\cot x\right|+c
\\
\int \sec^2x\,dx = \tan x+c  \qquad \int\csc^2x\,dx = -\cot x+c 
\\
\int \sec x\cdot\tan x \,dx = \sec x+c \qquad \int \csc x\cdot\cot x\,dx = -\csc x+c
\\
$$

## 三角恒等式
### 半角公式
$$
\sin 2x = 2\sin x\cos x 
\\
\cos 2x = \cos^2x-\sin^2x = 2\cos^2x-1 = 1-2\sin^2x 
\\
\tan 2x = \frac{2\tan x}{1-\tan^2x}
$$
### 倍角公式
$$
\sin^2x = \frac{1-\cos 2x}{2} \qquad \cos^2x = \frac{1+\cos 2x}{2}
\\
\sin\frac{x}{2} = \sqrt{\frac{1-\cos x}{2}} \qquad \cos\frac{x}{2} = \sqrt{\frac{1+\cos x}{2}}
\\
\tan\frac{x}{2} = \frac{1-\cos x}{\sin x} = \frac{\sin x}{1+\cos x}
$$
### 积化和差
$$
\sin x\cos y = \frac{1}{2}[\sin(x+y)+\sin(x-y)] \qquad \cos x\cos y = \frac{1}{2}[\cos(x+y)+\cos(x-y)]
\\
\sin x\sin y = \frac{1}{2}[\cos(x-y)-\cos(x+y)] \qquad \cos x\sin y = \frac{1}{2}[\sin(x+y)-\sin(x-y)]
$$
### 和差化积
$$
\sin x+\sin y = 2\sin\frac{x+y}{2}\cos\frac{x-y}{2} \qquad \sin x-\sin y = 2\cos\frac{x+y}{2}\sin\frac{x-y}{2}
\\
\cos x+\cos y = 2\cos\frac{x+y}{2}\cos\frac{x-y}{2} \qquad \cos x-\cos y = -2\sin\frac{x+y}{2}\sin\frac{x-y}{2}
$$
## 导数
### 反三角函数求导
$$
(\arcsin x)' = \frac{1}{\sqrt{1-x^2}}
\\
(\arccos x)' =  -\frac{1}{\sqrt{1-x^2}}
\\
(\arctan x)' = \frac{1}{1+x^2}
\\
(\operatorname{arccot}x)'= -\frac{1}{1+x^2}
$$
### 参数方程求导
$$
\frac{dy}{dx} = \frac{dy/dt}{dx/dt}\qquad(y对x求一阶导)
\\
\frac{d^2y}{dx^2} = \frac{d\left(\frac{dy}{dx}\right)/dt}{dx/dt}\qquad(y对x求二阶导)
$$
### 高阶导数
$$
\sin x^{(n)} = \sin\left (x+n\cdot\frac{\pi}{2}\right)
\\
\cos x^{(n)} = \cos\left (x+n\cdot\frac{\pi}{2}\right)
\\
\ln(1+x)^{(n)} = (-1)^{n-1}\cdot\frac{(n-1)!}{(x+1)^n}
\\
(f(x)\cdot g(x))^{(n)} = C_n^0f(x)^{(n)}g(x)^{(0)}+C_n^1f(x)^{(n-1)}g(x)^{(1)}+\dotsb+C_n^nf(x)^{(0)}g(x)^{(n)}
$$
# 极限
## 极限运算法则
+ $\infty + \infty \rightarrow 无结果$
+ $\infty - \infty \rightarrow 无结果$
+ $\frac{\infty}{\infty} \rightarrow 无结果$
+ $\infty \cdot \infty \rightarrow 无结果$
+ 有限个无穷小量和为无穷小
+ 有限个无穷小量相乘为无穷小,无限个相乘不确定
### 第一重要极限
$$\lim\limits_{x\rightarrow 0} \frac{\sin x}{x} = 1$$
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
\sqrt[n]{1+x}-1 = \frac{1}{n}\cdot x
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
  例:$f(x) = \tan x$

<iframe src="https://www.desmos.com/calculator/fjqe8htsgo?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>

### 震荡间断点
例:$f(x) = \sin\frac{1}{x}$
<iframe src="https://www.desmos.com/calculator/upumtg93gg?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>

### 可去间断点
+ $\lim\limits_{x\rightarrow x_0^-}f(x) = \lim\limits_{x\rightarrow x_0^+}f(x)$
+ $f(x_0)不存在$

例:$f(x) = \frac{x^2-1}{x-1}$
<iframe src="https://www.desmos.com/calculator/j6gvdv7iws?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>

### 跳跃间断点
$f(x) =\begin{cases}
    x-1(x<0)\\
    0(x=0)\\
    x+1(x>0)
\end{cases} $
![alt text](../img/jump.jpg)

  **间断点**
  + 第一类间断点:左右极限均存在
  + 第二类间断点:左右极限至少有一个不存在

## 微分
$dy = f(x)'\cdot dx$
### 微分近似计算
$f(x+\Delta x) = f(x)+f(x)'\cdot\Delta x$
### 泰勒公式
$$ e^x = 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + \cdots + \frac{x^n}{n!} + o(x^n) $$
$$ \sin x = x - \frac{x^3}{3!} + \frac{x^5}{5!} - \cdots + (-1)^n \frac{x^{2n+1}}{(2n+1)!} + o(x^{2n+2}) $$
$$ \cos x = 1 - \frac{x^2}{2!} + \frac{x^4}{4!} - \cdots + (-1)^n \frac{x^{2n}}{(2n)!} + o(x^{2n+1}) $$
$$ \ln(1+x) = x - \frac{x^2}{2} + \frac{x^3}{3} - \cdots + (-1)^{n-1} \frac{x^n}{n} + o(x^n) $$
$$ (1+x)^\alpha = 1 + \alpha x + \frac{\alpha(\alpha-1)}{2!}x^2 + \cdots + \frac{\alpha(\alpha-1)\cdots(\alpha-n+1)}{n!}x^n + o(x^n) $$

### 微分中值定理

#### 罗尔定理：
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
$ f'(\xi) = \frac{f(b) - f(a)}{b - a} $
或等价地
$ f(b) - f(a) = f'(\xi)(b - a) $

#### 柯西中值定理
设函数 $f(x)$ 和 $g(x)$ 满足：
+ 在闭区间 $[a,b]$ 上连续；
+ 在开区间 $(a,b)$ 内可导；
+ $g'(x) \neq 0$（或至少 $g'(x)$ 与 $f'(x)$ 不同时为零）。

则至少存在一点 $\xi \in (a,b)$，使得
$ \frac{f(b) - f(a)}{g(b) - g(a)} = \frac{f'(\xi)}{g'(\xi)} $

# 定积分
## 积分法
### 第一换元积分法
$\int u\cdot v'\,dx = \int u\,dv$
人话:将$\int$内的函数往$d$里面拿,求其原函数作为新的被积变量 
### 第二换元积分法
$\int u\,dv = \int u \cdot v'\,dx$
人话:将$d$内的函数拿进$\int$里,求其导函数作为新的积分变量
### 分部积分法
$\int u\,dv = u\cdot v - \int v\,du$
积分函数交换优先级:$e^x>\sin x,\cos x>x>x^2>x^3$