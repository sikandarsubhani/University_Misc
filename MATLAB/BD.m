clc
clear
format long

x = [1; 1.3; 1.6; 1.9; 2.2]

y=[0.7651977;0.620086;0.4554022;0.2818186;0.1103623];

n=length(x);
B=zeros (n);

for j=1:n
  B(j, 1) = y(j) ;
end
m=zeros (n, 1);
h = x(2) - x(1) ; %difference
m(1)=1;
X = 2 ;
S = B(1, 1) ;
p = (X - x(1)) / h ;

for j = 2 : n
  for i = j:n
    B(i,j) =B(i,j-1)-B (i-1,j-1); %forward differnce matrix B
  endfor
% forward difference interpolation formula
m(j) = m(j - 1)*(p - 1 + 2)/(j - 1);
S=S+B(j,j)* m(j);
end
S
B
