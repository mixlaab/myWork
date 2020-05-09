import cv2
img = cv2.imread('colorBalls.jpg')
gris = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
cv2.imshow('img', img)
cv2.imshow('imagen gris', gris)
cv2.waitKey(0)
