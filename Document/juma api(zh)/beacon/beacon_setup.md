#Beacon配置
***
##函数声明
```
void beacon_setup(uint8_t* uuid, uint16_t major, uint16_t minor, uint8_t rssi);
```

***
##函数功能
设置 beacon 的参数。

***
##函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*uuid*|uint8_t* |uuid值
*major*|uint16_t|major
*minor*|uint16_t|minor
*rssi*|uint8_t|在距离发射源 1m 处的测量值(用于辅助测距)
*返回值*  | 无    | 无

***
##函数举例
```
	//当前函数
	void foo()
	{
		...
		
		uint8_t uuid[] = {0xff, 0xaa};	//uuid 根据用户需求指定
		
		//内部数据无意义，需用户实际使用过程中指定
		beacon_setup(uuid, 0x3332, 0x2323, 50);
		
		...
	}
```