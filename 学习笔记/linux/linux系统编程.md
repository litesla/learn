#　unix/linux实践教程

##　第一章　ｌｉｎｕｘ系统编程概述

###　1.1　介绍

问题：什么是系统编程？，什么是ｎｕｉｘ系统编程

###　1.2　什么是系统编程

操作系统的职责：

　　计算机用操作系统来管理所有的资源

　　操作系统是一个程序，也运行在内存中

　　他能把普通程序与其他程序或设备链接起来

内存空间：

　　用来存放程序和数据

　　系统空间：容纳操作系统的内存空间

　　容纳应用的内存空间

###　1.3系统编程

系统资源：

１，处理器

　　程序是由指令构成的，处理器是执行指令的硬件设备。一个系统种中可能有多个处理器

内核能够安排一个程序何时开始，何时停止，回复执行，何时终止执行

２，输入输出　

　　程序中所有输入输出的数据，终端的输入/输出数据还有硬盘输入/输出数据，都必须流经内核，这种集中的处理方式有一下优点：正确性，有效性，安全性，

３，进程管理

　　进程指程序的一次运行，每个进程都有自己的资源，如内存，打开的文件和其他运行时所需的系统资源，内核中与进程相关的服务有新建一个进程，终止进程，进程调度

４，内存

　　内存是计算机系统中很重要的资源，程序必须被装载大内存中才可以运行，内核的职责之一是内存管理，字需要的时候给程序分配内存，当进程不需要的时候回收内存，还保证内存不被其他进程非法访问

５，设备

　　计算机系统中可以有各种各样的外设，如磁带机，光驱，鼠标，扫描仪和数码摄像机等

他们的操作方式各不相同，内核能屏蔽掉折中差异，使得对设备的操作方式简单而统一，例如一个程序想从数码相机中取出照片，它只需要向内核提出操作该资源的请求即可

６，计时器

　　程序的工作与时间有关，有的需要定时被触发，有的需要等一段时间再开始某个动作，

有点需要知道某一个操作消耗的时间，这些都涉及计时器，内核可以通过系统调用向应用程序提供计时器服务

７，进程间通信

在现实生活中人们通过电话，邮件，席间，广播，电视等互相通信，在计算机的世界中，进程也需要相互通信，内核提供服务使进程通信成为可能，就像电信和邮政一样

８．网络

　　网络间的通信可以看成是进程间通信的特殊形式





　　

　　