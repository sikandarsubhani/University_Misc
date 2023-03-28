clc
clear
format long
x=[0.6;0.7;0.8;1];
y=[-0.17694460;0.01375227;0.22363362;0.65809197];
n=length(x);
Q=zeros(n);
for i=1:n
 Q(i,1)=y(i);
end
X=0.9;
for i=2:n
 for j=2:i
 Q(i,j)=((X-x(i-j+1))*Q(i,j-1)-(X-x(i))*Q(i-1,j-1))/(x(i)-x(i-j+1));
 end
end
Q

