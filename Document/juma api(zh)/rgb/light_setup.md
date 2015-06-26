#调光灯配置
***
##函数声明
```
void light_setup (uint8_t* pins, uint8_t is_active_high);
```

***
##函数功能
调光灯的引脚配置。

***
##函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*pins*|uint8_t*|设置与rgb灯的连接引脚
*is_active_high*|uint8_t|高电平驱动还是低电平驱动
*返回值*  | 无    | 无

***
###关于 *pins* 的说明 
在 *juma_sdk_types.h* 中定义了`struct _light_config_t`：   

*pins* 的数值|说明
:-------- | :------
pins[0]|R
pins[1]|G
pins[2]|B
pins[3]|W

***
###关于 *is_active_high* 的说明 

*is_active_high* 的数值|说明
:-------- | :------
0|低电平驱动
非0|高电平驱动

***
##函数举例
```	
	//当前函数
	void foo()
	{
		...
		
		uint8_t rgb_pin[] = {11, 12, 13, 14};
		
		light_setup(rgb_pin, 1);
		
		...
	}

```