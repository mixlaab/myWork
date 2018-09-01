clc
close all

cam = webcam('Integrated Webcam');
h = figure;

while (ishandle(h))
    data = snapshot(cam);
    [f,c,d] = size(data);
    R = zeros(f,c,d);
    %G = zeros(f,c,d);
    %B = zeros(f,c,d);
    R(:,:,1) = data(:,:,1);
    %G(:,:,2) = data(:,:,2);
    %B(:,:,3) = data(:,:,3);
    R= uint8(R);
    %G= uint8(G);
    %B= uint8(B);
    
    
    %subplot(1,3,1)
    imshow(R)
    %subplot(1,3,2)
    %imshow(G)
    %subplot(1,3,3)
    %imshow(B)
    
    hold on
    drawnow
end

clear cam
