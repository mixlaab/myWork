x = 0: 0.01: 1;
c = 1.45;
y = c * log(1 + x);
plot(x,y)

origRGB = imread('poorcontrast.jpg');
origGris = rgb2gray(origRGB);
origMat = mat2gray(origGris);

logMat = 1.45*log(1 + origMat);
logGris = im2uint8(logMat);
figure
subplot(1,2,1)
imshow(origGris);
subplot(1,2,2)
imshow(logGris);