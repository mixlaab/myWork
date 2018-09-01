imgRGB = imread('poorcontrast.jpg');
imgGris = rgb2gray(imgRGB);
h = imhist(imgGris);
[m,n] = size(imgGris);
p = h/(m*n);

s = zeros(m,n);

for i = 1:1:m
    for j= 1:1:n
        s(i,j) = sum(p(1:imgGris(i,j)));
    end
end

nueva = im2uint8(s);
subplot(3,2,1)
imshow(imgGris)
subplot(3,2,2)
imhist(imgGris)
subplot(3,2,3)
imshow(nueva)
subplot(3,2,4)
imhist(nueva)
ylim('auto')

nueva2 = histeq(imgGris);
subplot(3,2,5)
imshow(nueva2)
subplot(3,2,6)
imhist(nueva2)
ylim('auto')
