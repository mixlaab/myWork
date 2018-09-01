%% Cargar imagen original
%orig = imread('poorcontrast_2.jpg');
%imshow(orig)

%% Convertir a grises
%orig_gris = rgb2gray(orig);
orig_gris = imread('poorcontrast_2.jpg');
[m, n] = size(orig_gris); %Se obtiene número de filas y columnas
%imshow(orig_gris)

l=ones(m,n);
L=uint8(l*255);
v=L-orig_gris;
subplot(1,3,1)
imshow(orig_gris)

subplot(1,3,2)
w = imcomplement(orig_gris);
imshow(w)

%subplot(1,3,3)
%x = imadjust(orig_gris, [0.274 0.3529], [0 1], 1.4);
%x(:,:,1) = imadjust(orig(:,:,1), [0.2 0.3647], [0 1]);
%x(:,:,2) = imadjust(orig(:,:,2), [0.2 0.3529], [0 1]);
%x(:,:,3) = imadjust(orig(:,:,3), [0.2 0.3569], [0 1]);
%imshow(x)

% figure
% subplot(1,3,1)
% imhist(orig(:,:,1))
% subplot(1,3,2)
% imhist(orig(:,:,2))
% subplot(1,3,3)
% imhist(orig(:,:,3))

figure 
imshow(orig_gris)

% figure 
% imshow(x)

%% Logarithmic
g = 2.5*log(1 + mat2gray(double(orig_gris)));
r = im2uint8(g);
imshow(r)
