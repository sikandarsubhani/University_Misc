clc
clear
format long

x = [1; 1.3; 1.6; 1.9; 2.2]

y=[0.7651977;0.620086;0.4554022;0.2818186;0.1103623];

n=length(x);
F=zeros (n);

for i=1:n
  F(i, 1) = y(i) ;
end
m=zeros (n, 1);
h = x(2) - x(1) ; %difference
m(1)=1;
X = 1.1 ;
S = F(1, 1) ;
p = (X - x(1)) / h ;

for i = 2 : n
  for j = 2 : i
    F(i,j) =F(i,j-1)-F (i-1,j-1); %forward differnce matrix F
  endfor
% forward difference interpolation formula
m(i) = m(i - 1)*(p - 1 + 2)/(i - 1);
S=S+F(i,i)* m(i);
end
S
F
