%% Orig

r_color = imread('poorcontrast.jpg');
r = rgb2gray(r_color);

h = imhist(r);
p = h/numel(r);

smt1=zeros(256,1);
for i = 1:1:256
    smt1(i) = sum(p(1:i));
end



%% Gaussian distribution
sig = 0.08;
miu = 0.37;
xp = 0:1:255;
x = xp/255;

pot = -((x-miu).^2)/(2*(sig.^2));

fra = 1./(sig*sqrt(2*pi));

y = ((fra*exp(pot)));
y = y/sum(y);

smt2=zeros(256,1);
for i = 1:1:256
    smt2(i) = sum(y(1:i));
end

A = zeros(256,256);

for i = 1:1:256
    for j =1:1:256
        A(j,i) = smt1(i)-smt2(j);
    end
end

[mins, index] = min(abs(A));
[m,n] = size(r);
s = zeros(m,n);
for i = 1:1:m
    for j = 1:1:n
        s(i,j) = index(r(i,j)+1);
    end
end

plot(x,p)
figure
plot(x,y)
figure
%s = histeq(r,y);
s = uint8(s);
imshow(s)
figure
%imhist(s)
t= histeq(r);
imshow(t)
