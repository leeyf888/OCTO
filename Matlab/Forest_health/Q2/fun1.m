function f=fun1(x)
B=[0.9 1.8 2.3 1.2 2.1 2.8];
%目标函数
f=-((x(1)/(16*pi) + x(2)/(16*pi) + x(3)/(16*pi) + x(4)/(16*pi) + x(5)/(16*pi) + x(6)/(16*pi))/(x(1)/(16*B(1)^2*pi) + x(2)/(16*B(2)^2*pi) + x(3)/(16*B(3)^2*pi) + x(4)/(16*B(4)^2*pi) + x(5)/(16*B(5)^2*pi) + x(6)/(16*B(6)^2*pi)))^(1/2);