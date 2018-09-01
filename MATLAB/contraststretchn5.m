r = 0:0.01:1;
m = 0.1;
E = 3;
s = 1./(1+ (m./(r+eps)).^E);

plot(r,s)

img= imread ('poorcontrast.jpg');
gray= rgb2gray(img);
gray1= mat2gray(gray);
f = 1./(1+ (m./(gray1+eps)).^E);
d=im2uint8(f);
figure
subplot(1,2,1);
imshow(gray);
subplot(1,2,2);
imshow(d);


