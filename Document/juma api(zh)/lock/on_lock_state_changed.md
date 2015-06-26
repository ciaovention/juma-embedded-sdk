#解锁状态事件
***
##函数声明
```
void on_lock_state_changed(uint8_t is_locked);
```


***
##函数功能
在锁的状态被改变后由系统调用。  
用于处理锁状态改变后的任务。

***
##函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*is_locked*|uint8_t|当前锁的状态
*返回值*  | void      | 无

***
###关于 *is_locked* 参数

*is_locked* 的数值|说明
:-------- | :------
0| 锁状态1
非0|锁状态2


***
##函数举例
```
	//当前函数
	void on_lock_state_changed(uint8_t is_locked)
	{
		...
	
		if(is_locked == 0)
		{
			rad_led_blink();	//伪指令
		}
		else
		{
			green_led_blink();	//伪指令
		}
	
		...
	}

```