f = 0: 0.001: 1;
c = 2;
g = c*log(1 + f);

plot(f,g)

origRGB = imread('poorcontrast.jpg');
origGris = rgb2gray(origRGB);
%origMat = origGris/255;
origMat = mat2gray(origGris);

newMat = c*log(1 + origMat);
newGris = im2uint8(newMat);
figure
subplot(1,2,1)
imshow(origGris)
subplot(1,2,2)
imshow(newGris)