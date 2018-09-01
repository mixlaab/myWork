orig = imread('degimg.PNG');
origGris = rgb2gray(orig);
[m,n] = size(orig_gris);

final = zeros(m,n);

for i = 1:1:m
    for j = 1:1:n
       if (0 <= origGris(i,j) < 80)
           final(i,j) = 0.7*origGris(i,j);
       end
       if (80 <= origGris(i,j) < 150)
           final(i,j) = 2*(origGris(i,j)-80);
       end
       if (150 <= origGris(i,j) < 255)
           final(i,j) = 0.8*(origGris(i,j)-150);
       end
    end
end