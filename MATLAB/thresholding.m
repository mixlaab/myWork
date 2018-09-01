r = 0:0.001:1;
E = 20;
s = 1./(1+(0.5./(r+eps)).^E);
plot(r,s)

origRGB = imread('poorcontrast.jpg');
origGris = rgb2gray(origRGB);
origMat = mat2gray(origGris);

thrMat = 1./(1+(0.5./(origMat+eps)).^E);
thrGris = im2uint8(thrMat);
figure
subplot(1,2,1)
imshow(origGris)
subplot(1,2,2)
imshow(thrGris)