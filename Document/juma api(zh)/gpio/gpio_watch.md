#注册回调函数
***
##函数声明
```
void gpio_watch (uint8_t pin, uint8_t change_direction);
```

***
##函数功能
向系统注册一个 GPIO 事件，当满足指定条件的引脚状态变化满足时，  
`on_gpio_pin_state_changed(uint8_t new_state);`  
将会由系统调用。

***
##函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*pin*    | uint8_t  | 引脚号
*change_direction*|uint8_t|检测的引脚的变化方式
*返回值*  | 无    | 无

***
###关于 *change_direction* 的描述
在 *juma_sdk_types.h* 中有定义如下

*返回值* 的数值|说明
:-------- | :------
GPIO_RISING | 上升沿
GPIO_FALLING| 下降沿

***
##函数举例
```
	//回调函数
	void	gpio_on_change(uint8_t  new_state)
	{
		...
		
		if(new_state == 0)
		{
			red_led_blink();	//伪指令
		}
		else
		{
			green_led_blink();	//伪指令
		}
		
		...
	}
	
	//当前函数
	void foo()
	{
		...
		
		//设置要检测的引脚，当指定的状态到达后会自动调用上面的回调函数
		gpio_watch(18, GPIO_RISING);			//当18脚有上升沿后，上述的回调函数会被调用户
		
		...
	}

```