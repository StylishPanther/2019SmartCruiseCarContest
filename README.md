# 2019SmartCruiseCarContest

[단국대학교 MAZE](https://maze.co.kr) 단보르기니 팀 개발내용

개발 기간 : 2019.04 ~ 2019.08  

주관 : [한양대학교 Acelab](https://www.acelab.org/post/2019-%EC%A7%80%EB%8A%A5%ED%98%95-%EB%AA%A8%ED%98%95%EC%B0%A8-%EA%B2%BD%EC%A7%84%EB%8C%80%ED%9A%8C-%EA%B0%9C%EC%B5%9C)
후원 : Mathworks, Infineon

## 팀원 구성

|팀원|맡은 역할|
|:---:|:---:|
|[이진호(팀장)](https://github.com/StylishPanther)| 전체 지휘 총괄 및 일정 조율, PID 제어기, 주행 알고리즘 설계 |
|[고승일]|  |
|[박찬희]|  |
|[김원석]|| 
|[이장훈]||   

## 작품 목표    
<br>

1. Interrupt Scheduling을 통해서 안정적인 시스템 구현 
2. Line Scanning Camera 와 거리 센서에 Median Filter를 적용하여 안정적인 ADC값 추출  
3. Position 방식을 이용하여 곡률에 따른 좌, 우측 추종 정도 결정  
4. 속도 제한 구간(School Zone)에서 장애물 감지를 통한 차선 변경  
5. 정확한 속도 제어로 장애물과 충돌하지 않고 정지(AEB 구현)

<br>

## 동작 영상  

- [대회 영상 링크](https://www.youtube.com/watch?v=flaqk12rfIE)  

[<p align="center">![2019 한양대 지능형 모형차 연습주행 영상1](http://img.youtube.com/vi/Tsvbdj2qF64/0.jpg)](https://youtu.be/Tsvbdj2qF64)</p>
<p align="center"> < Lane Keeping System 테스트 (Velocity : 1200mm/s) ></p>  

[<p align="center">![2019 한양대 지능형 모형차 연습주행 영상2](http://img.youtube.com/vi/ERPSh8GMcic/0.jpg)](https://youtu.be/ERPSh8GMcic)</p>
<p align="center"> < Obstacle Avoidance & School Zone AEB 테스트 (Velocity : 1000mm/s) ></p> 

[<p align="center">![2019 한양대 지능형 모형차 연습주행 영상3](http://img.youtube.com/vi/_bbNJmzZtmc/0.jpg)](https://youtu.be/_bbNJmzZtmc)</p>
<p align="center"> < Roburtness for Driving Environment (Light) 테스트 (Velocity : 1000mm/s)></p>  
<p align="center"><img src="front.png" width="180px" height="160px"> <img src="side.png" width="180px" height="160px"></p>  
<p align="center"> < Autonomous Model Car (Width : 300mm Column : 450mm Height : 300mm ) ></p>  


## 작품 설명  

### 하드웨어 재원  

|Hardware Type|Model Name|Datasheet|  
|:---:|:---:|:---:|
|Line Scan Camera|TSL1401-DB|[PDF]()|  
|Infrared Distance Sensor|GP2Y0A02|[PDF]()|  
|Motor Driver|IFX007T|[PDF]()|    
|Motor|RS540SH|[PDF]()|  
|Encoder|30S4-1024-6-L-5|[PDF]()|
|Regulator|LM2576, TLE4271-2|[PDF]()|

### SDK

|SDK|Description|  
|:---:|:---:|  
|AruixRacer|Infineon SDK 제공|  
 

## Hardware Architecture  
<!--
<p align="center">
<img width="600"  src="Image/Hardware.png">
</p> 

## System Architecture  

<p align="center">
<img width="600"  src="Image/system_Architecture1.JPG">
</p> 

<p align="center">
<img width="600"  src="Image/system_Architecture2.JPG">
</p> 
-->

<!--## Reference  
- Darknet-ROS for OpenCV4 : [tom13133/darknet_ros](https://github.com/tom13133/darknet_ros)  
- Realsense ROS package : [IntelRealSense/realsense-ros](https://github.com/IntelRealSense/realsense-ros)  
- Serial : [serial ROS package](http://wiki.ros.org/serial)  
- Joystick for ROS : [joy ROS package](http://wiki.ros.org/joy)  
- Delay the launch of a roslaunch file : [timed_roslaunch ROS package](http://wiki.ros.org/timed_roslaunch)  
- ROS with OpenCV : [vision_opencv ROS package](http://wiki.ros.org/vision_opencv)

# [AurixRacer](./docs/index.md)
## Purpose & Scope

* 지능형 모형차 대회에 사용할 수 있는 Software Platform 을 제공
* 아울러 AURIX를 활용한 학부생 실습용 프로젝트 예제

## Links

- [AurixRacer Source Code](https://github.com/realsosy/AurixRacer/)
- [AurixRacer Documentation](http://aurixracer.readthedocs.io/ko/latest/) 
- [AurixTutorial Source Code](https://github.com/realsosy/AurixTutorial/)
- [AurixTutorial Documentation](http://aurixtutorial.readthedocs.io/ko/latest/) 

## Supporting AURIX Board

- ApplicationKit_TC237
- ShieldBuddy_TC275D

[![Analytics](https://ga-beacon.appspot.com/UA-137501847-1/AurixRacer/README.md?pixel)](https://github.com/realsosy/aurixracer)

-->
