orig = imread('poorcontrast.jpg');
gris = rgb2gray(orig);
h = imhist(gris);
imhist(gris)
[f,c] = size(gris);
n = f*c; %cantidad de pixeles
p = h/n;

smt = zeros(256,1);

for i = 1:1:256
    smt(i) = sum(p(1:i));
end

s = zeros(f,c);

for i = 1:1:f
    for j=1:1:c
        s(i,j)=smt(gris(i,j));
    end
end

nueva = im2uint8(s);
subplot(3,2,1)
imshow(gris)
subplot(3,2,2)
imhist(gris)
subplot(3,2,3)
imshow(nueva)
subplot(3,2,4)
imhist(nueva)
ylim('auto')
nueva2 = histeq(gris);
subplot(3,2,5)
imshow(nueva2)
subplot(3,2,6)
imhist(nueva2)
ylim('auto')

%% Ecualización parte 2


%% Recién agregado

% s = zeros(f,c);
% 
% for j = 1:1:f
%     for k = 1:1:c
%         s(j,k) = 255*smt(gris(j,k));
%     end
% end
% 
% nueva = uint8(s);
% subplot(2,2,1)
% imshow(nueva)

% subplot(2,2,2)
% imhist(nueva)
% ylim('auto')
% %axis tight
% 
% nueva2 = histeq(gris);
% subplot(2,2,3)
% imshow(nueva2)
% 
% subplot(2,2,4)
% imhist(nueva2)
% ylim('auto')
% %axis tight


