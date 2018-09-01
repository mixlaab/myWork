cam = webcam(1);

for idx = 1:100
    img = snapshot(cam);
    imshow(img)
end

clear cam;