# 工厂模式

工厂模式其实包含三类

1. 简单工厂
2. 工厂方法
3. 抽象工厂

## 简单工厂

**简单工厂其实并不是一种模式，而是一种编程习惯，它其实是通过创建Factory类，来封装创建对象的代码**

```
class PizzaStore{
public:
	PizzaStore(SimplePizzaFactory* factory);
	
	Pizza orderPizza(string type){
    	Pizza* pizza;
    
        pizza = createPizza(type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
	}

protected:
	SimplePizzaFactory* factory;
}
```

## 工厂方法模式

我理解工厂方法其实就是利用虚函数表这一多态特性，通过继承的形式，达到在运行时动态绑定对象

### 工厂方法模式定义

**工厂方法模式定义了一个创建对象的接口，但是由子类决定实例化的类时哪一个，工厂方法让类的实例化推迟了**

PizzaStore实现为工厂方法，因为它们需要根据区域的变化创建产品，通过工厂方法，每个区域都有自己的具体工厂

```
class PizzaStore{
public:
	Pizza orderPizza(string type){
    	Pizza* pizza;
    
        pizza = createPizza(type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
	}
	
	virtual Pizza* createPizza(string type) = 0;
}

class NYPizzaStore : public PizzaStore{}
class ChicagoPizzaStore : public PizzaStore{}
```

## 抽象工厂模式

### 抽象工厂模式定义

**抽象工厂模式提供一个接口，用于创建相关或者依赖对象的家族，而不需要明确指定具体类**

其实这里实现抽象工厂里的方法，使用的就是工厂方法的方式(继承)来实现

**抽象工厂的任务是定义一个负责创建一组产品的接口，这个接口内的每个方法都负责创建一个具体产品，同时我们利用实现抽象工厂的子类来提供这些具体的做法，所以在抽象工厂中利用工厂方法实现生产方法是相当自然的事。**

```
class PizzaIngredientFactory
{
public:
	virtual Dough* createDough() = 0;
	virtual Sauce* createSauce() = 0;
	virtual Cheese* createCheese() = 0;
	virtual vector<Veggies*> createVeggies() = 0;
	virtual Pepperoni* createPepperoni() = 0;
	virtual Clams* createClams() = 0;
};

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
};

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
};

Pizza* NYPizzaStore::createPizza(string type)
{
    Pizza* pizza = nullptr;
    PizzaIngredientFactory* ingredientFactory = new NYPizzaIngredientFactory();    // 抽象工厂是通过对象的组合来创建对象

    if (type == "cheese") {
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("New York Style Cheese Pizza");
    }
    else if (type == "clam") {
        pizza = new ClamPizza(ingredientFactory);
        pizza->setName("New York Style Clam Pizza");
    }
    return pizza;
}
```

