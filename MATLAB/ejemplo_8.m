%%
orig = imread('poorcontrast.jpg');
orig_gris = rgb2gray(orig);
[m, n] = size(orig_gris);

%%
figure
imshow(orig_gris)

%%
figure
imhist(orig_gris)

%%
figure
contraste = imadjust(orig_gris, [72/255 100/255], [0 1], 1);
imshow(contraste)

g = 2*log(1 + double(orig_gris));
h = im2uint8(g)
imshow(h)
