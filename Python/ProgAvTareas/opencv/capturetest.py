import cv2
import numpy as np
#cap = cv2.VideoCapture(0)
cap = cv2.VideoCapture('http://192.168.15.9:4747/video')
#fourcc = cv2.VideoWriter_fourcc(*'XVID')
#vidWrite = cv2.VideoWriter('test_video.avi', \
#                fourcc, 20, (640,480))
while(True):
    ret,frame = cap.read()
#    vidWrite.write(frame)
    imgHSV = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    imgGray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    newBGR  =  cv2.cvtColor(imgGray,cv2.COLOR_GRAY2BGR)
    lower_red1 = np.array([0,120,50])
    upper_red1 = np.array([30,255,255])
    redMask1 = cv2.inRange(imgHSV,lower_red1,upper_red1)
    lower_red2 = np.array([150,120,50])
    upper_red2 = np.array([180,255,255])
    redMask2 = cv2.inRange(imgHSV,lower_red2,upper_red2)
    redMask = cv2.add(redMask1, redMask2)
    res = cv2.bitwise_and(frame, frame, mask=redMask)
    redGray = cv2.add(res,newBGR)
    cv2.imshow('video', redGray)
    cv2.imwrite('lastFrame.png', frame)
    if cv2.waitKey(1) & 0xff == ord('q'):
        break
cap.release()
#vidWrite.release()
cv2.destroyAllWindows()
