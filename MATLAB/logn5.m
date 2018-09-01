f = 0: 0.001: 1;
c = 1.4;
g = c*log(1+f);
plot(f,g)

origRGB = imread('poorcontrast.jpg');
origGris = rgb2gray(origRGB);
origMat = mat2gray(origGris);

transMat = c*log(1+origMat);
transGris = im2uint8(transMat);
figure
subplot(1,2,1)
imshow(origGris)
subplot(1,2,2)
imshow(transGris)