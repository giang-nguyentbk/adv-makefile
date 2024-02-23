# ModuleIf
This is a class providing an interface for other modules to call or use and functionalities in module1

For example:
+ In module1:
```c++
	Module1If* Module1If::getInstance()
	{
		if(pInstanceModule1 == nullptr)
		{
			pInstanceModule1 = new Module1();
		}
		return pInstanceModule1;
	}
```
 
+ In module2:
```c++
	Module1::Module1If::getInstance()->doSomething();
```
