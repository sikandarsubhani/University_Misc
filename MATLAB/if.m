n=input('enter size')
for i = 1:n
    if mod(i,3)==0 && mod(i,5)
        fprintf('FizzBuzz\n');
    elseif mod(i,3)==0
        fprintf('Fizz\n');
    elseif mod(i,5)==0
        fprintf('Buzz\n');
     else
        fprintf('%d\n',i)
    end
end
