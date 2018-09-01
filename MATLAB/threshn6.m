%% Same image function
x = 0:0.001:1;
y = x;
subplot(2,2,1)
plot(x,y)

%% Lectura de imagen original y conversión a gris
origRGB = imread('poorcontrast.jpg');
%origGris = origRGB;
origGris = rgb2gray(origRGB);
%origMat = origGris/255;
origMat = mat2gray(origGris);
subplot(2,2,2)
imshow(origGris)

%% Contrast stretching transformation function
r = 0:0.001:1;
m = 0.1;
E = 3;
s = 1./ (1 + (m./(r+eps)).^E);
subplot(2,2,3)
plot(r,s)

%% Contrast stretching transformation image
newMat = 1./ (1 + (m./(origMat+eps)).^E);
newGris = im2uint8(newMat);
subplot(2,2,4)
imshow(newGris)

figure
imshow(newGris)

%newGris2 = uint16(newMat*65535);
%imshow(newGris2)


f = imhist(origGris);
pf = f/numel(origGris);
[m, n] = size(origGris);
s = ones(m,n);

for i = 1:m
    for j = 1:n
        s(i,j) = sum(pf(1:origGris(i,j)+1));
    end
end

figure
A = im2uint8(s);
imshow(A)
%imhist(A)
%axis([0 256 0 10000])

figure
histeq(origGris);
%B = histeq(origGris);
%imhist(B)
%axis([0 256 0 10000])

% hx = 1:1:256;
% hy = f(1:1:256);
% 
% bar(hx,hy,0.9)
% axis([70 257 0 25000])
% set(gca, 'xtick', 0:50:255)
% set(gca, 'ytick', 0:5000:25000)
% 
% figure
% plot(hx,hy,'b-')



