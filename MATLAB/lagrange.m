
clear
clc
format long
%x = [0; 0.1; 0.3; 0.6; 1; 1.1]
%y=[-6; - 5.89483; - 5.65014; - 5.17788; - 4.28172; - 3.99583]
x=[1.0;1.3;1.6;1.9;2.2]
y=[0.7651977;0.6200860;0.4554022;0.2818186;0.1103623;]
n=length(x)
X=0.5
sum=0

L=zeros(n,1)
for i=1:n
  L(i)=1;
  for j=1:n
    if j~=i
      L(i)=L(i)*((X-x(j))/(x(i)-x(j)));
    endif
  endfor
  sum=sum+L(i)*y(i);
end
sum
