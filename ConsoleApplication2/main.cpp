
#include "PositionComponent.h"
#include "HealthComponent.h"
#include "Entity.h"
#include "GravitySystem.h"
#include <memory>
#include <utility>
#include <iostream>
#include "TestSystem.h"
int main()
{

	std::shared_ptr<Entity> entity = std::shared_ptr<Entity>(new Entity());
	//entity->pushComponent(std::shared_ptr<HealthComponent>(new HealthComponent(12)));
	entity->pushComponent(std::shared_ptr<PositionComponent>(new PositionComponent(20,20)));

	GravitySystem gravity(1);
	gravity.update(entity);
	std::cout << "Test system" << std::endl;
	TestSystem test;
	test.update(entity);


	int i = 0;
	std::cin >> i;
	return 0;
}

