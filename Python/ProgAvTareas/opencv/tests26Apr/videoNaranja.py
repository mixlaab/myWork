import cv2
import numpy as np
#frame = cv2.imread('colorBalls.jpg')
#hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

cap = cv2.VideoCapture(0)

#Parametros del detector de blobs
params = cv2.SimpleBlobDetector_Params()
params.filterByColor = False
params.filterByArea = True
params.minArea = 1000
params.maxArea = 10000
params.filterByInertia = False
params.filterByConvexity = False
params.filterByCircularity = False

#Crear el detector de blobs
det = cv2.SimpleBlobDetector_create(params)

naranjaInf = np.array([20, 120, 120])
naranjaSup = np.array([45, 255, 255])

while True:
    ret,frame = cap.read()
    hsv = cv2.cvtColor(frame,cv2.COLOR_BGR2HSV)
    naranjamask = cv2.inRange(hsv, naranjaInf, naranjaSup)
    res = cv2.bitwise_and(frame,frame,mask = naranjamask)

    #Puntos clave
    keypnts = det.detect(naranjamask)

    #Mostrar puntos clave
    cv2.drawKeypoints(frame,keypnts,frame,(0,0,255), cv2.DRAW_MATCHES_FLAGS_DRAW_RICH_KEYPOINTS)

    cv2.imshow('frame', frame)
    cv2.imshow('mascara',naranjamask)
    cv2.imshow('filtrado',res)

    if cv2.waitKey(1) & 0xff == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
