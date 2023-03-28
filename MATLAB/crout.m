format long
A=[10 7 8 7;7 5 6 5;8 6 10 9;7 5 9 10]; % coefficient matrix
[n,m]=size(A);
b=[32;23;33;31]; % column matrix b
U=eye(n); % initialize U
L=zeros( n); % initialize L
Y=zeros(n,1); % initialize Y
X=zeros(n,1); % initialize X
% Computation of L and U from A=LU
for i=1:n
  L(i,i)=A(i,i)-L(i,1:i-1)*U(1:i-1,i);
  for j=i+1:n
    U(i,j)=(A(i,j)-L(i,1:i-1)*U(1:i-1,j))/L(i,i);
    L(j,i)=A(j,i)-L(j,1:i-1)*U(1:i-1,i);
end
end
% Computation of Y from LY=b
for i=1:n
Y(i)=(b(i)-L(i,1:i-1)*Y(1:i-1))/L(i,i);
end
% Computation of X from UX=Y
for i=n:-1:1
X(i)=Y(i)-U(i,i+1:n)*X(i+1:n);
end
L
U
Y
X
