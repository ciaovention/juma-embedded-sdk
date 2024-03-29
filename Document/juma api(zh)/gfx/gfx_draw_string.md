
#JUMA 绘图库 绘制一个字符串
***
##函数声明
```
void gfx_draw_string(uint16_t x, uint16_t y, char* str, uint8_t ppo);
```

***
##函数功能
在显示共享区中绘制一行字符串

***
##函数特点
JUMA的显示驱动部分由两部分构成，
一部分是显示驱动，负责与显示器通信，将要显示的内容映射到内存的一个空间中。
另一部分是绘图工具库，用来向特定的显示空间中写入数据。其提供了绘制，点、线、面、文字等常用的绘图工具。
<br>
在使用本函数之前首先需要利用gfx_set_font设定要显示的字符的字体类型。  <br>
当将字体类型设定好之后，就可以利用本函数去在显示共享区中绘制字符串了。


***
##函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*x*|uint16_t|要绘制字符的起始左上角坐标的x位置
*y*|uint16_t|要绘制字符的起始左上角坐标的x位置
*str*|char*|要显示的字符串的起始地址
*ppo*|uint8_t|对显示区域中的位的操作方式
*返回值*  |无|无

***
###关于 *ppo* 的描述
当ppo的取值为：<br>
0: 清空操作<br>
1: 写操作<br>
2: 取反操作 <br>  



***
##函数举例

```	
	
	//当前函数
	void foo()
	{
		...
		
		//在显示共享区中根据ppo的取值绘制一个起始左上角坐标为(x,y)的字符串
		gfx_draw_string(x, y, str, ppo);
	
		...
	}
```
