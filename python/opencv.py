import cv2

cap = cv2.VideoCapture(0)

if not cap.isOpened():
    print("Cannot open camera")
    exit()
while True:
    ret, frame = cap.read()
    if not ret:
        print("Cannot receive frame")
        break
    keyName = cv2.waitKey(1)
    if keyName == ord('q'):
        break
    if keyName == ord('a'):
        area = cv2.selectROI('uwu', frame, False, False)
        print(area)
    cv2.imshow('owo', frame)
cap.release()
cv2.destroyAllWindows()
