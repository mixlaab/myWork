orig = imread('poorcontrast.jpg');
origGris = rgb2gray(orig);
subplot(1,2,1)
imshow(origGris)
subplot(1,2,2)
imhist(origGris)
[m,n] = size(origGris);

final = zeros(m,n);

for i = 1:1:m
    for j = 1:1:n
       if (0 <= origGris(i,j) < 73)
           final(i,j) = 0.5*origGris(i,j);
       end
       if (77 <= origGris(i,j) < 85)
           final(i,j) = (1.5*(origGris(i,j)-73))+36.5;
       end
       if (145 <= origGris(i,j) < 255)
           final(i,j) = (0.5*(origGris(i,j)-85))+54.5;
       end
    end
end
final = uint8(final);
figure
subplot(1,2,1)
imshow(final)
subplot(1,2,2)
imhist(final)