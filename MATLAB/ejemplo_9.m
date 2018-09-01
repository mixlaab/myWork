orig_rgb = imread('poorcontrast.jpg');
orig = rgb2gray(orig_rgb);
subplot(1,2,1)
imshow(orig)
subplot(1,2,2)
imhist(orig)
contraste = imadjust(orig, [73/255 93/255], [0 1], 2);
figure
imshow(contraste)
figure
doble = 1+double(orig);
%g = 2.3*log(1+double(orig));
%imshow(uint8(g))