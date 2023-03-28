format long
A=[10 7 8 7;7 5 6 5;8 6 10 9;7 5 9 10]; % coefficient matrix
[n,m]=size(A);
b=[32;23;33;31]; % column matrix b
U=zeros(n); % initialize U
L=eye( n); % initialize L
Y=zeros(n,1); % initialize Y
X=zeros(n,1); % initialize X
% Computation of L and U from A=LU
for i=1:n
  U(i,i)=A(i,i)-L(i,1:i-1)*U(1:i-1,i);
    for j=i+1:n
      U(i,j)=(A(i,j)-L(i,1:i-1)*U(1:i-1,j));
      L(j,i)=A(j,i)-L(j,1:i-1)*U(1:i-1,i)/U(i,i);
end
end
% Computation of Y from LY=b
for i=1:n
    Y(i)=(b(i)-L(i,1:i-1)*Y(1:i-1));
end
% Computation of X from UX=Y
for i=n:-1:1
    X(i)=Y(i)-U(i,i+1:n)*X(i+1:n)/U(i,i);
end
L
U
Y
X
## 1.2253e+02
##  -1.6300e+03
##   1.1036e+04
##  -1.1112e+04
