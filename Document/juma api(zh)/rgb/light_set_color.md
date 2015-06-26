#设置颜色
***
##函数声明
```
void light_set_color (const uint8_t* rgb_values);
```
***
##函数功能
设置调光灯 RGB(W) 的颜色。

***
##函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*rgb_values*|const uint8_t*|调光灯的颜色值
*返回值*  | 无    | 无

***
###关于 *rgb_values* 的说明 

*rgb_values* 的数值|说明
:-------- | :------
rgb_value[0]|R
rgb_value[1]|G
rgb_value[2]|B
rgb_value[3]|W

***
##函数举例
```	
	//当前函数
	void foo()
	{
		...
		
		uint8_t color[] = {111, 111, 111, 200};
		
		light_set_color(color);
		
		...
	}
```