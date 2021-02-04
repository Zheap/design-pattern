#pragma once

class Dough {
};

class ThinCrustDough : public Dough
{
};

class ThickCrustDough : public Dough
{
};

class Sauce {
};

class MarinaraSauce : public Sauce
{
};

class PlumTomatoSauce : public Sauce
{
};

class Veggies {
};

class Garlic : public Veggies {};
class Onion : public Veggies {};
class Mushroom : public Veggies {};
class RedPepper : public Veggies {};

class Cheese {
};

class ReggianoCheese : public Cheese
{
};

class Mazzarella : public Cheese
{
};

class Pepperoni {
};

class SlicedPeooeroni : public Pepperoni
{
};

class Clams {
};

class FreshClams : public Clams
{
};

class FrozenClams : public Clams
{
};