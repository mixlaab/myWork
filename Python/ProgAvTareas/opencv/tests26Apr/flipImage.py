import cv2

img = cv2.imread('colorBalls.jpg')
h_img = cv2.flip(img,0)
v_img = cv2.flip(img,1)
b_img = cv2.flip(img,-1)
cv2.imshow('img1',img)
cv2.imshow('img2',h_img)
cv2.imshow('img3',v_img)
cv2.imshow('img4',b_img)
cv2.waitKey(0)
