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