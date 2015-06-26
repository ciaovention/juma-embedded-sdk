#设置设备名称
***
##函数声明
```
void ble_device_set_name(const char* device_name);
```

***
##函数功能
设置当前的 BLE 模块的名字。

***
###函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*device_name*|const char*|要设置的名字
*返回值*  | 无    | 无

***
##函数举例
```
	//当前函数
	void foo()
	{
		...
		
		ble_device_set_name("JUMA_BLE");	//设置本BLE模块的名字
				
		...
	}
	
```