# Embedded_GUI (Qt with C++)
![159455](https://github.com/wooyoungman/Embedded_GUI/assets/101693311/26bac2e4-cb23-48a9-883f-92b7d637d4cd)

---

## Tutorial
### LCD_Dial
* 사용한 위젯 (QMainWindow)
  * PushButton / LCD Number / Dial
* 구현 기능
  * ON 버튼 : “on” 출력 (qDebug 사용)
  * OFF 버튼 : “off” 출력 (qDebug 사용)
  * Dial 돌리기 : value 출력
### QTimer
* 사용한 위젯 (QMainWindow)
  * Progress bar, Push Button
* 구현 기능
  * GO버튼 : 다운로드가 진행된다. 100% 에서 정지
  * PAUSE버튼 : 다운로드가 멈춘다.
  * RESET버튼 : 다운로드를 0부터 다시 진행한다.
### QThread
* 사용한 위젯 (QMainWindow)
  * LCD Number, Push Button
* 구현 기능
  * start 버튼 : 카운팅 시작
  * stop 버튼 : 카운팅 종료
